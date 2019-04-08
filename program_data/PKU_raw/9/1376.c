

int main(){
	int sixty[100];
         	int n,i,j,a;
         struct patient{
	char num[11];
	int age;
         }peo[100];
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s %d",peo[i].num,&peo[i].age);
		if(peo[i].age>=60){
			sixty[i]=peo[i].age;
			
		}else{
			
			sixty[i]=0;
		}
	}

	for(j=0;j<n-1;j++){
		for(i=n-1;i>j;i--){
			if(sixty[i-1]<sixty[i]){
				a=sixty[i-1];
				sixty[i-1]=sixty[i];
				sixty[i]=a;
				
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sixty[i]==peo[j].age&&sixty[i]!=sixty[i-1]){      				printf("%s\n",peo[j].num);
			}                                                            			
		}
	}
	for(i=0;i<n;i++){
		if(peo[i].age<60){
			printf("%s\n",peo[i].num);
		}
	}
	

	return 0;
	
}