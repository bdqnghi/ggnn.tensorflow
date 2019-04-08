void main()
{
  int i,m,n,temp;
  scanf("%d%d",&m,&n);
  if(m<n)
  {
    temp=m;
	m=n;
	n=temp;
  }
  if(m==n)  printf("%d\n",m);
  else
  {
  for(;;)
  {
    if(m/2==n)  
	{
		printf("%d\n",n);
		break;
	}
	else 
	{
	  if(m/2>n)  m/=2;
	  else
	  {
	    temp=n;
		n=m/2;
		m=temp;
	  }
	}
  }
  }
}