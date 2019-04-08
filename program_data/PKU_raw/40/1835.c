void main()
{
	double a,b,c,d,e,f,s,S,t;
	int i;
	double g[5];
	for(i=0;i<5;i++)
		scanf("%lf",&g[i]);
	s=(double)(g[0]+g[1]+g[2]+g[3])/(double)2;
	f=(double)g[4]/(double)180*3.1415926;
	t=(s-g[0])*(s-g[1])*(s-g[2])*(s-g[3])-g[0]*g[1]*g[2]*g[3]*cos(f/2)*cos(f/2);
	if(t<0) printf("Invalid input");
	else 
	{
		S=sqrt(t);
		printf("%.4lf",S);
	}
}