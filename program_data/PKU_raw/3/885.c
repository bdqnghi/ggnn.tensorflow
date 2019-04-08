int main()
{
  int i,j,k,n,a[1000],b[1000][1000],c=0,d=0;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
	  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
	  for(j=i+1;j<n;j++)
	  {
		  b[i][j]=a[i]+a[j];
	  }
  }
	for(i=0;i<n;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
           if(b[i][j]==k)
		  {
			  c++;
			 
                            
		  }
		  else
          { 
			 d++;
		
		  }
	  }
	}
if(c>0)
{
	printf("yes");
}

		else
	{
			printf("no");

  }
  return 0;
}