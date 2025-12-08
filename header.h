#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct lb
{
	int book_id;
	char book_name[20];
	char author_name[20];
	char book_type[20];
	int book_quantity;
	int ab;
	int ib;
	struct lb *next;
};
struct st
{
	int user_id;
	char user_name[20];
	int book_id;
	char book_name[20];
	char in_date[20];
	char due_date[20];
	char return_date[20];
	int fine_amount;
	struct st *next;
};

void add_end(struct lb **);
void view_all_book(struct lb *);
void remove_book(struct lb **);
void search_book(struct lb *);
void update_book_detail(struct lb **);
void issue_book(struct st **,struct lb **);
void list_issued_book(struct st *);
void save_lib(struct lb *);
void save_issued_book(struct st *);
void return_book(struct st **,struct lb **);

