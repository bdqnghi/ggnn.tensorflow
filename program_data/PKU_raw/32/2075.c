/*
 * temperary.cpp
 *
 *  Created on: 2011-12-25
 *      Author: ???
 */

int main() {
	int n;
	cin>>n;
	while(n>0){
		n--;
		char a[100],b[100];
		cin>>a>>b;
		int l1=strlen(a),l2=strlen(b),i,c[100];
		for(i=0;i<l2;i++){
			if(a[l1-1-i]<b[l2-1-i]){
				a[l1-2-i]--;
				a[l1-1-i]+=10;
			}
			c[i]=a[l1-1-i]-b[l2-1-i];
		}
		for(i=l2;i<l1;i++){
			if(a[l1-1-i]<'0'){
				a[l1-2-i]--;
				a[l1-1-i]+=10;
			}
			c[i]=a[l1-1-i]-48;
		}
		while(c[i-1]==0)i--;
		while(i>0){
			i--;cout<<c[i];
		}
                   cout<<endl;
	}
	return 0;
}

