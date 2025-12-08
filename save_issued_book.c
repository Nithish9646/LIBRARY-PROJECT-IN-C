#include "header.h"
void save_issued_book(struct st *ptr)
{
    if (ptr == 0)
    {
        printf("\n**** THERE IS NO BOOK ISSUED ****\n");
        return;
    }
     FILE *fp=fopen("issue","w");
    fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------------------\n");
    fprintf(fp,"|                                                  ISSUED BOOKS                                                                            |\n");
    fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------------------\n");
    fprintf(fp,"| %-10s | %-20s | %-10s | %-20s | %-12s | %-12s | %-16s | %-16s|\n",
           " USER ID ", " USER NAME ", " BOOK ID ", " BOOK NAME "," IN_DATE "," DUE_DATE ", " RETURN_DATE "," FINE AMOUNT ");
    fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    while (ptr != 0)
    {
        fprintf(fp,"| %-10d | %-20s | %-10d | %-20s | %-10s   | %-10s   |    %-10s    |    %-10d   |\n",
               ptr->user_id, ptr->user_name, ptr->book_id, ptr->book_name,ptr->in_date,ptr->due_date,ptr->return_date,ptr->fine_amount);
        fprintf(fp,"--------------------------------------------------------------------------------------------------------------------------------------------\n");
        ptr = ptr->next;
    }


}

