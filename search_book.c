#include "header.h"
void search_book(struct lb *ptr)
{
	printf("------------------------------------------------\n");
	printf("|               SEARCH BOOK                    |\n");                   
	printf("------------------------------------------------\n");
	printf("|                                              |\n");
	printf("|            A : SEARCH BY BOOK ID             |\n");
	printf("|            B : SEARCH BY BOOK NAME           |\n");
	printf("|            C : SEARCH BY AUTHOR              |\n");
	printf("|            D : SEARCH BY BOOK TYPE           |\n");
	printf("|            E : BACK TO MAIN MENU             |\n");
	printf("|                                              |\n");
	printf("------------------------------------------------\n");

	char op;
	printf("ENTER YOUR CHOISE : ");
	scanf(" %c",&op);
	if((op=='A')||(op=='a'))
	{
		struct lb *temp;
		temp=ptr;
		int n;
		printf(" ENTER THE BOOK ID : ");
		scanf("%d",&n);
		int k=0,u=0;
		while(temp!=0)
		{
			if(temp->book_id==n)
			{
				if(k==0)
				{
					u++;
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				}
				printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp->book_id,temp->book_name,temp->author_name,temp->book_type,temp->book_quantity,temp->ab,temp->ib);
				printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				k++;
			}
			temp=temp->next;
		}
		if(u==0)
			printf(" THERE IS NO BOOK FROM THIS BOOK ID \n");
	}
	else if((op=='b')||(op=='B'))
	{
		struct lb *temp;
		char name[20];
		printf("Enter The Book Name : ");
		scanf("%s",name);
		temp=ptr;
		int k=0,u=0;
		while(temp!=0)
		{
			if((strcmp(temp->book_name,name))==0)
			{
				u++;
				if(k==0)
				{
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				}
				printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp->book_id,temp->book_name,temp->author_name,temp->book_type,temp->book_quantity,temp->ab,temp->ib);
				printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				k++;
			}
			temp=temp->next;
		}
		if(u==0)
			printf(" THERE IS NO BOOK FROM THIS BOOK NAME \n");
	}
	else if((op=='c')||(op=='C'))
	{
		struct lb *temp;
		char name[20];
		printf("Enter The Book Author Name : ");
		scanf("%s",name);
		temp=ptr;
		int k=0,u=0;
		while(temp!=0)
		{
			if((strcmp(temp->author_name,name))==0)
			{
				u++;
				if(k==0)
				{
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				}
				printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp->book_id,temp->book_name,temp->author_name,temp->book_type,temp->book_quantity,temp->ab,temp->ib);
				printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				k++;
			}
			temp=temp->next;
		}
		if(u==0)
			printf(" THERE IS NO BOOK FROM THIS AUTHOR NAME \n");
	}
	else if((op=='d')||(op=='D'))
	{
		struct lb *temp;
		char name[20];
		printf("Enter The Book Type : ");
		scanf("%s",name);
		temp=ptr;
		int k=0,u=0;
		while(temp!=0)
		{
			if((strcmp(temp->book_type,name))==0)
			{
				if(k==0)
				{
					u++;
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				}
				printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp->book_id,temp->book_name,temp->author_name,temp->book_type,temp->book_quantity,temp->ab,temp->ib);
				printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				k++;
			}
			temp=temp->next;
		}
		if(u==0)
			printf(" THERE IS NO BOOK FROM THIS BOOK TYPE \n");
	}
	else if((op=='e')||(op=='E'))
		return;
}
