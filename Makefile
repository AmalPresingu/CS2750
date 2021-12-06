calc: menu.c tests.c helper.c
	gcc  menu.c tests.c helper.c -o calc
 
clean:
	rm calc
