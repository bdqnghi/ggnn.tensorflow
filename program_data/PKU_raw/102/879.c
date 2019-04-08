int main()
{
	int n,boy,girl,i,j;
	double h[50],b[50],g[50],e;
	char gender[10];
	 scanf("%d",&n);
	 boy=0;
	 girl=0;
	for(i=0;i<n;i++)
	{	
      scanf("%s%lf",gender,&h[i]);
	  if(gender[0]=='m')
	  {
		  b[boy]=h[i];
		  boy++;
	  }
	  else if(gender[0]=='f')
	  {
		  g[girl]=h[i];
		  girl++;
	  }
	}

 	 for(i=0;i<boy;i++)
	{
		 for(j=0;j<boy-1;j++)
		 {
		 if(b[j]>b[j+1])
		 {
			 e=b[j];
			 b[j]=b[j+1];
			 b[j+1]=e;
		 }
		 }
	 }
	 for(i=0;i<girl;i++)
	{
		 for(j=0;j<girl-1;j++)
		 {
		 if(g[j]<g[j+1])
		 {
			 e=g[j];
			 g[j]=g[j+1];
			 g[j+1]=e;
		 }
		 }
	 }
	 printf("%.2lf",b[0]);
	  for(i=1;i<boy;i++)
	{
		  printf(" %.2lf",b[i]);
	  }
	 for(i=0;i<girl;i++)
	{
		  printf(" %.2lf",g[i]);
	  }



return 0;
}
