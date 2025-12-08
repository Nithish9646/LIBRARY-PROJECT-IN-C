#include "header.h"
static int x=9646;
void add_end(struct lb **ptr)
{
	struct lb *temp;
	temp=(struct lb *)malloc(sizeof(struct lb ));
	temp->book_id=x++;
	printf("enter the book name\n");
	scanf("%s",temp->book_name);
	printf("enter the author name\n");
	scanf("%s",temp->author_name);
	printf("enter the type of book is this\n");
	scanf("%s",temp->book_type);
	printf("enter the quantity of the book\n");
	scanf("%d",&temp->book_quantity);
	temp->ab=temp->book_quantity;
	temp->ib=0;
	if(*ptr==0)
	{
	temp->next=*ptr;
	*ptr=temp;
	}
	else
	{
		struct lb *last=*ptr;
		while(last->next!=0)
		last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}
