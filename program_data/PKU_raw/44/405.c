int reverse(int num);
int main()
{
	int i;
	int a[10],b[10];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		b[i]=reverse(a[i]);
	
	}
	for(i=0;i<6;i++)
		printf("%d\n",b[i]);
	return 0;

	
}
int reverse(int num)
{
	if(num==0)
		return 0;
	int c[100],d[100],e[100];
	int i,j;
	int a;
	int k=1;
	int result=0;
	if(num<0)
		a=0-num;
	if(num>0)
		a=num;
	for(i=1;1;i=i+1)
	{
		k=k*10;
		if((a-k)<0)
		{
			break;
		}
	}
	for(j=i-1;j>=0;j--)
	{
		if(j==i-1)
			d[j]=1;
		else d[j]=d[j+1]*10;
	}
	for(j=0;j<i;j++)
	{
		if(j==0)
		{
			c[j]=a/d[j];
			e[j]=a;
		}
		else
		{
			c[j]=(e[j-1]-d[j-1]*c[j-1])/d[j];
			e[j]=e[j-1]-d[j-1]*c[j-1];
		}
	}
	for(j=0;j<i;j++)
		result=result+c[j]*d[i-j-1];
	if(num>0)
		return result;
	if(num<0)
		return (0-result);









	}