void main()
{
	int a,b,x[11],y[11],i,j,t;
	scanf("%d%d",&a,&b);
	t=0;
	x[0]=a;
	for(i=1;i<11;i++)
		  {
			  
	 	     x[i]=a/2;
		     a=a/2;
		  }
	y[0]=b;
    for(i=1;i<11;i++)
	{
		y[i]=b/2;
		b=b/2;
	}
	for(i=0;i<10;i++)
	{
		 for(j=0;j<10;j++)
		 {
			  if(x[i]==y[j]&&x[i]!=0&&y[j]!=0)
			  {
			      printf("%d",x[i]);
				  t=1;
				  break;
			  } 
		 } 
		 if(t==1)
		 break;
	}
}
	


