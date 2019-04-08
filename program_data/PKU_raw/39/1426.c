struct qian{
char a[20];
	int b[1];
	int c[1];
	char d[2];
	char e[2];
	int f[1];
}stu[101];
void main()
{
	int exin(int A,int B,char C,char D,int E);
	int n;int x,y=0;int total=0;
	int i;
	
	int sum[101]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%c%c%c%c%d",stu[i].a,&stu[i].b[0],&stu[i].c[0],&stu[i].d[0],&stu[i].d[1],&stu[i].e[0],&stu[i].e[1],&stu[i].f[0]);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=exin(stu[i].b[0],stu[i].c[0],stu[i].d[1],stu[i].e[1],stu[i].f[0]);
		
	}
	for(i=0;i<n;i++)
	{
		total=total+sum[i];
	}

	x=sum[0];
	for(i=1;i<n;i++)
	{
		if(sum[i]>x)
		{
			x=sum[i];
			y=i;
		}
	}
	printf("%s\n",stu[y].a);
	
	printf("%d\n%d",x,total);
	
}
int exin(int A,int B,char C,char D,int E)
{
	   int k=0;
		if(A>80&&E>=1)k=k+8000;
		if(A>85&&B>80)k=k+4000;
		if(A>90)k=k+2000;
		if(A>85&&D=='Y')k=k+1000;
		if(B>80&&C=='Y')k=k+850;
		return(k);
}