int main()
{ 
  int n,i;
  int a[501];
  int b[501];
  int j=0;
  int maxIndex, e;


  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  scanf("%d",&a[i]);
      if((a[i])%2!=0)
	  {
		  b[j]=a[i];
		  j=j+1;
	  }
  }

  for(int k = 1 ; k<=j; k++)
  {
     maxIndex = 0;
     for(i = 0; i <=j-k; i++)
	 {
        if(b[i] > b[maxIndex])
		{
           maxIndex = i;
		}
	 }
     if(maxIndex != j-k)
	 {
        e = b[maxIndex];
        b[maxIndex] = b[j-k];
        b[j-k] = e;
	 }
  }
  
  for(i=0;i<j-1;i++)
  {
	  printf("%d,",b[i]);
  }
  printf("%d",b[j-1]);





  return 0;
}
