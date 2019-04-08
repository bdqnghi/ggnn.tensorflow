
int main(int argc, char* argv[])
{
	int n,k,t=0;
	scanf("%d %d",&n,&k);
	int a[1001];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);}
	for(int q=1;q<=n-1;q++){
		for(int r=q+1;r<=n;r++){
			if(a[q]+a[r]==k){
				printf("yes");
				t++;
				break;}
		}
		if(t==1){
			break;}
	}
	if(t==0){
		printf("no");}


	return 0;
}

