typedef struct {
 	char name[20];
 	int height;
 	int weight;
 }person;
 person people[5] = {
 	{"fd", 177, 65},
 	{"dc", 165, 77},
 	{"ca", 165, 66},
 	{"bd", 166, 66},
 	{"ad", 166, 44}
 } ;
void sort(void) {
    
    int sorted = 0;
    person* p;
    person* q;
    person tmp;

    while (1) {
        
        p = NULL;
        q = NULL;

        sorted = 0;
        for (int i = 0; i < 3; i++) {
            
            p = &people[i+1];
            q = &people[i];
           
            if (strcmp(p->name, q->name) < 0) {
                
                tmp = *p;
                *p = *q;
                *q = tmp;
                
            }else{
                sorted += 1;
            }
           
            if (sorted==3){
                sorted = 1;
            }
            printf("%d", sorted);
        }
        if (sorted == 1){
            break;
        }
    }
}
 int ex7(void) {

 	/*for (int i = 0; i < 5; i++) {
 		printf("%d��� ����� �?� ? �����?� �?��?���", i);
 		scanf("%s %d %d", &people[i].name, &people[i].height, &people[i].weight);
 	}
 	for (int i = 0; i < 5; i++) {
 		printf("%s %d %d\n", people[i].name, people[i].height, people[i].weight);
 	}*/
// 	for (int i = 0; i < 5; i++) {
// 		printf("%s %d %d\n", *people[i].name, people[i].height, people[i].weight);
// 	}
 	sort();
 	for (int i = 0; i < 5; i++) {
 		printf("%s %d %d\n", people[i].name, people[i].height, people[i].weight);
 	}
 	return 0;
 }

