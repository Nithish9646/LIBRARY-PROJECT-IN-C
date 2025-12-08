#include "header.h"

int main()
{
	struct lb *hptr=0;
	struct st *ihptr=0;
	int num;

	while(1)
	{
		printf("\t\t\t\t\t\t\t-----------------------------------------------\n");
		printf("\t\t\t\t\t\t\t|            BOOK MANAGEMENT MENU             |\n");
		printf("\t\t\t\t\t\t\t-----------------------------------------------\n");
		printf("\t\t\t\t\t\t\t|         1. Add New Book                     |\n");
		printf("\t\t\t\t\t\t\t|         2. Update Book Details              |\n");
		printf("\t\t\t\t\t\t\t|         3. Remove Book                      |\n");
		printf("\t\t\t\t\t\t\t|         4. Search Book                      |\n");
		printf("\t\t\t\t\t\t\t|         5. View All Books                   |\n");
		printf("\t\t\t\t\t\t\t|         6. Issue Book                       |\n");
		printf("\t\t\t\t\t\t\t|         7. Return Book                      |\n");
		printf("\t\t\t\t\t\t\t|         8. List Issued Books                |\n");
		printf("\t\t\t\t\t\t\t|         9. Save                             |\n");
		printf("\t\t\t\t\t\t\t|         10.Exit                             |\n");
		printf("\t\t\t\t\t\t\t-----------------------------------------------\n");


		printf("Enter the num : ");
		scanf("%d",&num);
		if(num==1)
		{


			char op;
			do
			{
				add_end(&hptr);
				printf("do you want to add(y/n)\n");
				scanf(" %c",&op);
			}while(op=='y');
			system("clear");
		}
		else if(num==2)
		{
			update_book_detail(&hptr);
		}
		else if(num==5)
		{
			view_all_book(hptr);
		}
		else if(num==10)
			return 0;
		else if(num==3)
		{
			remove_book(&hptr);
		}
		else if(num==4)
		{
			search_book(hptr);
		}
		else if(num==6)
		{
			issue_book(&ihptr,&hptr);
		}
		else if(num==8)
		{
			list_issued_book(ihptr);
		}
		else if(num==9)
		{
			int x;
			printf("--------------------------------------------------\n");
			printf("|       1. SAVE LIBRARY LIST                     |\n");
			printf("|       2. SAVE ISSUED DETAIL                    |\n");
			printf("|       3. SAVE BOTH LIBRARY & ISSUED DETAILS    |\n");
			printf("--------------------------------------------------\n");
			printf("Enter The Num : ");
			scanf("%d",&x);
			if(x==1)
			{
				save_lib(hptr);
			}
			else if(x==2)
			{
				save_issued_book(ihptr);
			}
			else if(x==3)
			{
				save_lib(hptr);
				save_issued_book(ihptr);
			}
		}
		else if(num==7)
		{
			return_book(&ihptr,&hptr);
		}
		else
			return 0;
	}

}
