int main()
{int m,i,j=0,l=0,n;
	double k,b[100],c[100],t;
	char a[7];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",a,&k);if(a[0]=='m'){b[j]=k;j++;}
		if(a[0]=='f'){c[l]=k;l++;}}
	for(i=0;i<j;i++){
		for(m=0;m<j-1;m++){
			if(b[m]>b[m+1]){t=b[m];b[m]=b[m+1];b[m+1]=t;}}}
for(i=0;i<l;i++){
		for(m=0;m<l-1;m++){
			if(c[m]<c[m+1]){t=c[m];c[m]=c[m+1];c[m+1]=t;}}}
printf("%.2lf",b[0]);
for(i=1;i<j;i++){
		printf(" %.2lf",b[i]);}
for(i=0;i<l;i++){
		printf(" %.2lf",c[i]);}
}

