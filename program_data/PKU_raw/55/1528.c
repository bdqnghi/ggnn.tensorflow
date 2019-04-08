int toten(int,char *);
void tento(int,char *,int);
int main()
{
	int a,b,sum;
	char x[100];
	scanf("%d %s %d",&a,x,&b);
	sum=toten(a,x);
	tento(sum,x,b);
	puts(x);
	return 0;
}
int toten(int a,char *x)
{
	int n=strlen(x);
	char as[100];
	int sum=0,i,j,c,b[100];
	for(i=0;i<n;i++)
		{
			if('a'<=x[i]&&x[i]<='z')
				b[i]=x[i]-'a'+10;
			if('A'<=x[i]&&x[i]<='Z')
				b[i]=x[i]-'A'+10;
			if('0'<=x[i]&&x[i]<='9')
				b[i]=x[i]-'0';
			sum+=b[i]*pow(a*1.0,n-i-1);
	    }
	return sum;
}
void tento(int sum,char *x,int b)
{
	int a[100],i=0,j,c[100];
	i=0;
	if(sum==0)
		{x[0]='0';
		x[1]='\0';}
	else
	{
	while(sum>0)
	{
	a[i]=sum%b;
	sum=(sum-a[i])/b;
	i++;
    }
	for(j=0;j<i;j++)
	{
	c[j]=a[i-1-j];
	}
	for(j=0;j<i;j++)
	{
	if(c[j]<=9)
		x[j]=c[j]+'0';
	else
		x[j]=c[j]-10+'A';
	}
	x[i]='\0';
	}
}