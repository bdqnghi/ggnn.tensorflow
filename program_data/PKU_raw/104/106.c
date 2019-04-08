void main()
{
	int x,y,i,k;
	int a[12]={0},b[12]={0};
	
	scanf("%d%d",&x,&y);
	
	a[0]=x;
	b[0]=y;
	for(i=0;a[i]>=2;i++)
	{
		a[i+1]=a[i]/2;
	}
	for(k=0;b[k]>=2;k++)
	{
		b[k+1]=b[k]/2;
	}
	if(x!=y)
	{
		for(;;i--,k--)
	    {
			if(a[i]!=b[k])
		    {
			    break;
		    }
	    }
		printf("%d\n",a[i+1]);
	}
	else
	{
		printf("%d\n",x);
	}

}