int main()
{
	void row(char x[],int num[],int l,char a,char b);
	char a,b;
	int l,m,n,t,i,q;
	int num[101]={0};
	char x[101];
	gets(x);
	l=strlen(x);
	a=x[0];
	b=x[l-1];
	row(x,num,l,a,b);
	for(m=0;m<l-1;m=m+2)
	{
		for(n=0;n<l-4-m;n=n+2)
		{
			if(num[n+1]>num[n+3])
			{
				t=num[n+1];
				num[n+1]=num[n+3];
				num[n+3]=t;
				q=num[n];
				num[n]=num[n+2];
				num[n+2]=q;
			}
		}
	}
	for(i=0;i<l-1;i=i+2)
	{
		printf("%d %d\n",num[i],num[i+1]);
	}
}

void row(char x[],int num[],int l,char a,char b)
{
	int i,j,t=0,count=0,flag=0;
	for(;count<l/2;)
	{
	for(i=0;i<l;i++)
	{
		if(x[i]!=a)
			continue;
		for(j=i+1,flag=0;j<l;j++)
		{
			if(x[j]==a)
				flag++;
			if(x[j]==b&&flag==0)
			{
				num[t]=i;
				num[t+1]=j;
				x[i]=32;
				x[j]=32;
				count++;
				t=t+2;
				break;
			}
		}
	}
	}
}