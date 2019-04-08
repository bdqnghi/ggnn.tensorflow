void main ()
{
	int a[8][8],m,n,i,j,k,p,t=0,s=0,r=0;
	
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}

     for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{s=0;t=0;
			for(k=0;k<n;k++)
			{
	          if(a[i][j]<a[i][k])
			  t=1;
			}		
			for(p=0;p<m;p++)
			{
				if(a[i][j]>a[p][j])
				s=1;
			}
			if((t==0)&&(s==0))
			{printf("%d+%d",i,j);r=1;break;}
			
		}
		if(r==1)
			break;
	 }
	 if(r==0)
		 printf("No");
}
		
	 