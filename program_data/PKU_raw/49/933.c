/*
 * 1204.cpp
 *
 *  Created on: 2012-12-4
 *      Author: wangyinzhi
 */
int main(){
	char a[500];
	int i,j,k,t;
	cin>>a;
	for(i=2;i<=strlen(a);i++){//?????
		for(j=i-1;j<strlen(a);j++){//????
			for(k=0;k<i/2;k++){
				if(a[j-k]!=a[j-i+k+1])//????
					break;
			}
			if(k==i/2){
				for(t=0;t<i;t++){
					cout<<a[j-i+t+1];//???????
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
