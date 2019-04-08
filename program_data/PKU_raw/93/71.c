main()
{
	int a,b,c,d;
	    a=3;
		b=5;
		c=7;
	scanf("%d",&d);
	if(d%a==0)
	 if(d%b==0)
	  if(d%c==0)
	  printf("%d %d %d",a,b,c);
	  else printf("%d %d",a,b);
	else
		if(d%c==0)
			printf("%d %d",a,c);
         else
			 printf("%d",a);
	else
		if(d%b==0)
			if(d%c==0)
				printf("%d %d",b,c);
			else printf("%d",b);
		else 
			if(d%c==0)
				printf("%d",c);
            else printf("n");
}