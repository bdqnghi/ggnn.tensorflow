int main()
{
	int i,j,k,l=0,e,m,n,f,a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(k=0;k<5;k++)
	{e=0;
	 for(j=0;j<5;j++)
	 {
	        
			if(a[k][j]>e)
			{
				e=a[k][j];
				m=j;
			}
	 }
	 for(i=0;i<5;i++)
	 {
		if(a[i][m]<e)
		{
		break;
	    }	 
	 }
	 if(i==5)
	 {
	 printf("%d %d %d",k+1,m+1,e);
	 l=1;
	 }
   }
   if(l==0)
   {
		printf("not found");
	}
		 return 0;
}