#include "MailingList.h" 
#include "Person.h"

int main()
{
  MailingList* mailingList = new MailingList();
  Person* person1 = new Person("Dani");
  Person* person2 = new Person("Jani");
  Person* person3 = new Person("Coni");

  mailingList->attach(person1);
  mailingList->attach(person2);
  mailingList->attach(person3);

  mailingList->notify();

  mailingList->detach(person1);

  mailingList->notify();

  delete mailingList;
  delete person1;
  delete person2;
  delete person3;

  return 0;
};
