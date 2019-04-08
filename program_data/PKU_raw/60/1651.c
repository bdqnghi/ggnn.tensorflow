int prime(int n)
{
	int t=1;
	int i;
	if(n<2)
		t=0;
	for(i=2;i<=(n-1);i++)
		if(n%i==0)
		{
			t=0;
			break;
		}
		return t;
}

main()
{
  int k,j;
  k=2;
  int c=0;
  scanf("%d",&j);
if(j<=4)
printf("empty");
else
{
  { do
  {
	  if(prime(k)&&prime(k+2))
	  {
		  c+=1;
		  printf("%d %d\n",k,k+2);
	  }
	  k=k+1;
  }
  while (k<(j-1));
}
}
  return 0;
}