#include "header.h"
void return_book(struct st **ptr,struct lb **p)
{

	printf("----------------------------------------\n");
	printf("|        1. SEARCH BY USER ID          |\n");
	printf("|        2. BACK TO MAIN MENU          |\n");
	printf("----------------------------------------\n\n\n");

	int num;
	printf("ENTER YOUR CHOICE : ");
	scanf("%d",&num);
	char date3[20];
	//int newdate;
	//printf(" ENTER THE HOW MUCH DAY YOU NEEDED : ");
	//scanf("%d",&newdate);
	time_t t = time(NULL);

	if (t == (time_t)-1) {
		perror("time failed");
	}
	//t += newdate * 24 * 60 * 60;
	t += 10 * 24 * 60 * 60;

	struct tm *tm_ptr = localtime(&t);
	if (tm_ptr == NULL) {
		perror("localtime failed");
	}

	if (strftime(date3, sizeof(date3), "%d/%m/%Y", tm_ptr) == 0) {
		fprintf(stderr, "strftime failed: buffer too small.\n");
	}
	//if (strftime(date1, sizeof(date1), "%d", tm_ptr) == 0) {
	//	fprintf(stderr, "strftime failed: buffer too small.\n");
	//	}
	if(num==1)
	{
		int ui,k=0,m=0;
		printf("ENTER THE USER ID : ");
		scanf("%d",&ui);
		struct st *temp1;
		temp1=*ptr;
		struct lb *tm;
		tm=*p;
		struct st *temp;
		temp=*ptr;
		while(temp!=0)
		{
			if(temp->user_id==ui)
			{
				m++;
				if(k==0)
				{
					printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("| %-10s | %-20s | %-10s | %-20s | %-12s | %-12s | %-16s | %-16s|\n",
							" USER ID ", " USER NAME ", " BOOK ID ", " BOOK NAME "," IN_DATE "," DUE_DATE ", " RETURN_DATE "," FINE AMOUNT ");
					printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
				printf("| %-10d | %-20s | %-10d | %-20s | %-10s   | %-10s   |    %-10s    |    %-10d   |\n",
						temp->user_id, temp->user_name, temp->book_id, temp->book_name,temp->in_date,temp->due_date,temp->return_date,temp->fine_amount);
				printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
				k++;

			}
			temp=temp->next;
		}
		if(m==0)
		{
			printf("THERE IS NO BOOKS FROM THIS ID\n");
			return;
		}
		int bb;
		char date1[20];
		printf("enter the date : ");
		scanf("%s",date1);
		int kilo=atoi(date1);
		printf("ENTER THE BOOK ID : ");
		scanf("%d",&bb);
		while(temp1!=0)
		{
			if(temp1->user_id==ui)
			{
				//strcpy(temp1->return_date,date3);
				int time;
				time=atoi(temp1->due_date);
				int sum=0;
				while(kilo>time)
				{
					kilo--;
					sum=sum+10;
				}
				temp1->fine_amount=sum;
				while(tm!=0)
				{
					if(tm->book_id==bb)
					{
						tm->ab=tm->ab+1;
						tm->ib=tm->ib-1;
						strcpy(temp1->return_date,date1);
						printf("***BOOK IS RETURNED SUCCESSFULLY***\n");
					}
					tm=tm->next;
				}
			}
			temp1=temp1->next;
		}
	}
	else if(num==2)
		return;

}
