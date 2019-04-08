void main()
{
	int x,a,b,c,d,e;
	scanf("%d",&x);
	if(x>9999)
	{e=x/10000;
	d=x%10000/1000;
	c=x%10000%1000/100;
         b=x%10000%1000%100/10;
	a=x%10000%1000%100%10;
	printf("%d%d%d%d%d\n",a,b,c,d,e);}
	else
		if(x>999)
		{d=x/1000;
    	c=x%1000/100;
         b=x%1000%100/10;
    	a=x%1000%100%10;
    	printf("%d%d%d%d\n",a,b,c,d);}
        else
		  if(x>99)
		  {
    	  c=x/100;
          b=x%100/10;
          a=x%100%10;
    	  printf("%d%d%d\n",a,b,c);}
          else
		    if(x>9)
			{
            b=x/10;
            a=x%10;
    	    printf("%d%d\n",a,b);}
			else printf("%d\n",x);
}