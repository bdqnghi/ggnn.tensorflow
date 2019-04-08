double juli(int a,int b,int c,int d,int e,int f);

int main(){
	int x[10],y[10],z[10];
	int x1[1000],y1[1000],z1[1000],x2[1000],y2[1000],z2[1000];
	int n,p=0;
	double ju[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		scanf("%d",&z[i]);
	}
	for(int a=0;a<100;a++){
		for(int b=a+1;b<n;b++){
			ju[p]=juli(x[a],y[a],z[a],x[b],y[b],z[b]);
			x1[p]=x[a];
			y1[p]=y[a];
			z1[p]=z[a];
			x2[p]=x[b];
			y2[p]=y[b];
			z2[p]=z[b];
			p++;
		}
	}
	for(int k=1;k<=p-1;k++){
        double e;
		int o;
        for(int i=0;i<=p-1-k;i++){
            if(ju[i]<ju[i+1]){
               e=ju[i+1];
               ju[i+1]=ju[i];
               ju[i]=e;
			   o=x1[i+1];
               x1[i+1]=x1[i];
               x1[i]=o;
			   o=y1[i+1];
               y1[i+1]=y1[i];
               y1[i]=o;
			   o=z1[i+1];
               z1[i+1]=z1[i];
               z1[i]=o;
			   o=x2[i+1];
               x2[i+1]=x2[i];
               x2[i]=o;
			   o=y2[i+1];
               y2[i+1]=y2[i];
               y2[i]=o;
			   o=z2[i+1];
               z2[i+1]=z2[i];
               z2[i]=o;
			}
		}
	}
	for(int q=0;q<p;q++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x1[q],y1[q],z1[q],x2[q],y2[q],z2[q],ju[q]);
	}
	return 0;
}

double juli(int a,int b,int c,int d,int e,int f){
	double result;
	double l,m,n;
	l=1.0*(d-a)*(d-a);
	m=1.0*(e-b)*(e-b);
	n=1.0*(f-c)*(f-c);
	result=sqrt(l+m+n);
	return result;
}
