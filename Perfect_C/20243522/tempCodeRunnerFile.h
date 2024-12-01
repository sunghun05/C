
// typedef struct {
// 	char name[20];
// 	int height;
// 	int weight;
// }person;
// person people[5] = {
// 	{"유재석", 177, 65},
// 	{"조세호", 165, 77},
// 	{"김우석", 165, 66},
// 	{"이승희", 166, 66},
// 	{"조은진", 166, 44}
// };
// void sort(void);
// int ex7(void) {

// 	/*for (int i = 0; i < 5; i++) {
// 		printf("%d번째 사람의 이름 키 몸무게를 입력하세요", i);
// 		scanf("%s %d %d", &people[i].name, &people[i].height, &people[i].weight);
// 	}
// 	for (int i = 0; i < 5; i++) {
// 		printf("%s %d %d\n", people[i].name, people[i].height, people[i].weight);
// 	}*/
// 	for (int i = 0; i < 5; i++) {
// 		printf("%s %d %d\n", people[i].name, people[i].height, people[i].weight);
// 	}
// 	sort();
// 	for (int i = 0; i < 5; i++) {
// 		printf("%s %d %d\n", people[i].name, people[i].height, people[i].weight);
// 	}
// 	return 0;
// }
// void sort(void) {

// 	person* p;
// 	person* q;
// 	person* tmp;
// 	p = &people;
// 	q = p;
// 	tmp = p;
// 	while (1) {
// 		for (int i = 0; i < 3; i++) {
// 			p = &people[i + 1];
// 			q = &people[i];
			
// 			if (strcmp(*p->name, *q->name) == -1) {
// 				tmp = p;
// 				p = q;
// 				q = tmp;
// 			}
// 		}
// 		break;
// 	}
// }
