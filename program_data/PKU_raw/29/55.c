int main(){
	int m,h,i,j;
	double a[100],b[100],c[100],he=0;
	scanf("%d",&m);
	a[0]=2;
	a[1]=1.5;
    b[0]=2;
	b[1]=3;
    c[1]=2;
	c[0]=1;
	for(i=2;i<100;i++){
		b[i]=b[i-1]+b[i-2];
		c[i]=c[i-1]+c[i-2];
		a[i]=b[i]/c[i];
	}
    for(i=0;i<m;i++){
		scanf("%d",&h);
		he=0;
    	for(j=0;j<h;j++)
			he=he+a[j];
			printf("%.3lf\n",he);
		}
	 return 0;
}



