#ifndef __ADRESS_BOOK_H__
#define __ADRESS_BOOK_H__
/*TODO: Add your structure here*/

struct Person {
  char name[30];
  int age;
  char number[30];
};

int numOfPeople;
struct array{
  struct Person people[numOfPeople];
};

//struct Person people[numOfPeople];

int bookSize;

struct Address_book {
  bookSize = sizeof(array);
  struct Person *peoplePtr;
};

/*Function declarations. Do not modify! Implement those functions in adress_book.c */
void print_person(const struct Person* person);
void print_address_book(const struct Address_book* address_book);

struct Address_book* create_address_book(void);
void destroy_address_book(struct Address_book* address_book);

#endif /* __ADDRESS_BOOK_H__ */
