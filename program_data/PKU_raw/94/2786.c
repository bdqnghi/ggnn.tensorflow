int main()
{
	int n;
	scanf("%d",&n);
          int sz[500];
	for(int i=0;i<n;i++)
          {
	      scanf("%d",&sz[i]);
	}
	int j=0,odd[500];
	for(int i=0;i<n;i++)
          {
	      if(sz[i]%2==1)
                {
		  odd[j]=sz[i];
		  j++;
	      }
	}
          int e;
	for(int k=0;k<j-1;k++)
          {
	      for(int i=0;i<j-k-1;i++)
                {
		  if(odd[i]>odd[i+1])
                     {
			e=odd[i];
			odd[i]=odd[i+1];
			odd[i+1]=e;
		  }
	      }
	}
	for(int i=0;i<j-1;i++)
          {
	      printf("%d,",odd[i]);
	}
	printf("%d",odd[j-1]);
return 0;
}
