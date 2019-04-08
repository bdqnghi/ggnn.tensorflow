int main(){
	int n,k,p=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int j=0;j<n;j++){
		for(int s=j+1;s<n;s++)
		if(a[s]==k-a[j])p=1;
		}
	if(p==1)printf("yes");
	else printf("no");
	return 0;
}
 