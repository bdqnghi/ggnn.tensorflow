void main()
{
	double a(int n,int k,int i,int m);
    int n,k,i,s,b;
    double j;
    scanf("%d%d",&n,&k);
	for(i=1;;i++)
	{j=a(n,k,i,n);
	b=(int)j;
	if(b==j) {s=(int)(n*j+k);break;}
	}
	printf("%d",s);
}
double a(int n,int k,int i,int m)
{
	double c;
	if(m==1) c=i;
	if(m>1) c=(n*a(n,k,i,m-1)+k)/(n-1);
	return(c);
}