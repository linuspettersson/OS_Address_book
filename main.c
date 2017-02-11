#include "address_book.h"

int main(void) {
  Person* address_book = (Person*) malloc(numOfPeople * sizeof(bookSize));
  for (int i = 0, i < numOfPeople, i++) {
    data_entry(&address_book[i]);
  }
  print_address_book(address_book);
