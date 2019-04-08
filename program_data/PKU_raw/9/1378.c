struct h{
	char name[11];
	int age;
};
void main(){
	int i,k,n;
	scanf("%d",&n);
	struct h p[100];
	for(i=0;i<n;i++){
		scanf("%s %d",p[i].name,&p[i].age);
	}
	for(k=100;k>59;k--){
		for(i=0;i<n;i++){
			if(k==p[i].age)
				printf("%s\n",p[i].name);
		}
	}
	for(i=0;i<n;i++){
		if(p[i].age<60)
			printf("%s\n",p[i].name);
	} 
}