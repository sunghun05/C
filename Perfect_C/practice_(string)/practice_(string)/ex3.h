int i = 1, len = 0;
int num;
int number[5];

int ex3(void) {

    char *Engnum[] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}, *ten[] = {" ", "ten", "hundred", "thousand"};

    
    
    while(1){
        printf("10000 보다 작은 정수 하나를 입력하세요 : ");
        scanf("%d", &num);
        if (num>0 && num<10000){
            break;
        }
    }
    i=10;
    
    while((num/i)>=1){
        number[len] = (num%i)/(i/10);
        i*=10;
        len++;
    }
    i/=10;
    number[len] = num/i;
    len++;

    for (int k = len-1; k>=0; k--){

        
        if (k!=1){
            printf("%s %s ", Engnum[number[k]], ten[k]);
        }else{
            printf("%s ", Engnum[number[k]+8]);
        }
        
    }
    return 0;
}
