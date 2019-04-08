int main(){
	int a[300],b[300];
	int n,i,j=0,k,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1){
		scanf("%d",&a[i]);
		for(k=0;k<i;k=k+1){
			if(a[i]==a[k]){flag=1;}

		}
		if(flag==0){b[j]=a[i];j=j+1;}
		flag=0;

	}
	printf("%d",b[0]);
	for(i=1;i<j;i=i+1){printf(",%d",b[i]);}
}