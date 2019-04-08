int main()
{
	int n,i,p=0,q=0,j,k,m;
	double c[40]={0},d[40]={0};
	char a[6]={0};
	double b,e;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("\n%s",a);
		scanf("%lf",&b);
		m=strlen(a);
		if(a[0]=='m'){
			c[p]=b;
			p=p+1;
		}else{
			d[q]=b;
			q=q+1;
		}
	}
	for(k=1;k<p;k++){
		for(j=0;j<p-k;j++){
			if(c[j]>c[j+1]){
				e=c[j+1];
				c[j+1]=c[j];
				c[j]=e;
			}
		}
	}
	for(k=1;k<q;k++){
		for(j=0;j<q-k;j++){
			if(d[j]<d[j+1]){
				e=d[j+1];
				d[j+1]=d[j];
				d[j]=e;
			}
		}
	}
	for(j=0;j<p;j++){
		printf("%.2lf ",c[j]);
	}
	for(j=0;j<q-1;j++)
		printf("%.2lf ",d[j]);
	printf("%.2lf",d[q-1]);
	return 0;
}
