void main()
{
	int i,x,y,m,n,c;
	int a[12],b[12];
	scanf("%d %d",&x,&y);
    for(i=1,a[0]=x,b[0]=y;i<=11;i++)
	{    
		
		a[i]=a[i-1]/2;
		
		b[i]=b[i-1]/2;
	
	
	}
	for(m=0;m<=11;m++)
	{
		for(n=0;n<=11;n++)
		{
			if(a[m]==b[n])
			{
				printf("%d",a[m]);
				goto loop;
			}
		}
             
			
	}
loop:c=0;
}
