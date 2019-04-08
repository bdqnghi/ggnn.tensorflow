/*
 * fengjie.cpp
 *
 *  Created on: 2013-11-23
 *      Author: sony
 */

int sum;

void f(int x,int i){
	if (x == 1) sum++;
	for(;i<=x;i++)
		if (x%i == 0) f(x/i,i);
	return;
}

int main(){
	int t,a,i=2;
	cin>>t;//????????
	for (a = 0; a<t ; a++){
		int x;
		cin >> x;
		int ans = 1;
		for(i = 2; i<sqrt(x) ; i++){
			sum = 0;
			if(x%i == 0) f(x/i,i);
			ans = ans + sum;
		}
		cout<<ans<<endl;
	}
	return 0;
}
