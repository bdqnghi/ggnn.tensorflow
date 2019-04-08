int max(int x,int y)
{
	return (x>y)?x:y;
}
int min(int x,int y)
{
	return (x<y)?x:y;
}
void main()
{
	int a[251],b[251],c[250]={0},i,j,k=0,x,y;
	char m[250],n[250];
	scanf("%s",m);
	scanf("%s",n);
    x=strlen(m);
	y=strlen(n);
	for(i=0;i<x;i++)
	{
		a[i+1]=m[i]-48;
	}
	for(i=0;i<y;i++)
	{
		b[i+1]=n[i]-48;
	}
	if(x>y)
	{
		for(i=1;i<=x;i++)
			c[i]=a[i];
	}
	else
	{
		for(i=1;i<=y;i++)
			c[i]=b[i];
	}
	c[0]=0;
	for(i=0;i<min(x,y);i++)
	{
		if(a[x-i]+b[y-i]+k<10) 
		{
			c[max(x,y)-i]=a[x-i]+b[y-i]+k;
			k=0;
		}
		else 
		{
			c[max(x,y)-i]=(a[x-i]+b[y-i]+k)%10;
			k=1;
		}
	}
	c[max(x,y)-i]+=k;
	for(i=max(x,y);i>0;i--)
	{
		if(c[i]>=10)
		{	
			c[i]=(c[i]%10);
			c[i-1]+=1;
		}
	}
	for(i=0;;i++)
		if(c[i]) break;
	for(j=i;j<=max(x,y);j++)
		printf("%d",c[j]);
	if(i>max(x,y)) printf("0");
	printf("\n");
}
