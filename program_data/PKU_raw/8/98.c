int str1[100],str2[100],str[200];
int m,n;
void f1()
{
	int i;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&str1[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&str2[i]);
	}
}
void f2(int s[100],int k)
{
	int i,j,t;
	for(j=0;j<k-1;j++)
	{
		for(i=0;i<k-1;i++)
		{
			if(s[i]>s[i+1])
			{
				t=s[i];s[i]=s[i+1];s[i+1]=t;
			}
		}
	}
}
void f3(int s1[100],int s2[100],int s[200],int m,int n)
{
	int i;
	for(i=0;i<m;i++)
	{
		s[i]=s1[i];
	}
	for(i=0;i<n;i++)
	{
		s[i+m]=s2[i];
	}
}
void f4(int s[200],int m,int n)
{
	int i;
	for(i=0;i<m+n;i++)
	{
		printf("%d",s[i]);
		if(i<m+n-1)
			printf(" ");
	}
	printf("\n");
}
	
void main()
{
	f1();
	f2(str1,m);
	f2(str2,n);
	f3(str1,str2,str,m,n);
	f4(str,m,n);
}
