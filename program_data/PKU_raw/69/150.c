int main()
{
	char a[251];
	char b[251];
	char f[251];
	int c[252];
	int d[251];
	int e[252];
	int s,j,i,x,y;
	scanf("%s %s",a,b);
	x=strlen(a);
	y=strlen(b);
	e[0]=0;
	if(x<y)
	{
		strcpy(f,a);
		strcpy(a,b);
		strcpy(b,f);
                  s=x;
		x=y;
		y=s;
	}
	for(i=0;i<y;i++)
	{
		d[i]=b[i]-48;
	}
	for(j=0;j<x;j++)
	{
		c[j]=a[j]-48;
	}
	for(i=0;i<y;i++)
	{
		e[x-i]=c[x-i-1]+d[y-i-1];
	}
	for(i=y;i<x;i++)
	{
		e[x-i]=c[x-i-1];
	}
	for(j=x;j>0;j--)
	{
		if(e[j]>9)
		{
			e[j]=e[j]-10;
			e[j-1]=e[j-1]+1;
		}
	}
	if(x>1)
	{
	for(j=0;j<x+1;j++)
	{
		if(e[j]!=0)
		{
			for(i=j;i<x+1;i++)
			{
				printf("%d",e[i]);
			}
				break;
		}
	}
	}
	else
	{
		printf("%d",c[0]);
	}
	return 0;
}
