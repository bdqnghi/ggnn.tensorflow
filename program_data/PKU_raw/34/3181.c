main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=2;
	if(a>1){
	do {c=a%b;
		if(c==1)
	    {
		d=a*3+1;
		printf("%d*3+1=%d\n",a,d);
		a=d;
		}
		else
		{d=a/2;
		   if(d>=1)
		    {printf("%d/2=%d\n",a,d);
		    a=d;}
		   else
		    a=d;
	    }
		
} while(a>1);
  printf("End");
}
  else
  printf("End");
}