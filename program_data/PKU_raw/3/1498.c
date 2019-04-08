int main()
{
	int n,k;
	int a[1000],b[1000000];
	int i,j,c=0,p=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			b[c]=a[i]+a[j];
			c++;
		}
	}
	for(i=0;i<=c;i++){
		if(b[i]==k){
			p=1;
			break;
		}
		else{
			p=2;
		}	
	}
	if(p==1){
		printf("yes\n");
	}else if(p==2){
		printf("no\n");
	}
	return 0;
}
