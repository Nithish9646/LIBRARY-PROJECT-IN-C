#include "header.h"
void view_all_book(struct lb *ptr)
{
	if(ptr==0)
	{
		printf("\n\n");
		printf("\t****THERE IS NO BOOKS****\n");
		return;
	}
	printf("--------------------------------------------------------------------------------------------------------------------------------\n");
	printf("|                                                                                                                              |\n");
	printf("|                                              **** LIBRARY BOOKS DETAILS ****                                                 |\n");
	printf("|                                                                                                                              |\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------\n");
	printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------\n");
	while(ptr!=0)
	{
		printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",ptr->book_id,ptr->book_name,ptr->author_name,ptr->book_type,ptr->book_quantity,ptr->ab,ptr->ib);
		printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			ptr=ptr->next;
	}
	printf("\n\n\n");
}
