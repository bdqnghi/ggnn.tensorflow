struct sick
{
	char num[10];
	int age;
};
int main()
{
	int i,j,n;
	int s;
	char swap[10];
	struct sick all[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&all[i].num);
		scanf("%d",&all[i].age);
	}
	for(i=1;i<n;i++){
		for(j=i;j>0;j--){
			if(all[j].age>=60&&all[j].age>all[j-1].age){
				s=all[j].age;
				all[j].age=all[j-1].age;
				all[j-1].age=s;
				strcpy(swap,all[j].num);
				strcpy(all[j].num,all[j-1].num);
				strcpy(all[j-1].num,swap);
			}
			else{
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		puts(all[i].num);
	}
	return 0;
}
