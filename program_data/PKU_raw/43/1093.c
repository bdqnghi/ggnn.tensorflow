int main()
{
	int m,a=2,b,i=2,j=2;
    scanf("%d",&m);
	while(a<=m/2)
	{
		int i=2,j=2;
		while(i<a)
		{
		  if(a%i!=0)
		  i++;
		  else
		  goto loop1;
        }
	  b=m-a;
	  while(j<b)
 		{
		  if(b%j!=0)
		  j++;
		  
		  else
		  break;

		  if(j==b)
          {
          printf("%d %d\n",a,b);
		  break;
          }
        }
		loop1:a++;
    }

}