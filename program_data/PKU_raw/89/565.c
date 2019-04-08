/*
 * ceyan5.cpp
 *??:??????
 *  Created on: 2011-1-8
 *      Author: 10154
 */

int main(){
	int n,i,j;
	cin>>n;
	const int N=n;
	int knowme[N];
	for(i=0;i<n;i++)knowme[i]=0;
	i=0;j=0;
	cin>>i>>j;
	while(i!=0||j!=0){
		knowme[j]++;
		cin>>i>>j;
	}
	j=0;
	for(i=0;i<n;i++)
		if(knowme[i]==n-1){
			j=1;
			cout<<i<<endl;
		}
	if(j==0)cout<<"NOT FOUND"<<endl;
	return 0;
}
