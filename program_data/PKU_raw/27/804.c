main()
{
	int n,i;
	double a,b,c,root1,root2,shi,xu,t;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf %lf",&a,&b,&c);                               
		t=b*b-4*a*c;
		if(t>0)
		{
			if(b==0)
				printf("x1=0.00000+%.5f;x2=0.00000+%.5f\n",sqrt(t)/(2*a),-sqrt(t)/(2*a));
			else
			    root1=(-b + sqrt(t))/(2*a);
		        root2=(-b - sqrt(t))/(2*a);
			    printf("x1=%.5f;x2=%.5f\n",root1,root2);
		}
		else
		{
			if(t<0)                                            
				{
				shi=-b/(2*a);
				xu=sqrt(-t)/(2*a);
				if(shi==0)
					printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",xu,xu);
				else
				{

					if(xu>0)
						printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",shi,xu,shi,xu);
					else
						printf("x1=%.5f-%.5fi;x2=%.5f+%.5fi\n",shi,-xu,shi,-xu);
				}
				}
			else
			{
				if(b==0)
					printf("x1=x2=0");
				else
				    root1=-b/(2*a);
				    printf("x1=x2=%.5f\n",root1);
			}
		}
	}
return 0;
}