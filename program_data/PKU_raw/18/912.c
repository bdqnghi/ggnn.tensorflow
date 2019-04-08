/*
 * ?????????.cpp
 *
 *  Created on: 2011-12-31
 *      Author: ???
 */

int main() {
	int n,i,j,a[10000],*p,k=0;
        p=a;
	cin>>n;
	while(k<n){
		int total=0,m=n;
		k++;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++){
				cin>>*(p+i*n+j);
			}
		while(m>1){
			int min=100000;
			for(i=0;i<m;i++){
				for(j=0;j<m;j++){
					if(*(p+i*m+j)<min)min=*(p+i*m+j);
				}
				for(j=0;j<m;j++)*(p+i*m+j)-=min;
				min=10000;
			}
			min=10000;
			for(j=0;j<m;j++){
				for(i=0;i<m;i++){
					if(*(p+i*m+j)<min)min=*(p+i*m+j);
				}
				for(i=0;i<m;i++)*(p+i*m+j)-=min;
				min=10000;
			}
			total+=*(p+m+1);
			for(j=2;j<m;j++)*(p+j-1)=*(p+j);
			for(i=2;i<m;i++){
				*(p+(i-1)*(m-1))=*(p+i*m);
				for(j=2;j<m;j++)
					*(p+(i-1)*(m-1)+j-1)=*(p+i*m+j);
			}
			m--;
		}
		cout<<total<<endl;
	}
	return 0;
}
