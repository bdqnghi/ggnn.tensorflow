int main()
{
	int n,t;
	scanf("%d",&n);
	for(t=0;t<n;t++)
	{
		float a,b,c;
		double p,q,k,x1,x2;
		scanf("%f %f %f\n",&a,&b,&c);
		if(b*b-4*a*c<0)
		{
			k=sqrt(-b*b+4*a*c);
		    p=-b/(2*a);q=k/(2*a);
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",p,q,p,q);
		}
		else
		{
            k=sqrt(b*b-4*a*c);
            p=-b/(2*a);q=k/(2*a);
			x1=p+q;x2=p-q;
		    if(q==0.0)
				printf("x1=x2=%.5f\n",p);
			else
			    printf("x1=%.5f;x2=%.5f\n",x1,x2);
		}
	}
	return 0;
}

