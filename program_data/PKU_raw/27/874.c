main()
{
	int j,n;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		float a,b,c,x1,x2;
		scanf("%f %f %f",&a,&b,&c);
		if ((b*b-4*a*c)>0)
		  printf("x1=%.5f;x2=%.5f\n",(double)(-b+sqrt(b*b-4*a*c))/(2*a),(double)(-b-sqrt(b*b-4*a*c))/(2*a));
		if ((b*b-4*a*c)==0 )
		  printf("x1=x2=%.5f\n",-b/(2*a));
		if ((b*b-4*a*c)<0){
			if(b/(2*a)==0){
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",b/(2*a),sqrt(-(b*b-4*a*c))/(2*a),b/(2*a),sqrt(-(b*b-4*a*c))/(2*a));
			}
			else
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),sqrt(-(b*b-4*a*c))/(2*a),-b/(2*a),sqrt(-(b*b-4*a*c))/(2*a));
		}
	}
}