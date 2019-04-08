struct student
{int num;
 int score1;
 int score2;
} stu[100000];

void main()
{
	int n,i,sum[100000],max=0,j,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d%d%d",&stu[i].num,&stu[i].score1,&stu[i].score2);
	sum[i]=stu[i].score1+stu[i].score2;}
	for(i=0;i<n;i++)
		if(sum[i]>max){max=sum[i];j=i;}
	max=0;
	for(i=0;i<n;i++)
		if(sum[i]>max&&i!=j){max=sum[i];k=i;}
	max=0;
	for(i=0;i<n;i++)
		if(sum[i]>max&&i!=j&&i!=k){max=sum[i];l=i;}
	printf("%d %d\n%d %d\n%d %d\n",stu[j].num,sum[j],stu[k].num,sum[k],stu[l].num,sum[l]);
}