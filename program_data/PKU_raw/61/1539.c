int F(int n);
int main()
{
	int n,m[999],j=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m[j]);
	}
	j=0;
	for(j=0;j<n;j++)
	{
		printf("%d\n",F(m[j]));
	}
	return 0;
}



  int F(int n)
  {
	  int k[999];
	  int i=1;
	  k[1]=1;
	  k[2]=1;
	  
	  if(n==1)
		  return 1;
	  if(n==2)
		  return 1;
	  else
		  for(i=3;i<=n;i++)
		  {
			  k[i]=k[i-1]+k[i-2];
		  }
		  return k[n];
  }
