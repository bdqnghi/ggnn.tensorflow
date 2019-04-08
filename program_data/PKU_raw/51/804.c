char a[500];
int post[500];
int main(void)
{
	int i,j,k;
	int n;
	int x=1,y;
	int max=0;
	int count=0;
	int h=0;
	scanf("%d",&n);
	scanf("%s",a);
	for(i=0;i<=strlen(a)-n;i++,count=0)
	{
		for(j=i;j<=strlen(a)-n;j++,x=1)
		{
			for(k=0;k<n;k++)
			{
				if(a[i+k]!=a[j+k])
			    {
			    	x=0;
			    	break;
			    }
			}
			if(x==1)
			{
				count++;
			}
		}
		post[i]=count;
		if(count>=max)
		{
			max=count;
		}
	}
	if(max<=1)
	{
		printf("NO\n");
	}
	else
	{
		printf("%d\n",max);
		for(j=0;j<i;j++)
		{
			if(post[j]==max)
			{
				for(k=j;k<j+n-1;k++)
				{
					printf("%c",a[k]);
				}
				printf("%c\n",a[k]);
			}
		}
	}
	return 0;
	
}