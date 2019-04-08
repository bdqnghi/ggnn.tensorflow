void add(char a[],char b[],int x1,int x2,char c[])
{
	int i,j,k;
	for(i=x1-1,j=x2-1;j>=0;i--,j--)
	{
		k=a[i]-48+b[j]-48;
		if(k+c[i+1]>9)
		{
			c[i+1]=c[i+1]+k-10;
			c[i]=c[i]+1;
		}
        else c[i+1]=c[i+1]+k;
	}
	for(;i>=0;i--) 
	{
		if(c[i+1]+a[i]-48<10)
		c[i+1]=c[i+1]+a[i]-48;
		else
		{
			c[i+1]=c[i+1]+a[i+1]-58;
			c[i]=c[i]+1;
		}
	}
}
void main()
{	int i,j=0,x1,x2,m;
    char a[250],b[250],c[251]={"\0"};
	scanf("%s%s",a,b);
	x1=strlen(a);
	x2=strlen(b);
	if(x1>=x2) m=x1;
	else m=x2;
	if(x1>=x2) add(a,b,x1,x2,c);
	else add(b,a,x2,x1,c);
	for(i=0;i<m;i++)
	{
		if(j==0)
		{
		   if(c[i]!=0)
		   {
		    printf("%d",c[i]);
		    j++;
		   }
		}
		else printf("%d",c[i]);
	}
	printf("%d\n",c[m]);
}
    