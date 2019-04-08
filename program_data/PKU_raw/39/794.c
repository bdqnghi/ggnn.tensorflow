
struct Student
	{char name[30];
	 int q;
	 int b;
	 char s;
	 char x;
	 int w;
	 int money;
	};
int main()
{
	struct Student stu[100];
	struct Student temp;
	int n,sum=0,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%d%d %c %c%d",&stu[i].name,&stu[i].q,&stu[i].b,&stu[i].s,&stu[i].x,&stu[i].w);
		stu[i].money=0;
		if(stu[i].q>80&&stu[i].w>0)
			stu[i].money=stu[i].money+8000;
		if(stu[i].q>85&&stu[i].b>80)
			stu[i].money=stu[i].money+4000;
		if(stu[i].q>90)
			stu[i].money=stu[i].money+2000;
		if(stu[i].q>85&&stu[i].x=='Y')
			stu[i].money=stu[i].money+1000;
		if(stu[i].b>80&&stu[i].s=='Y')
			stu[i].money=stu[i].money+850;
	}
	for(i=0;i<n;i++){
		sum=sum+stu[i].money;
	}
	for(i=0;i<n;i++){
		k=i;
		for(j=i+1;j<n;j++)
		if(stu[j].money>stu[k].money)
			k=j;
		temp=stu[k];stu[k]=stu[i];stu[i]=temp;
	}
	printf("%s\n%d\n%d\n",stu[0].name,stu[0].money,sum);
	return 0;
}
