int main()
{
    int n,i,j,m,l,s;
    int a[MAX],b[MAX];
	j=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<=0){
            return 0;
        }
		if((a[i]+1)%2==0){
			b[j]=a[i];
			j++;
		}
    }
    s=j-1;
    for(i=0;i<s;i++){
		for(l=i+1;l<j;l++){
			if(b[i]>b[l]){
            m=b[i];
			b[i]=b[l];
			b[l]=m;
			}
		}
	}
	for(i=0;i<s;i++){
		printf("%d,",b[i]);
	}
	printf("%d",b[s]);
    return 0;
}