main ()
{
  int a[5][5];
  int i,j,k,x=0,z,m=0,y,b=0;
  for(i=0;i<5;i++)
   {
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
   }
  for(i=0;i<5;i++)
   {
	 
      for(j=0;j<5;j++)
       {
	    	x=0;
		    for(k=0;k<5;k++)
		     {
			if(a[i][j]>a[i][k])
			x++;
		     }
		     if(x==4)
		     {
			m=0; 
			for(z=0;z<5;z++) 
			{
				if(a[i][j]<a[z][j])
				m++;
			}
			if(m==4)
			{
				y=a[i][j];
			printf("%d %d %d",i+1,j+1,y);
			b++;
		     }
		    } 
	     	else continue; 
      }
   }
   if(b==0)
   printf("not found");
}