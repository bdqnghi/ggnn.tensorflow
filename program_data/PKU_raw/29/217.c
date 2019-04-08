int main(int argc, char* argv[])
{   int i,n,m,j;
	double a,b,s,x,y;
    scanf("%d",&m);
	for(i=0;i<m;i++){
	   scanf("%d",&n);
	   a=2.000;
	   b=1.000;
	   s=0;
	   for(j=0;j<n;j++){
	      s=s+(double)(a/b);
		  x=a;
		  y=a+b;
		  b=x;
		  a=y;
	   }
	   printf("%.3lf\n",s);
	}
	return 0;
}
