int main(){
	int n;
	scanf("%d",&n);
	int x[100],y[100],z[100];
	double a[100][100],b[100];
	int i,j;
	for (i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	int q;
	q=0;
	for (j=0;j<n-1;j++){
		for(i=j+1;i<n;i++){
			a[j][i]=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i])+(z[j]-z[i])*(z[j]-z[i]));
			b[q]=a[j][i];
			q++;
		}
	}
	double e;
	int k;
	for(k=1;k<=q; k++){
		for(i=0;i<q-k; i++){
			if(b[i]>b[i+1]){
					e=b[i+1];
					b[i+1]=b[i];
					b[i]=e;
			}
		}
	}
	int c;
	c=0;
	double d[100];
	for(k=1;k<q;k++){
		if(b[k-1]!=b[k]){
			d[c]=b[k-1];
			c++;
		}
	}
	if(b[q-1]!=b[q-2]){
		d[c]=b[q-1];
		c++;
	}
	for(k=c-1;k>0; k--){
		for (j=0;j<n-1;j++){
			for(i=j+1;i<n;i++){
				if(d[k]==a[j][i]){
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[j],y[j],z[j],x[i],y[i],z[i],a[j][i]);			
				}
			}
		}
	}
	for (j=0;j<n-1;j++){
		for(i=j+1;i<n;i++){
			if(d[0]==a[j][i]){
				printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[j],y[j],z[j],x[i],y[i],z[i],a[j][i]);			
				}
			}
		}
	return 0;
}