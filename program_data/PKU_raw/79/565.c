int joseph(int x,int y)  
{
	int a[400]={1};
	int i=0,j=0,p=0,n=0,z;
	for(i=0;i<x;i++)
		a[i]=0;       
	for(j=0;;j++)
	{
		i=j%x;        
		if(a[i]==0)
		{
			p++;
		}
		if(p%y==0)
		{
			if(a[i]==0)n++;         
			a[i]=1;
		}
		if(n==x-1)
		{
			for(i=0;i<x;i++)
			{
				if(a[i]==0)
					z=i+1;   
			}
			break;     
		}
	}
	return z;
}
main()
{
	int m[100],n[100];     
  	int b,c=0,d=0;
	for(b=0; ;b++)
	{
		scanf("%d %d",&m[b],&n[b]);
		c++;
		if(m[b]==0&&n[b]==0)
			break;
	}
	for(b=0;b<c-1;b++)
	{
		if(m[b]==0)
			printf("1\n");
		else
		{
			d=joseph(m[b],n[b]);
			printf("%d\n",d);
		}
	}
	
}