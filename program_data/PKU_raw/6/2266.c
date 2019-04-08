/*
 * juzhenbianyuanhe.cpp
 *????????
 *  Created on: 2012-12-12
 *      Author: ???
 */
int main(){
	int k,m,n,a[100][100];//??  ???????
	int i,p,q;
	cin >> k;
	for(i=1;i<=k;i++){
		cin >> m >> n;
		for(p=0;p<m;p++)//??
			for(q=0;q<n;q++){
			cin >> a[p][q];
			}
		int sum=0;
		if(m<=2 || n<=2){//??3??3?????????
			for(p=0;p<m;p++){
				for(q=0;q<n;q++){
					sum=sum+a[p][q];}
			}
			cout << sum << endl;
		}
		else{//???????????????????
			int sum1=0,sum2=0;
			sum=0;             //??????????
			for(p=0;p<m;p++){
				sum1=a[p][0]+a[p][n-1]+sum1;
			}
			for(q=0;q<n;q++){
				sum2=sum2+a[0][q]+a[m-1][q];
			}
			sum=sum1+sum2-(a[0][0]+a[0][n-1]+a[m-1][0]+a[m-1][n-1]);//?????????????
			cout << sum << endl;
		}
	}
	return 0;
}
