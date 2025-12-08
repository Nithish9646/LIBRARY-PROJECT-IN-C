outfile: lb_main.o add_end.o view_all_book.o remove_book.o search_book.o update_book_detail.o issue_book.o list_issued_book.o save_lib.o save_issued_book.o return_book.o
	cc lb_main.c add_end.c view_all_book.c remove_book.c search_book.c update_book_detail.c issue_book.c list_issued_book.c save_lib.c save_issued_book.c return_book.c -o lib
lb_main.o:lb_main.c
	cc -c lb_main.c
add_end.o:add_end.c
	cc -c add_end.c
view_all_book.o:view_all_book.c
	cc -c view_all_book.c
remove_book.o:remove_book.c
	cc -c remove_book.c
search_book.o:search_book.c
	cc -c search_book.c
update_book_detail.o:update_book_detail.c
	cc -c update_book_detail.c
issue_book.o:issue_book.c
	cc -c issue_book.c
list_issued_book.o:list_issued_book.c
	cc -c list_issued_book.c
save_lib.o:save_lib.c
	cc -c save_lib.c
save_issued_book.o:save_issued_book.c
	cc -c save_issued_book.c
return_book.o:return_book.c
	cc -c return_book.c


