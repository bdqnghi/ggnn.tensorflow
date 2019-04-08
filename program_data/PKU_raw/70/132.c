int main(int argc, char* argv[])
{
	int i,n,m,j;
	double x,y,c,max=0;
	scanf("%d",&n);
	double p[9999][2];
	for(i=0;i<n;i++){
		for(m=0;m<2;m++){
			scanf("%lf",&p[i][m]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(j!=i){
				x=p[i][1]-p[j][1];
			    y=p[i][0]-p[j][0];
		        c=sqrt(x*x+y*y);
				if(c>max)
					max=c;
			}
		}
	}
	printf("%.4lf",max);
	return 0;
}

