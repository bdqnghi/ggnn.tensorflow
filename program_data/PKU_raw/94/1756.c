int main(){
	int an[500];
	int n,i,max=1,point=1;
	char x;
	x=',';
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&an[i]);
	for(i=0;i<n;i++){
		if(an[i]>max&&an[i]%2==1)
			max=an[i];
	}
	while(point<=max-2){
		for(i=0;i<n;i++){
			if(an[i]==point){
				printf("%d%c",an[i],x);
				break;
			}
		}
		point+=2;
	}
	for(i=0;i<n;i++){
		if(an[i]==point){
			printf("%d",an[i]);
			break;
		}
	}
	return 0;
}
