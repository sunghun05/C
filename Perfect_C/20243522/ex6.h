
typedef struct {
	char name[20];
	char number[20];
	char adress[50];
	char person_num[20];
	double score;
	char dep[20];
	char dream[20];
	char prof[20];
}student;


int ex6(void) {
	int st_num;
	student students[] = {
		{"????", "010-1234-1234", "??????????", "20241111", 4.0, "??????��?", "????" ,"??��"},
		{"????", "010-4567-7413", "???��???????", "20241112", 3.0, "??????��?", "??????" ,"??��"},
		{"????", "010-4692-7452", "???��??????", "20241113", 3.4, "??????��?", "??????" ,"??��"},
		{"?????", "010-5347-4512", "??????????", "20241114", 4.0, "??????��?", "????" ,"??��"},
		{"?????", "010-1284-7551", "??????????", "20241115", 3.1, "??????��?", "??????" ,"??��"},
		{"?????", "010-7822-4825", "??????????", "20241116", 4.1, "??????��?", "??????" ,"??��"},
		{"??????", "010-4961-4521", "????????", "20241117", 3.2, "??????��?", "??????" ,"??��"},
		{"??????", "010-8941-4586", "?????????", "20241118", 4.3, "??????��?", "???????" ,"??��"},
		{"??�h", "010-5464-4183", "?????????", "20241119", 3.2, "??????��?", "?????????" ,"??��"},
	};
	st_num = sizeof(students) / sizeof(student);
	printf("???   ??????      ???         ?��?     ????     ?��?             ????     ????????\n");
	for (int i = 0; i < st_num; i++) {
		printf("%s %s %s %s %f %s %10s %10s\n",
			students[i].name, students[i].number, students[i].adress, students[i].person_num, 
			students[i].score, students[i].dep, students[i].dream, students[i].prof);
	}

}