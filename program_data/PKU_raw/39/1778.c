struct qian
{
	char a[20];
	int b[1];
	int c[1];
	char d[2];
	char e[2];
	int f[1];
}stu[100];

void main()
{
	int n,k,x,y=0,total=0,i,sum[100]={0};
	scanf("%d",&n); 
	for(i=0;i<n;i++)
		scanf("%s%d%d%c%c%c%c%d",stu[i].a,&stu[i].b[0],&stu[i].c[0],&stu[i].d[0],&stu[i].d[1],&stu[i].e[0],&stu[i].e[1],&stu[i].f[0]); 
	for(i=0;i<n;i++)
	{  
		k=0;
		if(stu[i].b[0]>80&&stu[i].f[0]>=1)k=k+8000;
		if(stu[i].b[0]>85&&stu[i].c[0]>80)k=k+4000;
		if(stu[i].b[0]>90)k=k+2000;
		if(stu[i].b[0]>85&&stu[i].e[1]=='Y')k=k+1000;
		if(stu[i].c[0]>80&&stu[i].d[1]=='Y')k=k+850;
		sum[i]=k;
	}
	for(i=0;i<n;i++) 
		total=total+sum[i];
	x=sum[0];
	for(i=1;i<n;i++)
	{  
		if(sum[i]>x)
		{
			x=sum[i];
			y=i;
		} 
	}
	printf("%s\n%d\n%d\n",stu[y].a,x,total);
}