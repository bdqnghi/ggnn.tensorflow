int main(){
	int a[20][20];
	int b[400];
	int d[400];
	int m,n,j;
	scanf("%d %d",&m,&n);
	int i,k;
	j=0;
	for(i=0;i<m;i++){
		for(k=0;k<n;k++){
			scanf("%d",&a[i][k]);
		}
	}
	for(i=0;i<m;i++){
		for(k=0;k<n;k++){
			if(i==0){
				if(k==0){
					if(a[i][k]>=a[i+1][k]&&a[i][k]>=a[i][k+1]){
						b[j]=i;
						d[j]=k;
						j=j+1;
					}
				}
				else if(k==n-1){
					if(a[i][k]>=a[i][k-1]&&a[i][k]>=a[i+1][k]){
						b[j]=i;
						d[j]=k;
						j=j+1;
					}
				}else{
					if(a[i][k]>=a[i][k-1]&&a[i][k]>=a[i+1][k]&&a[i][k]>=a[i][k+1]){
                        b[j]=i;
						d[j]=k;
						j=j+1;
					}
				}
			}
			else if(i==m-1){
				if(k==0){
					if(a[i][k]>=a[i-1][k]&&a[i][k]>=a[i][k+1]){
						b[j]=i;
						d[j]=k;
						j=j+1;
					}
				}
				else if(k==n-1){
					if(a[i][k]>=a[i-1][k]&&a[i][k]>=a[i][k-1]){
						b[j]=i;
						d[j]=k;
						j=j+1;
					}
				}else{
					if(a[i][k]>=a[i-1][k]&&a[i][k]>=a[i][k+1]&&a[i][k]>=a[i][k-1]){
                        b[j]=i;
						d[j]=k;
						j=j+1;
					}
				}
			}
			else if(k==0){
				if(a[i][k]>=a[i-1][k]&&a[i][k]>=a[i+1][k]&&a[i][k]>=a[i][k+1]){
					b[j]=i;
					d[j]=k;
					j=j+1;
				}
			}
			else if(k==n-1){
				if(a[i][k]>=a[i][k-1]&&a[i][k]>=a[i+1][k]&&a[i][k]>=a[i-1][k]){
					b[j]=i;
					d[j]=k;
					j=j+1;
				}
			}else{
				if(a[i][k]>=a[i+1][k]&&a[i][k]>=a[i-1][k]&&a[i][k]>=a[i][k-1]&&a[i][k]>=a[i][k+1]){
					b[j]=i;
				    d[j]=k;
				    j=j+1;
				}
			}
		}
	}
	int h;
	for(h=1;h<=j;h++){
		int e,c;
		for(i=0;i<j-h;i++){
			if(b[i]>b[i+1]){
				e=b[i+1];
				c=d[i+1];
                d[i+1]=d[i];
				b[i+1]=b[i];
				b[i]=e;
				d[i]=c;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%d %d\n",b[i],d[i]);
	}
	return 0;
}