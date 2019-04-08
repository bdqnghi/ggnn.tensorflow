int main()
{
  int n,i;
  double x,y;
  int zs[100],yx[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)  
  {
  	scanf("%d%d",&zs[i],&yx[i]);
  }
  x=1.0*yx[0]/zs[0];
   for(i=1;i<n;i++)  {
   	y=1.0*yx[i]/zs[i];
  	if(y-x>0.05)
  	{
  		printf("better");
  		printf("\n");
  	}
  	else if(x-y>0.05)
  	{
  	    printf("worse");
  	    printf("\n");
  	}
  	else
  	{
  		printf("same\n");
  	}
  }
return 0;
}