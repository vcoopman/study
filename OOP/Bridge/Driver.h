class Driver {

  public:
    Driver(Car* car) : _car(car) {};

    virtual ~Driver() = default;

    virtual void driveDragRace() const {
      this->_car->use_throttle();
      this->_car->use_break();
    };

  protected:
    // Car is protected because this allows to extend
    // the Driver class if needed and still use the Car without making changes.
    Car* _car;

};
