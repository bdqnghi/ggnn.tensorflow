int main()
{
	int n,a[20000],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{for(j=i+1;j<n;j++)
	if(j==i)
		continue;
	else if(a[j]==a[i])
		a[j]=-1;

	}
	for(i=0;i<n;i++)
	{if(a[i]==-1)
	continue;
	else
		{printf("%d",a[i]);
break;}
	}
         for(j=i+1;j<n;j++)
	{if(a[j]==-1)
	continue;
	else
		printf(" %d",a[j]);
	}

	return 0;
}
