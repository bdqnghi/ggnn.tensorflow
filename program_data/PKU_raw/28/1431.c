int main()
{
	char s[30000];
	int n,i,j,k,m[300],dc[300],e;
	gets(s);
	n=strlen(s);
	m[0]=0;
	for(i=0,k=1;i<n;i++){
		if(s[i]==' '){
			m[k]=i;
			k++;}
	}
	if(k==1){
		printf("%d",n);}
	else{
	for(i=0;i<k;i++){
		if(i==0){
			dc[i]=m[i+1]-m[i];}
		else if(i==k-1){
			dc[i]=n-m[i]-1;
			}
		else if(i!=0&&i!=k-1){
			dc[i]=m[i+1]-m[i]-1;
			}
		}
	for(i=0;i<k;i++){
		if(dc[i]!=0){
		if(i!=k-1){
			printf("%d,",dc[i]);}
		else {
			printf("%d",dc[i]);}
		}
	}
	}
		
		return 0;
}
