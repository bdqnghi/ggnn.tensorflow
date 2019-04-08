int main()
{
	char a[1000],b[1000]={0},c[1000]={0},da[1000],xiao[1000];
	int i,m,n,j,i1,j1,i2,j2,s0,s=0,k=0,count=0,max=0,min=0;
	char x;
	gets(a);
	n=strlen(a);
	max=0;
	min=n+1;
	for(i=0;i<n;i++)
	{
		x=a[i];
		if(x==32||x==39||i==n-1)
		{
			if(count>max&&i!=n-1)
			{
				max=count;
				b[count]=0;
				strcpy(da,b);
			}
			else if(i==n-1)
			{
				count++;
				b[count-1]=a[i];
				if(count>max)
				{
					max=count;
					b[count]=0;
					strcpy(da,b);
				}
				break;
			}
			count=0;
		}
		else
		{
			count++;
			b[count-1]=a[i];
		}
	}
	count=0;
	for(i=0;i<n;i++)
	{
		x=a[i];
		if(x==32||x==39||i==n-1)
		{
			if(count<min&&i!=n-1)
			{
				min=count;
				c[count]=0;
				strcpy(xiao,c);
			}
			else if(i==n-1)
			{
				count++;
				c[count-1]=a[i];
				if(count<min)
				{
					min=count;
					c[count]=0;
					strcpy(xiao,c);
				}
				break;
			}
			count=0;
		}
		else
		{
			count++;
			c[count-1]=a[i];
		}
	}
	printf("%s\n",da);
	printf("%s\n",xiao);
	return 0;
}
