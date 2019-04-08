int main(){
	int shang[1000];
	int xia[1000];
	double c[1000];
double he[500];
	int i,m,p,q;
	int n[50];
    shang[0]=2;
	xia[0]=1;
	c[0]=2;
	for(i=1;i<1000;i++){
		shang[i]=shang[i-1]+xia[i-1];
		xia[i]=shang[i-1];
		c[i]=1.0*shang[i]/xia[i];
	}
	scanf("%d",&m);
	for(p=0;p<m;p++){
		scanf("%d",&n[p]);
	}
	for(p=0;p<m;p++){he[p]=0;
		for(q=0;q<n[p];q++)
			he[p]+=c[q];}
	for (p=0;p<m;p++){
		printf("%.3lf\n",he[p]);
	}
			return 0;
	}
