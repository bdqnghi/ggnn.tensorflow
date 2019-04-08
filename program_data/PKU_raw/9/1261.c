
struct peo{
	char id[11];
	int age;
};

int main(){
	struct peo people[100];
	struct peo sixty[100];

	int n,b=0,i,j,k,e;
	char a[11];

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s %d",people[i].id,&people[i].age);
		if(people[i].age>=60){
			sixty[i].age=people[i].age;
			strcpy(sixty[i].id,people[i].id);
			b+=1;
		}else{
			strcpy(sixty[i].id,"0000");
			sixty[i].age=0;
		}
	}

	for(k=0;k<n-1;k++){
		for(i=n-1;i>k;i--){
			if(sixty[i-1].age<sixty[i].age){
				e=sixty[i-1].age;
				sixty[i-1].age=sixty[i].age;
				sixty[i].age=e;
				strcpy(a,sixty[i-1].id);
				strcpy(sixty[i-1].id,sixty[i].id);
				strcpy(sixty[i].id,a);
			}
		}
	}
	for(i=0;i<b;i++){
		printf("%s\n",sixty[i].id);
			
	}
	for(i=0;i<n;i++){
		if(people[i].age<60){
			printf("%s\n",people[i].id);
		}
	}
	

	return 0;
	
}
