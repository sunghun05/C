struct home_adress {
	int st_num;
	char street[20];
    char city[20];
};

typedef struct home_adress adress;

int ex4(void){
	adress add1 = {223, "??????", "?????"};
	adress add2 = {.city = "?????", .st_num = 567, .street = "???��?"};
	printf("%s %s %d\n", add1.city, add1.street, add1.st_num);
	printf("%s %s %d\n", add2.city, add2.street, add2.st_num);

	return 0;
}