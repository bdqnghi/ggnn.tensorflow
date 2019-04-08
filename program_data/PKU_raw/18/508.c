/*
 * 11-8.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */

int main(){
	int n,i,j,k,nn,a[100][100],sum,min;  //??n????min???a???sum
	cin>>n;
	for (k=1;k<=n;k++){    //????
		sum=0;
		for (i=0;i<n;i++)
			for (j=0;j<n;j++) cin>>a[i][j];
		nn=n;
		while (nn>1){
			for (i=0;i<nn;i++){  //?????
				min=a[i][0];
				for (j=0;j<nn;j++) if (a[i][j]<min) min=a[i][j];
				for (j=0;j<nn;j++) a[i][j]=a[i][j]-min;
			}
			for (j=0;j<nn;j++){  //?????
				min=a[0][j];
				for (i=0;i<nn;i++) if (a[i][j]<min) min=a[i][j];
				for (i=0;i<nn;i++) a[i][j]=a[i][j]-min;
			}
			sum=sum+a[1][1];
			for (i=1;i<nn-1;i++) a[i][0]=a[i+1][0];  //?????????
			for (j=1;j<nn-1;j++) a[0][j]=a[0][j+1];
			for (i=1;i<nn-1;i++)
				for (j=1;j<nn-1;j++) a[i][j]=a[i+1][j+1];
			nn=nn-1;  //???????
		}
		if (k==1) cout<<sum;
		else cout<<endl<<sum;
	}
	return 0;
}
