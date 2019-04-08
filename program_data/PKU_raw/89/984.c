/*
 * 243.cpp
 *
 *  Created on: 2011-12-22
 *      Author: think
 */
int main(){
	int n;
	cin>>n;
	int knowcount[n];
	int knowncount[n];
	memset(knowcount,0,sizeof(knowcount));
	memset(knowncount,0,sizeof(knowncount));
	int temp1,temp2;
	for(;;){
		cin>>temp1>>temp2;
		if(temp1==0&&temp2==0)break;
		knowcount[temp1]++;
		knowncount[temp2]++;
	}
	int i,count=0;
	for(i=0;i<n;i++){
		if(knowcount[i]==0&&knowncount[i]==n-1){
			cout<<i<<endl;count++;
		}
	}
	if(count==0)cout<<"NOT FOUND"<<endl;
	return 0;
}
