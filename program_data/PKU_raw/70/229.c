
int main(int argc, char* argv[])
{
	double d[100],f[100],a,b,m;
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&d[i],&f[i]);
	}
	m=(d[0]-d[1])*(d[0]-d[1])+(f[0]-f[1])*(f[0]-f[1]);
	for(j=2;j<n;j++){
		for(i=2;i<=j;i++){
            a=(d[i]-d[i-1])*(d[i]-d[i-1])+(f[i]-f[i-1])*(f[i]-f[i-1]);
            b=(d[i]-d[i-2])*(d[i]-d[i-2])+(f[i]-f[i-2])*(f[i]-f[i-2]);
		    if(a>=b&&a>=m) m=a;
		    if(b>a&&b>=m) m=b;
		    if(m>a&&m>b) m=m;
		}
	}
	printf("%.4f",sqrt(m));
	return 0;
}