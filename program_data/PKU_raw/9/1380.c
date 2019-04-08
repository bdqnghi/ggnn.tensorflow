struct patient
{
	char name[10];
	int age;
}p[100],e,old[100],young[100];

int main()
{
	int n,i,j=0,k=0,o=-1,y=-1;
	scanf("%d",&n);
	struct patient p[100],old[100],young[100];
	for(i=0;i<n;i++){
		scanf("%s %d",p[i].name,&p[i].age);
		if((p[i].age)>=60){
			o++;
			old[j]=p[i];
			j++;
			
		}else{
			y++;
			young[k]=p[i];
			k++;
			
		}
	}//?????
	for(i=120;i>=60;i--){
		for(j=0;j<o+1;j++){
			if(old[j].age==i){
				printf("%s\n",old[j].name);
			}
		}	
	}//?????????? ? ??????????????
	for(i=0;i<y+1;i++){
		printf("%s\n",young[i].name);
	}
	return 0;
}