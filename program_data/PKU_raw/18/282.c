



void main()
{
  int sum=0,s[100][100],i,t,j,m,n,k,min;
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
	  for (j=0;j<n;j++)
		  for (k=0;k<n;k++)
			  scanf("%d",&s[j][k]);
	  sum=0;
	  for (j=1;j<n;j++)
	  {
		  for (k=0;k<n;k++)
		  {
			  if (k==0||k>=j)
			  {
				      min=s[k][0];
					  for (t=0;t<n;t++)
					  {
						  if ((t==0||t>=j)&&s[k][t]<min) min=s[k][t];
					  }
					  for (t=0;t<n;t++)
					  {
						  if (t==0||t>=j) s[k][t]-=min;
					  }
			  }
		  }



          for (k=0;k<n;k++)
		  {
			  if (k==0||k>=j)
			  {
				      min=s[0][k];
					  for (t=0;t<n;t++)
					  {
						  if ((t==0||t>=j)&&s[t][k]<min) min=s[t][k];
					  }
					  for (t=0;t<n;t++)
					  {
						  if (t==0||t>=j) s[t][k]-=min;
					  }
			  }
		  }
          sum+=s[j][j];
	  }
	  printf("%d\n",sum);
  }
  
}