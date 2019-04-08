int primenumber(int n)
{
  int l,k;
  k=(int)sqrt(n);
  for(l=3;l<=k;l++)
  {
	  if(n%l==0)
	  {
       return 0;
	  }

  }  
  return 1; 
}
int main()
{
	int m,k,b,i;
    scanf("%d",&m);
	k=(int)sqrt(m);
	for(i=6;i<=m;i=i+2)	
	{
	    for(b=3;b<=i/2;	b=b+2)
		{
			if(primenumber(b)&&primenumber(i-b))
			{
				break;
			}
		}
		printf("%d=%d+%d\n",i,b,i-b);
	}
    				 
	return 0;
}

