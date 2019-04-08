/*
 * 09.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main(){
	int n,i,j,k,l,min;
	cin>>n;
	int a[n][n][n],sum[n];
	int (*p)[n][n]=a,*s=sum;
	memset(sum,0,sizeof(sum));
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				cin>>*(*(*(p+i)+j)+k);
	for(i=0;i<n;i++){
		for(l=0;l<n-1;l++){
			for(j=0;j<n;j++){
				min=*(*(*(p+i)+j));
				for(k=l+1;k<n;k++){
					if(min>*(*(*(p+i)+j)+k))
						min=*(*(*(p+i)+j)+k);
				}
				for(k=0;k<n;k++){
					*(*(*(p+i)+j)+k)=*(*(*(p+i)+j)+k)-min;
				}
			}
			for(k=0;k<n;k++){
							min=*(*(*(p+i))+k);
							for(j=l+1;j<n;j++){
								if(min>*(*(*(p+i)+j)+k))
									min=*(*(*(p+i)+j)+k);
							}
							for(j=0;j<n;j++){
								*(*(*(p+i)+j)+k)=*(*(*(p+i)+j)+k)-min;
							}
						}
			*(s+i)=*(s+i)+*(*(*(p+i)+l+1)+l+1);
		}
	}
	for(i=0;i<n;i++)
		cout<<*(s+i)<<endl;
	return 0;
}
