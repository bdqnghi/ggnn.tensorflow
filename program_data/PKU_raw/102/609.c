int main()
{
	int n,i,j=0,k=0,d,b;
	double a[100],m[100],f[100],c;
	char s[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",s[i],&a[i]);}
	for(i=0;i<n;i++){
		if(s[i][0]=='f'){
	f[j]=a[i];j++;}
		if(s[i][0]=='m'){
	m[k]=a[i];k++;}}
	for(d=1;d<=k;d++){
		for(b=0;b<k-d;b++){
			if(m[b]>m[b+1]){
				c=m[b+1];m[b+1]=m[b];m[b]=c;}}}
	for(i=0;i<k;i++){
	printf("%.2lf ",m[i]);}
	for(d=1;d<=j;d++){
		for(b=0;b<j-d;b++){
			if(f[b]<f[b+1]){
				c=f[b+1];f[b+1]=f[b];f[b]=c;}}}
	for(i=0;i<j-1;i++){
	printf("%.2lf ",f[i]);}
	printf("%.2lf",f[j-1]);
return 0;
}
