int main()
{
	int a[1000],n,k,i,m;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(m=i+1;m<n;m++){
            if(a[i]+a[m]==k){

				printf("yes");
				break;}
				if(i==n-2&&m==n-1){
			printf("no");
			break;
		}
			
		
			
		}
		if(a[i]+a[m]==k){
			break;
		}
		if(i==n-2&&m==n-1){
			break;
		}
		
		
	}
	return 0;

}