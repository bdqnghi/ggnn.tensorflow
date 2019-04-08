int main()
{
	int i,j,k,n,e=0,a[50]={0};
	scanf("%d",&n);
	a[0]=1;
	for(i=1;i<=n;i++){
		for(j=0;j<50;j++){
			a[j]*=2;}
			for(k=0;k<50;k++){
				if(a[k]>9){
					a[k]=a[k]%10;
					a[k+1]+=1;
				
			}
		}
	}
	for(i=49;i>=0;i--){if(e==1){
			printf("%d",a[i]);
		}
		if(a[i]!=0){
			if(e==0){
				printf("%d",a[i]);
				e=1;
			}
		}
		
	}
	return 0;
}
