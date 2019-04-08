int main()
{
	int a,b,n,k,s;
	a=1;
	scanf("%d %d",&n,&k);
  for(b=1;;b++)
  {s=b*(n-1);
    while(a<=n)
	{if(s%(n-1)==0)
	{s=n*s/(n-1)+k;
	a++;}
	else 
	{a=1;
	break;}
	}
	if(a-1==n)
	{printf("%d",s);
	break;}
	else continue;
  }
	return 0;
}