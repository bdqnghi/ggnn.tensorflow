
int re(int w,int r,int time);
int main(int argc, char* argv[])
{
	int n,n1,i,j;
	double sz[100],x=0,s=0,*p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&n1);
		p=&sz[0];
		for(j=0;j<n1;j++){
			scanf("%lf",p+j);
		}
		for(j=0;j<n1;j++){
			x+=*(p+j);
		}
		x/=n1;
		for(j=0;j<n1;j++){
			s+=(*(p+j)-x)*(*(p+j)-x);
		}
		s/=n1;
		s=pow(s,0.5);
		printf("%.5f\n",s);
		x=0;
		s=0;
	}
	return 0;
}
