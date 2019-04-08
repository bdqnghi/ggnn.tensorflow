
int main(int argc, char* argv[])
{
	int a[1000],n,k,i,j,x;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				x++;
			}
		}
	}
	if(x!=0){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}

