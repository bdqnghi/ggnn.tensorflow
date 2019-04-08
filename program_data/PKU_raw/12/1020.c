
int main()
{
		int i,j,n,k,m;
		int a[100];

    	while (1){
			scanf("%d",&a[0]);
			if(a[0]==-1)
				break;
			for(i=1;;i++){
				scanf("%d",&a[i]);
				if(a[i]==0)
					break;
			}
			n=i;
			for(i=n-1;i>0;i--){
				for(j=0;j<i;j++){
					if(a[j]>a[j+1]){
						k=a[j];
						a[j]=a[j+1];
						a[j+1]=k;
					}
				}
			}
			m=0;
			for(i=0;i<n-1;i++){
				for(j=i+1;j<n;j++){
					if(a[j]==2*a[i]){
						m=m+1;
						break;
					}
					if(a[j]>2*a[i]){
						break;
					}
				}
			}
			printf("%d\n",m);
		}
	return 0;
}
