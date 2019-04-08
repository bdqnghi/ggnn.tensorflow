
typedef struct{
	int sex;
	char h[5];
	double height;
}person;

int main(){
	int N;
	int i = 0;
	int count = 0;
	person* line;
	scanf("%d\n", &N);
	line = (person*)malloc(sizeof(person)*N);
	while(i < N){
		char sex;
		char tmp;
		char h[5];
		int k = 0;
		int point = 0;
		int num = 0;
		int j = 0;
		double number;
		int length = 0;
		scanf("%c", &sex);
		while((tmp = fgetc(stdin)) != ' '){
		}


		scanf("%s", &h);
		fgetc(stdin);

		while(h[j] != '\0'){
			line[i].h[j] = h[j];
			j++;
		}
		line[i].h[j] = '\0';

		while(h[k] != '\0'){
			int one = 0;
			if(h[k] == '.'){
				point = k;
			}
			else{
				one = h[k] - 48;
				num = num*10 + one;
			}
			k++;
			length++;
		}
		point = length - point - 1;
		number = (double)num/(pow(10.0,point));

		line[i].height = number;
		if(sex == 'm')
			line[i].sex = 1;
		if(sex == 'f')
			line[i].sex = 0;
		i++;
	}

	i = N-1;
	while(i > 0){
		int k = 0;
		while(k < i){
			if(line[k].height > line[k+1].height){
				person tmp = line[k];
				line[k] = line[k+1];
				line[k+1] = tmp;
			}
			k++;
		}
		i--;
	}

	i = 0;
	while(i < N){
		if(line[i].sex == 1){
			printf("%s", line[i].h);
			count++;
			if(count != N)
			printf(" ");
		else 
			printf("\n");
		}
		
		i++;
	}
	i = N-1;
	while(i >= 0){
		if(line[i].sex == 0){
			printf("%s", line[i].h);
			count++;
			if(count != N)
			printf(" ");
		else 
			printf("\n");
		}
		
		i--;
	}
	return 0;
}