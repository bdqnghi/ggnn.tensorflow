int a,b;
int c[1000],d[1000];
void scan1()
{
	scanf("%d %d",&a,&b);
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<b;i++)
	{
		scanf("%d",&d[i]);
	}
}

void order()
{
	int i,j,k;
	for(i=0;i<a;i++)
	{
		for(j=0;j<a-1;j++)
		{
			if(c[j]>c[j+1])
			{
				k=c[j];
				c[j]=c[j+1];
				c[j+1]=k;
			}
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<b-1;j++)
		{
			if(d[j]>d[j+1])
			{
				k=d[j];
				d[j]=d[j+1];
				d[j+1]=k;
			}
		}
	}
}
void hebing()
{
	int i;
	for(i=0;i<b;i++)
	{
		c[a+i]=d[i];
	}
}
void shuchu()
{
	int i;
	for(i=0;i<a+b;i++)
	{
		if(i)printf(" ");
		printf("%d",c[i]);
	}
} 
main()
{
	scan1();
	order();
	hebing();
	shuchu();
}
