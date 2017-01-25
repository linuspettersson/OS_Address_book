#include "address_book.h"

void data_entry(Person *person) {
  printf("Enter number of people to add to the address book: \n");
  scanf("%d", numOfPeople);
  printf("Enter full name: \n");
  scanf("%d", person.name);
  printf("Enter age: \n");
  scanf("%d", person.age);
  printf("Enter phone number: \n");
  scanf("%d", person.number);
}

void print_person(Person *person) {
  printf("Name: %s\n Age: %d\n Phone number: %S\n\n", person.name, person.age, person.number);
}

void print_address_book(Person *address_book) {
  printf("==== Address book (" + numOfPeople + " entries) ====");
  int i;
  for (i=1, i < bookSize, i++) {
    print_person(address_book[i]);
  }
}
