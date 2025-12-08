#include "header.h"
void remove_book(struct lb **ptr)
{
	if(*ptr==0)
	{
		printf("\n\n");
		printf("\t****THERE IS NO BOOKS TO REMOVE****\n");
		return;
	}
	char op;
	printf("\t\t\t----------------------------------------------\n");
	printf("\t\t\t|                REMOVE BOOK                 |\n");
	printf("\t\t\t----------------------------------------------\n");
	printf("\t\t\t|           A : BY BOOK ID                   |\n");
	printf("\t\t\t|           B : BY BOOK NAME                 |\n");
	printf("\t\t\t|           C : BACK TO MAIN MENU            |\n");
	printf("\t\t\t----------------------------------------------\n");
	printf("Enter Your Choise : ");
	scanf(" %c",&op);
	if((op=='a')||(op=='A'))
	{
		struct lb *temp,*prev,*temp1;
		int n;
		printf("Enter The Book ID : ");
		scanf("%d",&n);
		temp=*ptr;
		temp1=*ptr;
		int k=0;
		while(temp!=0)
		{
			if(temp->book_id==n)
			{
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
		char l;
		printf("DO YOU WANT TO REMOVE ENTER (y-yes/n-no) : ");
		scanf(" %c",&l);
		if((l=='Y')||(l=='y'))	
		{      
			while(temp1!=0)
			{
				if(temp1->book_id==n)
				{
					if(temp1==*ptr)
						*ptr=temp1->next;
					else
						prev->next=temp1->next;
					free(temp1);
					temp1=NULL;
					printf("****BOOK IS SUCCESSFULLY REMOVED****\n");
					return;
				}
				else
				{
					prev=temp1;
					temp1=temp1->next;
				}

			}
		}
		else
			return;

	}
	else if((op=='b')||(op=='B'))
	{
		struct lb *temp,*prev,*temp1;
		char name[20];
		printf("Enter The Book Name : ");
		scanf("%s",name);
		temp=*ptr;
		temp1=*ptr;
		int count=0,k=0;
		while(temp!=0)
		{
			if((strcmp(temp->book_name,name))==0)
			{
				if(k==0)
				{
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				}
				printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp->book_id,temp->book_name,temp->author_name,temp->book_type,temp->book_quantity,temp->ab,temp->ib);
				printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				k++;
				count++;
			}
			temp=temp->next;
		}
		if(count==1)
		{
			while(temp1!=0)
			{
				if((strcmp(temp1->book_name,name))==0)
				{
					if(temp1==*ptr)
						*ptr=temp1->next;
					else
						prev->next=temp1->next;
				char ok;
				printf("DO YOU WANT TO REMOVE (y-yes/n-no) :");
				scanf(" %c",&ok);
				if((ok=='y')||(ok=='Y'))
				{
					free(temp1);
					temp1=NULL;
					printf("****BOOK IS SUCCESSFULLY REMOVED****\n");
					return;
				}
				else
					return;
				}
				else
				{
					prev=temp1;
					temp1=temp1->next;
				}
			}
		}
		else if(count>1)
		{
			char op;

			printf("\t\t\t---------------------------------\n");
			printf("\t\t\t|         REMOVE BOOK           |\n");
			printf("\t\t\t---------------------------------\n");
			printf("\t\t\t|                               |\n");
			printf("\t\t\t|        A: BY AUTHOR           |\n");
			printf("\t\t\t|        B: BY BOOK ID          |\n");
			printf("\t\t\t|                               |\n");
			printf("\t\t\t---------------------------------\n");

			printf("Enter Your  Choise : ");
			scanf(" %c",&op);
			if((op=='a')||(op=='A'))
			{
				char name[20];
				printf("Enter the Author Name : ");
				scanf("%s",name);
				while(temp1!=0)
				{
					if((strcmp(temp1->author_name,name))==0)
					{
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp1->book_id,temp1->book_name,temp1->author_name,temp1->book_type,temp1->book_quantity,temp1->ab,temp1->ib);
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
						if(temp1==*ptr)
							*ptr=temp1->next;
						else
							prev->next=temp1->next;
				char ok;
				printf("DO YOU WANT TO REMOVE (y-yes/n-no) :");
				scanf(" %c",&ok);
				if((ok=='y')||(ok=='Y'))
				{
						free(temp1);
						temp1=NULL;
						printf("****BOOK IS SUCCESSFULLY REMOVED****\n");
						return;
				}
				else
					return;
					}
					else
					{
						prev=temp1;
						temp1=temp1->next;
					}
				}
			}
			else if((op=='b')||(op=='B'))
			{
				int n;
				printf("Enter The Book ID : ");
				scanf("%d",&n);
				while(temp1!=0)
				{
					if(temp1->book_id==n)
					{
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp1->book_id,temp1->book_name,temp1->author_name,temp1->book_type,temp1->book_quantity,temp1->ab,temp1->ib);
					printf("--------------------------------------------------------------------------------------------------------------------------------\n");
						if(temp1==*ptr)
							*ptr=temp1->next;
						else
							prev->next=temp1->next;
				char ok;
				printf("DO YOU WANT TO REMOVE (y-yes/n-no) :");
				scanf(" %c",&ok);
				if((ok=='y')||(ok=='Y'))
				{
						free(temp1);
						temp1=NULL;
						printf("****BOOK IS SUCCESSFULLY REMOVED****\n");
						return;
				}
				else
					return;
					}
					else
					{
						prev=temp1;
						temp1=temp1->next;
					}
				}
			}
		}
	}
	else if((op=='c')||(op=='C'))
		return;

}
