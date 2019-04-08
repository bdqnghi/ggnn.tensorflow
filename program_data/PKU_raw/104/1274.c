int main()
{
	int x,y,i,j,c,d,t=0,m,a[12],b[12];
    scanf("%d%d",&x,&y);
    a[0]=x;
	b[0]=y;
	for(i=1;;i++)
	{
		a[i]=a[i-1]/2;
		if(a[i]==1)
		{   
			c=i;
			break;
		}
	}
	for(j=1;;j++)
    {
		b[j]=b[j-1]/2;
		if(b[j]==1)
		{   d=j;
			break;
		}
	}
	for(i=0;i<=c;i++)
	{   
		if(t==1)
			break;
		for(j=0;j<=d;j++)
		{
			if(a[i]==b[j])
			{   
				m=a[i];
				t=1;
				break;

			}
		}
	}
	printf("%d\n",m);
   return 0;
}