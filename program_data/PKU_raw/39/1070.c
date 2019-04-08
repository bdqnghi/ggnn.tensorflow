
int main ()
{
	int n,sum=0,max,i;
	struct stus {
		char as[21],e,f;
		int a,b,c,mon;
	}stus[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",stus[i].as,&stus[i].a,&stus[i].b,&stus[i].e,&stus[i].f,&stus[i].c);
	}
	for(i=0;i<n;i++)
	{
		stus[i].mon=0;
	}
	for(i=0;i<n;i++)
	{
		if(stus[i].a>80 && stus[i].c>=1)
		{
			stus[i].mon+=8000;
		}
		if(stus[i].a>85 && stus[i].b>80)
		{
			stus[i].mon+=4000;
		}
		if(stus[i].a>90)
		{
			stus[i].mon+=2000;
		}
		if(stus[i].a>85 && stus[i].f=='Y')
		{
			stus[i].mon+=1000;
		}
		if(stus[i].b>80 && stus[i].e=='Y')
		{
			stus[i].mon+=850;
		}
	}
	max=0;
	for(i=0;i<n;i++)
	{
		if(max<stus[i].mon)
		{
			max=stus[i].mon;
		}
		sum+=stus[i].mon;
	}
	for(i=0;i<n;i++)
	{
		if(max==stus[i].mon)
		{
			printf("%s\n",stus[i].as);
			printf("%d\n",max);
			printf("%d\n",sum);
			break;
		}
	}
	return 0;
}