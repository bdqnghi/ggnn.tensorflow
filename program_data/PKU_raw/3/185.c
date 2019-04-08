
int main(int argc, char* argv[])
{
	int k, n, i, j, b, t=0, a[1000];
	scanf("%d %d",&n, &k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			b=a[i]+a[j];
			if(k==b){
				t=1;
				break;
			}
		}
        if(t==1)break;				
	}
	if(t==1){
	    printf("yes");
	}
	if(t==0){
	    printf("no");
	}
	return 0;
}

