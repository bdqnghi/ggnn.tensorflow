int main()
{
  int h,l;
  scanf("%d,%d",&h,&l);
  int x[8][8];
  int i=0,j,t=1,u=1,d=0,f=0,kl;
  for(i=0;i<h;i++)
  {
	  j=0;
    for(j=0;j<l;j++)
	{
		scanf("%d",&x[i][j]);
	}
  }
    for(i=0;i<h;i++)
  {
	  j=0;
    for(j=0;j<l;j++)
	{
	  for(d=0;d<l;d++)
	  {
       if(x[i][j]-x[i][d]<0)
	   {
		   t=0;
		   break;
	   }
	  }
      for(f=0;f<h;f++)
	  {
	  if(x[i][j]-x[f][j]>0)
	  {
		  u=0;
		  break;
	  }
	  }  
	  if(u*t==1)
	  {kl=1;
	   break;}
	  else
	  {u=1;
	  t=1;}
	}
	
		  if(u*t==1)
	  {kl=1;
	   break;}
	
  }
   if(j<l)
	   printf("%d+%d",i,j);

else
printf("No");


return 0;
}