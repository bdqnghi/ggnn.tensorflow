/*
 * 6.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main(){
	int num,i,j,sum;
	cin>>num;
	int n=num,min,t=num;
	while(num>0){
		n=t;
		int a[n][n];
		sum=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		while(n>1){
		for(i=0;i<n;i++){
			min=a[i][0];
			for(j=0;j<n;j++)
				if(a[i][j]<min)
					min=a[i][j];
			for(j=0;j<n;j++)
				a[i][j]=a[i][j]-min;
		}
		for(i=0;i<n;i++){
			min=a[0][i];
			for(j=0;j<n;j++)
				if(a[j][i]<min)
					min=a[j][i];
			for(j=0;j<n;j++)
				a[j][i]=a[j][i]-min;
		}
		//for(i=0;i<n;i++)
			//for(j=0;j<n;j++)
			//	cout<<a[i][j]<<' ';
		sum=sum+a[1][1];
		//cout<<a[1][1]<<endl;
		//cout<<sum<<" ";
		for(i=0;i<n;i++)
			for(j=1;j<n;j++)
				a[i][j]=a[i][j+1];
		for(i=0;i<n;i++)
			for(j=1;j<n;j++)
				a[j][i]=a[j+1][i];
		n--;
		}
		cout<<sum<<endl;
		num--;
	}
}

