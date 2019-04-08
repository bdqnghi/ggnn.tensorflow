int main(){
	int i,j,n,re;
	int a[10000];
	int b[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[i]=0;
		b[i]=0;
		}
	while(1){
		scanf("%d%d",&i,&j);
		if(i==0&&j==0){
			break;
			}
		else{
			a[j]++;
			b[i]++;
			}
		}
	re=1;
	for(i=0;i<n;i++){
		if(a[i]==n-1&&b[i]==0){
			re*=0;
			}
		}
	if(re==1){printf("NOT FOUND");}
	else{
		for(i=0;i<n;i++){
			if(a[i]==n-1&&b[i]==0){
				printf("%d\n",i);
				}
			}
		}
	scanf("%d",&n);
	return 0;
	}