int sushu(int n)
 {  int a;
    if(n==2)
	return(0);
	else if(n>2)
	{ 
	  for(a=2;a<=sqrt(n);a++)
	    {  if(n%a==0)
		   break;
		}
	  if(a>sqrt(n))
	  return(0);
	  else 
	  return(1);
	}
}
void main()
{
  int n,a,b,c,d;
  scanf("%d",&n);
  for(a=6;a<=n;a=a+2)
    {
	  for(b=2;b<a;b++)
	  { 
	    c=sushu(b);
		d=sushu(a-b);
		if(c==0&&d==0)
	    {	printf("%d=%d+%d\n",a,b,a-b);
		break;}
	   }
	 }
}
