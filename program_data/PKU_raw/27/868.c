main()
{   int n,k;
	double x1,x2,a,b,c,d,e;
	scanf("%d",&n);
	k=1;
	do{scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{if(d>0)
	{x1 = (-b + sqrt(b*b-4*a*c))/(2*a); 
    x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%.5f;x2=%.5f\n",x1,x2);
	k=k+1;}
	else
	    {
	    printf("x1=x2=%.5f\n",-b/(2*a));
		k=k+1;}
		}
		else
		{if(b==0)
		printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",sqrt(-b*b+4*a*c)/(2*a),sqrt(-b*b+4*a*c)/(2*a));
		else
		{	e=(-b)/(2*a);
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e,sqrt(-b*b+4*a*c)/(2*a),e,sqrt(-b*b+4*a*c)/(2*a));
		}k=k+1;}
}while(k<=n)	; 
}