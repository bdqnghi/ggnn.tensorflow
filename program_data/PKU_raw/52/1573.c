int main(){
	int *p,*q,m,n,i;
	scanf("%d %d",&n,&m);
	int dk[100];
	for(i=0;i<n;i++){
		scanf("%d",&(dk[i]));
	}
	p=dk;
	q=&dk[n-m];
	for(i=0;i<m;i++){
		printf("%d ",*(q));
		q++;
	}
	for(i=0;i<n-m-1;i++){
     printf("%d ",*(p));
	 p++;
	}
	printf("%d",*(p));
	return 0;
}