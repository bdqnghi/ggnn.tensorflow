void main()
{
	int findout(int x,int y);
	int m,n,num;
	scanf("%d%d",&m,&n);
	num=findout(m,n);
	printf("%d\n",num);
}

int findout(int x,int y)
{
	int a[500],b[500],i,j,k=0,l=0,t,c;
	a[0]=x;
	for(i=1;x!=1;i++)
	{
		if(x%2==1)
		{
			x=(x-1)/2;
			a[i]=x;
		}
		else if(x%2==0)
		{
			x=x/2;
			a[i]=x;
		}
	}
	k=i;
	for(i=0;i<=(k-1)/2;i++)
	{
		t=a[i];
		a[i]=a[k-1-i];
		a[k-1-i]=t;
	}

	b[0]=y;
	for(j=1;y!=1;j++)
	{
		if(y%2==1)
		{
			y=(y-1)/2;
			b[j]=y;
		}
		else if(y%2==0)
		{
			y=y/2;
			b[j]=y;
		}
	}
	l=j;
	for(j=0;j<=(l-1)/2;j++)
	{
		t=b[j];
		b[j]=b[l-1-j];
		b[l-1-j]=t;
	}

	for(i=0;i<k;i++)
	{
		if(a[i]==b[i]&&a[i+1]!=b[i+1]) break;
	}

	if(a[k-1]==1||b[l-1]==1) c=1;
	else c=a[i];
	
	return(c);
}
