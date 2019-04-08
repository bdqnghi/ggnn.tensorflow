 int main(){
	int x[10];
	int y[10];
	int z[10];
	double c[10][10];
	double w[100];
	int k[50][4],l[50][4];
	int i,n,q,o,j,d=0,a,b;
	double m; 
 	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
    for(i=0;i<n-1;i++){
		for(q=i+1;q<n;q++){
			m=1.0*(x[i]-x[q])*(x[i]-x[q])+1.0*(y[i]-y[q])*(y[i]-y[q])+1.0*(z[i]-z[q])*(z[i]-z[q]);
            c[i][q]=(double)sqrt(m);
			d++;
			}
	}
	j=d;
	for(o=0;o<j;o++){
		w[o]=0;
		a=0;b=0;
       for(i=0;i<n-1;i++){
		for(q=i+1;q<n;q++){
			if(w[o]<c[i][q]){
				w[o]=c[i][q];
				a=i;
				b=q;
			}
		}
	   }
	   c[a][b]=-1;
	   k[o][1]=x[a];k[o][2]=y[a];k[o][3]=z[a];
	   l[o][1]=x[b];l[o][2]=y[b];l[o][3]=z[b];
	}

	for(o=0;o<d;o++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",k[o][1],k[o][2],k[o][3],l[o][1],l[o][2],l[o][3],w[o]);
	}
	return 0;
}
