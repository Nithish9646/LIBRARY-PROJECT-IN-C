#include "header.h"
void issue_book(struct st **iptr,struct lb **p)
{
	if(*p==0)
	{
		printf("\n****THERE IS NO BOOK TO ISSUE****\n");
		return;
	}
	struct lb *ptr=*p;
	printf("\n\n\n");
	struct st *temp;
	temp=(struct st *)malloc(sizeof(struct st));
	struct lb *temp1;
	struct lb *temp2;
	temp2=*p;
	int n;
	printf(" ENTER THE BOOK ID : ");
	scanf("%d",&n);
	temp1=*p;
	int k=0;
	while(temp1!=0)
	{
		if(temp1->book_id==n)
		{
			if(k==0)
			{
				printf("--------------------------------------------------------------------------------------------------------------------------------\n");
				printf("| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
				printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			}
			printf("| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",temp1->book_id,temp1->book_name,temp1->author_name,temp1->book_type,temp1->book_quantity,temp1->ab,temp1->ib);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			k++;
		}
		temp1=temp1->next;
	}
	int yes=0;
	while(temp2!=0)
	{
		if(temp2->book_id==n)
		{ 
			yes++;
			//USER DETAILS
			printf("Enter the User ID : ");
			scanf("%d",&temp->user_id);
			printf("Enter the User Name : ");
			scanf("%s",temp->user_name);
			char y[20]="Not Return";
			strcpy(temp->return_date,y);
			temp->fine_amount=0; 

			temp->book_id=n;
			strcpy(temp->book_name,temp2->book_name);
			temp2->ab=temp2->ab-1;
			if(temp2->ab<0)
			{
				printf("THERE IS NO AVAILABILITY OF BOOK \n");
				return;
			}
			temp2->ib=temp2->ib+1;
			// IN DATE FOR USER
			char date[20];
			time_t t = time(NULL);

			if (t == (time_t)-1) {
				perror("time failed");
			}

			struct tm *tm_ptr = localtime(&t);
			if (tm_ptr == NULL) {
				perror("localtime failed");
			}

			if (strftime(date, sizeof(date), "%d/%m/%Y", tm_ptr) == 0) {
				fprintf(stderr, "strftime failed: buffer too small.\n");
			}

			strcpy(temp->in_date,date);

			// DUE DATE FOR USER 

			char date1[20];
			time_t f = time(NULL);

			if (f == (time_t)-1) {
				perror("time failed");
			}

			// Add 7 days (7 * 24 hours * 60 minutes * 60 seconds) to the current time 't'
			f += 7 * 24 * 60 * 60;

			struct tm *tm_p = localtime(&f);
			if (tm_p == NULL) {
				perror("localtime failed");
			}

			if (strftime(date1, sizeof(date1), "%d/%m/%Y", tm_p) == 0) {
				fprintf(stderr, "strftime failed: buffer too small.\n");
			}
			strcpy(temp->due_date,date1);

		}
		temp2=temp2->next;
	}
	if(yes>0)
	{
		printf("****BOOK IS SUCCESSFULLY ISSUED****\n");
	}
	if(*iptr==0)
	{
		temp->next=*iptr;
		*iptr=temp;
	}
	else
	{
		struct st *last=*iptr;
		while(last->next!=0)
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}

}
