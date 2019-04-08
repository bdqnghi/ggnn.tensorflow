/*
 * s.cpp
 *
 *  Created on: 2013-11-3
 *      Author: shu
 */
int main(){
	int N;
	cin>>N;
	int i,a[N];
	for(i=0;i<N;i++)
		cin>>a[i];
	sort(a,a+N);
	for(i=0;i<N;i++){
	if(a[i]%2!=0)cout<<a[i];
	break;}
	for(i=i+1;i<N;i++)
		if(a[i]%2!=0)
			cout<<","<<a[i];
	return 0;
}