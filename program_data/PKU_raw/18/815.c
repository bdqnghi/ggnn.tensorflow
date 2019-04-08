int main(){
	int n,a[100][100],sum=0,i,j,h,min,min1,k=0;
	scanf("%d",&n);
    for(h=0;h<n;h++){
		sum=0;
		k=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		while(k<n-1){
		for(i=0;i<n-k;i++){
			min=a[i][0];
			for(j=0;j<n-k;j++){
				if(a[i][j]<min)
					min=a[i][j];
			}
		
			for(j=0;j<n-k;j++){
		       	a[i][j]-=min;
			
			}
		}
		for(i=0;i<n-k;i++){
			min1=a[0][i];
			for(j=0;j<n-k;j++){
				if(a[j][i]<min1)
					min1=a[j][i];
			}
		
			for(j=0;j<n-k;j++){
		       	a[j][i]-=min1;
			
			}
		}
        sum+=a[1][1];
		
		for(i=0;i<n-k;i++)
			for(j=0;j<n-k;j++){
			if(j>=2&&i<2)
				a[i][j-1]=a[i][j];
			else if(i>=2&&j<2)
				a[i-1][j]=a[i][j];
			else if(i>=2&&j>=2)
				a[i-1][j-1]=a[i][j];
			}
         k++;
		
		}
		printf("%d\n",sum);
	}
		return 0;
}