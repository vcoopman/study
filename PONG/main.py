import time
import curses
import threading

REFRESH_INTERVAL = 0.050

class Ball:
    def __init__(self, stdscr):
        self.stdscr = stdscr
        self.x = 10
        self.y = 3 
        self.height = 1
        self.width = 1
        self.y_dir = "down"
        self.x_dir = "right"
        self.travel_dist = 1

    def _update_pos(self):
        y_max, x_max = self.stdscr.getmaxyx()

        if self.y + self.height >= y_max - 1:
            self.y_dir = "up"
        elif self.y <= 0:
            self.y_dir = "down"

        if self.x + self.width>= x_max - 1:
            self.x_dir = "left"
        elif self.x <= 0:
            self.x_dir = "right"

        if self.y_dir == "up":
            self.y = self.y - self.travel_dist
        elif self.y_dir == "down":
            self.y = self.y + self.travel_dist
        else:
            raise exception("this should never happen!")

        if self.x_dir == "right":
            self.x = self.x + self.travel_dist
        elif self.x_dir == "left":
            self.x = self.x - self.travel_dist
        else:
            raise exception("this should never happen!")

    def _draw(self):
        for y in range (self.y, self.y + self.height):
            self.stdscr.addstr(y , self.x, "O" * self.width)

    def draw(self):
        self._update_pos()
        self._draw()

    def draw_pos(self, y , x):
        # draws ball position at the given y,x
        self.stdscr.addstr(y, x, f"Y {self.y}, X {self.x}")


class Racket:
    def __init__(self, stdscr):
        self.stdscr = stdscr
        self.x = 2 
        self.y = 3 
        self.height = 2
        self.width = 1

        self._start_move_thread()
        self.key = None

    def _move_thread(self):
        while True:
            self.key = self.stdscr.getkey()
            time.sleep(0.1)

    def _start_move_thread(self):
        self.move_t = threading.Thread(target=self._move_thread)
        self.move_t.start()

    def _draw(self):
        for y in range (self.y, self.y + self.height):
            self.stdscr.addstr(y , self.x, "|" * self.width)

    def _update_pos(self):
        if self.key == curses.KEY_UP:
            raise Exception("TEST")

    def draw(self):
        self._update_pos()
        self._draw()

    def draw_key(self, y, x):
        self.stdscr.addstr(y, x, f"KEY: {self.key}")


def configure(stdscr):
    # TODO: Hide cursor.
    print(curses.__file__)
    print(dir(stdscr))



def display_size(stdscr):
    height, width = stdscr.getmaxyx()
    stdscr.addstr(0 ,0, f"H {height}, W {width}")


def main(stdscr):
    configure(stdscr)

    ball = Ball(stdscr)
    player = Racket(stdscr)
    while True:
        stdscr.clear()

        ball.draw()
        player.draw()

        display_size(stdscr)
        ball.draw_pos(0, 20)
        player.draw_key(0, 40)
        
        stdscr.refresh()
        time.sleep(REFRESH_INTERVAL)

curses.wrapper(main)
