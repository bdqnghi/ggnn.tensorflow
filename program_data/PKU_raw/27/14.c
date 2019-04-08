int main()
{
	int n;
	float a,b,c;
	scanf("%d",&n);
	while(n--){
		scanf("%f %f %f",&a,&b,&c);
		if((b*b-4*a*c)==0)
			printf("x1=x2=%.5f\n",-b/(2*a));
		if((b*b-4*a*c)>0)
			printf("x1=%.5f;x2=%.5f\n",(-b+sqrt((b*b-4*a*c)))/(2*a),(-b-sqrt((b*b-4*a*c)))/(2*a));
		if((b*b-4*a*c)<0)
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/(2*a),(sqrt((-b*b+4*a*c))/(2*a)),-b/(2*a),(sqrt((-b*b+4*a*c))/(2*a)));
		
	}
	return 0;
}