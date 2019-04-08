void main()
{
	int chang (int array[100]);
	int a[100]={0},b[100]={0};
	int x,y,i,j;
	int m,n;
	int k=0;
	scanf("%d%d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;;i++)
	{
		if(x>1)
		{
			a[i]=x/2;
			x=x/2;
		}
		else break;
	}
	for(j=1;;j++)
	{
		if(y>1)
		{
			b[j]=y/2;
			y=y/2;
		}
		else break;
	}
	m=chang(a);
	n=chang(b);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(k!=0)
					break;
				if(a[i]==b[j])
				{
					k=b[j];
				    break;
				}
			}
		}
	printf("%d",k);
}
int chang (int array[100])
{
	int i,k=0;
	for(i=0;;i++)
	{
		if((array[i]!=0)&&(array[i+1]==0))
		{
			k=i+1;
			break;
		}
	}
	return(k);
}