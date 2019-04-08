int n,m,s1[100],s2[100],i,j,t;
int main()

{
	void get_in(void);
    void sort(int s1[],int s2[]);
    void putout();
	get_in();
	sort(s1,s2);
	putout();
	return 0;
}

void get_in(void)
{
	scanf("%d%d\n",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s1[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&s2[i]);
	}
}

void sort(int s1[],int s2[])
{
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(s1[i]>s1[i+1])
			{
				t=s1[i];s1[i]=s1[i+1];s1[i+1]=t;
			}
		}
	}
	for(j=0;j<m-1;j++)
	{
		for(i=0;i<m-1-j;i++)
		{
			if(s2[i]>s2[i+1])
			{
				t=s2[i];s2[i]=s2[i+1];s2[i+1]=t;
			}
		}
	}
}

void putout()
{
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			printf("%d",s1[i]);
		}
		else
		{
			printf(" ");
			printf("%d",s1[i]);
		}
	}
	for(i=0;i<m;i++)
	{
		printf(" ");
		printf("%d",s2[i]);
		
	}
}

