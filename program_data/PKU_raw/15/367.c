int main(int argc, char* argv[])
{
	int n;
	int i,j,k,m,l,p,q;
	int sum=0;
    int a[1000][1000];
	int line[1000];
	int dij[1000][1000];
	int x[1000][1000];
	for(k=0;k<1000;k++)
	{   
		line[k]=0;
		for(m=0;m<1000;m++)
		{
	        dij[k][m]=0;
		}

	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
	   {
	       scanf("%d",&a[i][j]);
		   if(a[i][j]==0)
		   {
		       line[i]=line[i]+1;
			   dij[i][j]=j;
		   }
	   }
	}
	for(l=0;l<n;l++)
	{
	   if(line[l]==2)
	   {
	      for(p=0;p<n;p++)
		  {
		     if(dij[l][p]>0)
			 {
				 x[l][p]=dij[l][p];
			     break;
			 }
		  }
		  for(q=0;q<n;q++)
		  {
		     if(dij[l][q]>x[l][p])
			 {
				 x[l][q]=dij[l][q];
			     break;
			 }
		  }
		  sum=sum+x[l][q]-x[l][p]-1;
	   }
	}
	printf("%d",sum);
	return 0;
}