#include "header.h"
void update_book_detail(struct lb ** ptr)
{
	if(*ptr==0)
	{
		printf("\n\n");
		printf("\t **** THERE IS NO BOOKS TO UPDATE DETAILS ****\n");
		return;
	}
	printf("\t\t\t----------------------------------------------\n");
	printf("\t\t\t|             UPDATE BOOK DETAILS            |\n");
	printf("\t\t\t----------------------------------------------\n");
	printf("\t\t\t|                                            |\n");
	printf("\t\t\t|            A : UPDATE BY BOOK ID           |\n");
	printf("\t\t\t|            B : UPDATE BY BOOK NAME         |\n");
	printf("\t\t\t|            C : BACK TO MAIN MENU           |\n");
	printf("\t\t\t|                                            |\n");
	printf("\t\t\t----------------------------------------------\n");

	char op;
	printf("ENTER YOUR CHOICE : ");
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
		while(temp1!=0)
		{
			if(temp1->book_id==n)
			{
				char ch;
				printf("\t\t\t-----------------------------------------------\n");
				printf("\t\t\t|             UPDATE BOOK DETAILS             |\n");
				printf("\t\t\t-----------------------------------------------\n");
				printf("\t\t\t|            A : UPDATE BOOK ID               |\n");
				printf("\t\t\t|            B : UPDATE BOOK NAME             |\n"); 
				printf("\t\t\t|            C : UPDATE AUTHOR NAME           |\n"); 
				printf("\t\t\t|            D : UPDATE BOOK TYPE             |\n"); 
				printf("\t\t\t|            E : UPDATE BOOK QUANTITY         |\n"); 
				printf("\t\t\t|            F : UPDATE BOOK AVAILABILITY     |\n"); 
				printf("\t\t\t|            G : UPDATE BOOK ISSUED           |\n"); 
				printf("\t\t\t-----------------------------------------------\n");

				printf("ENTER YOUR CHOICE : ");
				scanf(" %c",&ch);

				if((ch=='a')||(ch=='A'))
				{
					int num;
					printf("ENTER THE BOOK ID TO UPDATE : ");
					scanf("%d",&num);
					temp1->book_id=num;
					printf("****BOOK ID IS UPDATED SUCCESSFULLY****\n");
					return;
				}
				else if((ch=='B')||(ch=='b'))
				{
					char name[20];
					printf("ENTER THE BOOK NAME TO UPDATE : ");
					scanf("%s",name);
					strcpy(temp1->book_name,name);
					printf("****BOOK NAME IS UPDATED SUCCESSFULLY****\n");
					return;
				}
				else if((ch=='c')||(ch=='C'))
				{
					char name[20];
					printf("ENTER THE AUTHOR NAME TO UPDATE : ");
					scanf("%s",name);
					strcpy(temp1->author_name,name);
					printf("****BOOK AUTHOR NAME IS UPDATED SUCCESSFULLY****\n");
					return;
				}
				else if((ch=='d')||(ch=='D'))
				{
					char name[20];
					printf("ENTER THE BOOK TYPE TO UPDATE : ");
					scanf("%s",name);
					strcpy(temp1->book_type,name);
					printf("****BOOK TYPE IS UPDATED SUCCESSFULLY****\n");
					return;

				}
				else if((ch=='e')||(ch=='E'))
				{
					int num;
					printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
					scanf("%d",&num);
					temp1->book_quantity=num;
					printf("****BOOK QUANTITY IS UPDATED SUCCESSFULLY****\n");
					return;
				}
				else if((ch=='f')||(ch=='F'))
				{
					int num;
					printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
					scanf("%d",&num);
					temp1->ab=num;
					printf("****BOOK AVAILABILITY IS UPDATED SUCCESSFULLY****\n");
					return;
				}
				else if((ch=='g')||(ch=='G'))
				{
					int num;
					printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
					scanf("%d",&num);
					temp1->ib=num;
					printf("****ISSUED BOOK IS UPDATED SUCCESSFULLY****\n");
					return;
				}
			}
			temp1=temp1->next;
		}

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
					char ch;
					printf("\t\t\t-----------------------------------------------\n");
					printf("\t\t\t|             UPDATE BOOK DETAILS             |\n");
					printf("\t\t\t-----------------------------------------------\n");
					printf("\t\t\t|            A : UPDATE BOOK ID               |\n");
					printf("\t\t\t|            B : UPDATE BOOK NAME             |\n"); 
					printf("\t\t\t|            C : UPDATE AUTHOR NAME           |\n"); 
					printf("\t\t\t|            D : UPDATE BOOK TYPE             |\n"); 
					printf("\t\t\t|            E : UPDATE BOOK QUANTITY         |\n"); 
					printf("\t\t\t|            F : UPDATE BOOK AVAILABILITY     |\n"); 
					printf("\t\t\t|            G : UPDATE BOOK ISSUED           |\n"); 
					printf("\t\t\t-----------------------------------------------\n");

					printf("ENTER YOUR CHOICE : ");
					scanf(" %c",&ch);

					if((ch=='a')||(ch=='A'))
					{
						int num;
						printf("ENTER THE BOOK ID TO UPDATE : ");
						scanf("%d",&num);
						temp1->book_id=num;
						printf("****BOOK ID IS UPDATED SUCCESSFULLY****\n");
						return;
					}
					else if((ch=='B')||(ch=='b'))
					{
						char name[20];
						printf("ENTER THE BOOK NAME TO UPDATE : ");
						scanf("%s",name);
						strcpy(temp1->book_name,name);
						printf("****BOOK NAME IS UPDATED SUCCESSFULLY****\n");
					}
					else if((ch=='c')||(ch=='C'))
					{
						char name[20];
						printf("ENTER THE AUTHOR NAME TO UPDATE : ");
						scanf("%s",name);
						strcpy(temp1->author_name,name);
						printf("****BOOK AUTHOR NAME IS UPDATED SUCCESSFULLY****\n");
						return;
					}
					else if((ch=='d')||(ch=='D'))
					{
						char name[20];
						printf("ENTER THE BOOK TYPE TO UPDATE : ");
						scanf("%s",name);
						strcpy(temp1->book_type,name);
						printf("****BOOK TYPE IS UPDATED SUCCESSFULLY****\n");
						return;

					}
					else if((ch=='e')||(ch=='E'))
					{
						int num;
						printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
						scanf("%d",&num);
						temp1->book_quantity=num;
						printf("****BOOK QUANTITY IS UPDATED SUCCESSFULLY****\n");
						return;
					}
					else if((ch=='f')||(ch=='F'))
					{
						int num;
						printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
						scanf("%d",&num);
						temp1->ab=num;
						printf("****BOOK AVAILABILITY IS UPDATED SUCCESSFULLY****\n");
						return;
					}
					else if((ch=='g')||(ch=='G'))
					{
						int num;
						printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
						scanf("%d",&num);
						temp1->ib=num;
						printf("****ISSUED BOOK IS UPDATED SUCCESSFULLY****\n");
						return;
					}
				}
				temp1=temp1->next;
			}
		}
		else if(count>1)
		{
			char op;
			printf("\t\tTHERE IS MULTIPLE BOOKS WITH SAME NAMES SO CHOOSE FROM THESE TWO TO UPDATE DETAILS\n\n\n");
			printf("\t\t\t---------------------------------\n");
			printf("\t\t\t|                               |\n");
			printf("\t\t\t|        A: BY AUTHOR           |\n");
			printf("\t\t\t|        B: BY BOOK ID          |\n");
			printf("\t\t\t|                               |\n");
			printf("\t\t\t---------------------------------\n");

			printf("Enter Your  Choice : ");
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
						char ch;
						printf("\t\t\t-----------------------------------------------\n");
						printf("\t\t\t|             UPDATE BOOK DETAILS             |\n");
						printf("\t\t\t-----------------------------------------------\n");
						printf("\t\t\t|            A : UPDATE BOOK ID               |\n");
						printf("\t\t\t|            B : UPDATE BOOK NAME             |\n"); 
						printf("\t\t\t|            C : UPDATE AUTHOR NAME           |\n"); 
						printf("\t\t\t|            D : UPDATE BOOK TYPE             |\n"); 
						printf("\t\t\t|            E : UPDATE BOOK QUANTITY         |\n"); 
						printf("\t\t\t|            F : UPDATE BOOK AVAILABILITY     |\n"); 
						printf("\t\t\t|            G : UPDATE BOOK ISSUED           |\n"); 
						printf("\t\t\t-----------------------------------------------\n");

						printf("ENTER YOUR CHOICE : ");
						scanf(" %c",&ch);

						if((ch=='a')||(ch=='A'))
						{
							int num;
							printf("ENTER THE BOOK ID TO UPDATE : ");
							scanf("%d",&num);
							temp1->book_id=num;
							printf("****BOOK ID IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='B')||(ch=='b'))
						{
							char name[20];
							printf("ENTER THE BOOK NAME TO UPDATE : ");
							scanf("%s",name);
							strcpy(temp1->book_name,name);
							printf("****BOOK NAME IS UPDATED SUCCESSFULLY****\n");
						}
						else if((ch=='c')||(ch=='C'))
						{
							char name[20];
							printf("ENTER THE AUTHOR NAME TO UPDATE : ");
							scanf("%s",name);
							strcpy(temp1->author_name,name);
							printf("****BOOK AUTHOR NAME IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='d')||(ch=='D'))
						{
							char name[20];
							printf("ENTER THE BOOK TYPE TO UPDATE : ");
							scanf("%s",name);
							strcpy(temp1->book_type,name);
							printf("****BOOK TYPE IS UPDATED SUCCESSFULLY****\n");
							return;

						}
						else if((ch=='e')||(ch=='E'))
						{
							int num;
							printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
							scanf("%d",&num);
							temp1->book_quantity=num;
							printf("****BOOK QUANTITY IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='f')||(ch=='F'))
						{
							int num;
							printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
							scanf("%d",&num);
							temp1->ab=num;
							printf("****BOOK AVAILABILITY IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='g')||(ch=='G'))
						{
							int num;
							printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
							scanf("%d",&num);
							temp1->ib=num;
							printf("****ISSUED BOOK IS UPDATED SUCCESSFULLY****\n");
							return;
						}
					}
					temp1=temp1->next;
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
						char ch;
						printf("\t\t\t-----------------------------------------------\n");
						printf("\t\t\t|             UPDATE BOOK DETAILS             |\n");
						printf("\t\t\t-----------------------------------------------\n");
						printf("\t\t\t|            A : UPDATE BOOK ID               |\n");
						printf("\t\t\t|            B : UPDATE BOOK NAME             |\n");
						printf("\t\t\t|            C : UPDATE AUTHOR NAME           |\n");
						printf("\t\t\t|            D : UPDATE BOOK TYPE             |\n");
						printf("\t\t\t|            E : UPDATE BOOK QUANTITY         |\n");
						printf("\t\t\t|            F : UPDATE BOOK AVAILABILITY     |\n");
						printf("\t\t\t|            G : UPDATE BOOK ISSUED           |\n");
						printf("\t\t\t-----------------------------------------------\n");

						printf("ENTER YOUR CHOICE : ");
						scanf(" %c",&ch);

						if((ch=='a')||(ch=='A'))
						{
							int num;
							printf("ENTER THE BOOK ID TO UPDATE : ");
							scanf("%d",&num);
							temp1->book_id=num;
							printf("****BOOK ID IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='B')||(ch=='b'))
						{
							char name[20];
							printf("ENTER THE BOOK NAME TO UPDATE : ");
							scanf("%s",name);
							strcpy(temp1->book_name,name);
							printf("****BOOK NAME IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='c')||(ch=='C'))
						{
							char name[20];
							printf("ENTER THE AUTHOR NAME TO UPDATE : ");
							scanf("%s",name);
							strcpy(temp1->author_name,name);
							printf("****BOOK AUTHOR NAME IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='d')||(ch=='D'))
						{
							char name[20];
							printf("ENTER THE BOOK TYPE TO UPDATE : ");
							scanf("%s",name);
							strcpy(temp1->book_type,name);
							printf("****BOOK TYPE IS UPDATED SUCCESSFULLY****\n");
							return;

						}
						else if((ch=='e')||(ch=='E'))
						{
							int num;
							printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
							scanf("%d",&num);
							temp1->book_quantity=num;
							printf("****BOOK QUANTITY IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='f')||(ch=='F'))
						{
							int num;
							printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
							scanf("%d",&num);
							temp1->ab=num;
							printf("****BOOK AVAILABILITY IS UPDATED SUCCESSFULLY****\n");
							return;
						}
						else if((ch=='g')||(ch=='G'))
						{
							int num;
							printf("ENTER THE BOOK QUANTITY TO UPDATE : ");
							scanf("%d",&num);
							temp1->ib=num;
							printf("****ISSUED BOOK IS UPDATED SUCCESSFULLY****\n");
							return;
						}
					}
					temp1=temp1->next;
				}

			}
		}
	}
}
