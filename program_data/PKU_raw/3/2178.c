int main(){
	int a[1000];
	int b,i,n,k,j,s;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		s=a[i];
		for(j=i+1;j<n;j++){
			s=a[i]+a[j];
			if(s==k){
				b=1;
			}
			else
				continue;
		}
	}
	if(b==1)
		printf("yes");
        else
		printf("no");
	return 0;
}
