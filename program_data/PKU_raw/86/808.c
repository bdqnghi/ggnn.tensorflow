/*
 * ????.cpp
 *
 *  Created on: 2010-11-17
 *      Author: qaj
 */



int main(){
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
		int m;
		cin>>m;
		int a[10];
		int l=0;
		for(int k=1;k<=m;k++)
			cin>>a[k];
		for(int k=1;k<=m;k++){
			if(a[k]+3*k>57)
				{l=k-1;
				break;
				}
			l=k;
		}

		if((a[l+1]+3*l)==59)
			cout<<59-3*l<<endl;
		else cout<<60-3*l<<endl;

	}
	return 0;
}