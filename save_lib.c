#include "header.h"
void save_lib(struct lb *ptr)
{
        if(ptr==0)
        {
                printf("\n\n");
                printf("\t****THERE IS NO BOOKS****\n");
                return;
        }
	FILE *fp=fopen("library","w");
        fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------\n");
        fprintf(fp,"|                                                                                                                              |\n");
        fprintf(fp,"|                                              **** LIBRARY BOOKS DETAILS ****                                                 |\n");
        fprintf(fp,"|                                                                                                                              |\n");
        fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------\n");
        fprintf(fp,"| BOOK_ID\tNAME\t\t\tAUTHOR\t\t\tBOOK_TYPE\t\tQUANTITY\tAVAILABLE\tISSUED |\n");
        fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------\n");
        while(ptr!=0)
        {
                fprintf(fp,"| %d\t\t%-10s\t\t%-10s\t\t%-10s   \t\t %d   \t\t %d\t\t   %d   |\n",ptr->book_id,ptr->book_name,ptr->author_name,ptr->book_type,ptr->book_quantity,ptr->ab,ptr->ib);
                fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------\n");
                        ptr=ptr->next;
        }
        printf("\n\n\n");
}

