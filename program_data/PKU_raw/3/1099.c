int main(int argc, char* argv[])
{
	int n,k;
	int i,j,p=1;
	int num[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n-i;j++){
			if(num[i]+num[j]==k){
			p=0;
			}
		}
	}
	if(p==0){
		printf("yes\n");
	}
	else if(p=1){
		printf("no\n");
	}
	return 0;
}

