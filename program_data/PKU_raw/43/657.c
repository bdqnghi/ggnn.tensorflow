int main()
{
	int m,a,b,i,sig=0,sigg=0,j;
	scanf("%d",&m);
	for(a=3;a<=m/2;a++)
	{	
		for(j=2;j<=a-1;j++)
	    {if(a%j==0)
	     {sigg=1;
	     break;
		 }	
		}
	if(sigg==0)
	  {b=m-a;
	for(i=2;i<=b-1;i++)
	    {if(b%i==0)
	     {sig=1;
	     break;
		 }	
		}
	if(sig==0)
	printf("%d %d\n",a,b);
	sig=0;
	 }
	 sigg=0;
   }  
   scanf("%d",&m);
	return 0;
}