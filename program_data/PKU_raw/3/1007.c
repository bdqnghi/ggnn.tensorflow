int main()
{
	int n,k,a[1000],i,j,e=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)continue;
			if(a[i]+a[j]==k){
			   e++;
			}
		}
	}
	if(e==0)printf("no");
	else if(e>0)printf("yes");
	return 0;
}
