
void main()
{
	  int n,m,i,j,k,l,t,sum;
	  int a,b,c;
	  int tt[100][100];
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)
	  {
		  for(j=0;j<n;j++)
		  {
			  for(k=0;k<n;k++)
			  {
                 scanf("%d",&tt[j][k]);
			  }
		  }
		  sum=0;
		  m=n;
		  for(l=1;l<m;m--)
		  { 
			  for(j=0;j<m;j++)
			  {
                  a=1000;
				  for(k=0;k<m;k++)
				  {
                      if(tt[j][k]<a) {a=tt[j][k];}
				  }
				   for(k=0;k<m;k++)
				  {
                      tt[j][k]=tt[j][k]-a;
				  }
			  }
			  for(k=0;k<m;k++)
			  {
                  a=1000;
				  for(j=0;j<m;j++)
				  {
                      if(tt[j][k]<a) {a=tt[j][k];}
				  }
				   for(j=0;j<m;j++)
				  {
                      tt[j][k]=tt[j][k]-a;
				  }
			  }
			  sum=sum+tt[1][1];

			  for(j=1;j<m;j++)
			  {
				  tt[0][j]=tt[0][j+1];
			  }
			  for(j=1;j<m;j++)
			  {
				  tt[j][0]=tt[j+1][0];
			  }
			  for(j=1;j<m;j++)
			  {
				  for(k=1;k<m;k++)
				  {
					  tt[j][k]=tt[j+1][k+1];
				  }
			  }
		  }
		  printf("%d\n",sum);
	  }

}