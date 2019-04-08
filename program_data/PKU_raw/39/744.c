struct student
{
	char name[20];
	int test;
	int term;
	char key;
	char west;
	int art;
	int money;
}person[100];
int main()
{
	int n,i,j,q=0,k;
	struct student temp;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s %d %d %c %c %d",person[i].name,&person[i].test,&person[i].term,&person[i].key,&person[i].west,&person[i].art);
	    person[i].money=0;
		if(person[i].art>0&&person[i].test>80) {person[i].money=person[i].money+8000;}
		if(person[i].test>85&&person[i].term>80) {person[i].money=person[i].money+4000;}
		if(person[i].test>90) {person[i].money=person[i].money+2000;}
		if(person[i].test>85&&person[i].west=='Y') {person[i].money=person[i].money+1000;}
		if(person[i].term>80&&person[i].key=='Y') {person[i].money=person[i].money+850;}
		q=q+person[i].money;
	}
	for(i=0;i<=n-2;i++)
	{
	    k=i;
		for(j=i+1;j<=n-1;j++)
			if(person[j].money>person[k].money)
				k=j;
		temp=person[k]; person[k]=person[i];person[i]=temp;
	}
	printf("%s\n",person[0].name);
	printf("%d\n",person[0].money);
	printf("%d",q);
	return 0;
}
