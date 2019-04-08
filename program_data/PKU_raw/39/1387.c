struct stu
{
	char str[30];
	int a,b;
	char s1,s2;
	int c;
	int e;
}sm[1000];
void main()
{
	int t,i,max,sum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s%d%d %c %c%d",sm[i].str,&sm[i].a,&sm[i].b,&sm[i].s1,&sm[i].s2,&sm[i].c);
		sm[i].e=0;
	}
	for(i=0;i<t;i++)
	{	if((sm[i].a)>80&&(sm[i].c)>=1)
		{
			(sm[i].e)=(sm[i].e)+8000;
		}
		if((sm[i].a)>85&&(sm[i].b)>80)
		{
			(sm[i].e)=(sm[i].e)+4000;
		}
		if((sm[i].a)>90)
		{
			(sm[i].e)=(sm[i].e)+2000;
		}
		if((sm[i].a)>85&&(sm[i].s2)=='Y')
		{
			(sm[i].e)=(sm[i].e)+1000;
		}
		if((sm[i].b)>80&&(sm[i].s1)=='Y')
		{
			(sm[i].e)=(sm[i].e)+850;
		}
	}
	max=sm[0].e;
	sum=sm[0].e;
	for(i=1;i<t;i++)
	{
		if(max<sm[i].e)
			max=sm[i].e;
		sum=sum+sm[i].e;
	}
	for(i=0;i<t;i++)
	{
		if(sm[i].e==max)
		{
			printf("%s\n%d\n",sm[i].str,sm[i].e);
		    break;
		}
	}
	printf("%d",sum);
}
	




