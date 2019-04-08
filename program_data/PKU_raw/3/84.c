int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	int a[1000];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int hh=0,b=0;
	for(i=0;i<n;i++){
		int count=0;
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				printf("yes");
				b=1;
				break;
			}
			else  count++;
		}
		if(b==1) break;
		if(count==n-1-i) hh++;
	}
	if(hh==n) printf("no");
	return 0;
}
