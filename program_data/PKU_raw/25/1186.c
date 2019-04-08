/*
 * 3.cpp
 *
 *  Created on: 2013-1-13
 *      Author: i
 */
int main(){
	int num[40]={1},temp[40]={1},n,i;
	cin>>n;
	while(n--){
		for(i=0;i<40;i++){
			if(num[i]==0&&num[i+1]==0&&num[i+2]==0)break;
			if(num[i]+temp[i]>9){
				temp[i+1]++;
				temp[i]=num[i]+temp[i]-10;
			}
			else{
				temp[i]=num[i]+temp[i];
			}
		}
		for(i=0;i<40;i++){
			num[i]=temp[i];
		}
	}
	n=0;
	for(i=39;i>=0;i--){
		if(n)cout<<num[i];
		else if(num[i]!=0){
			cout<<num[i];
			n++;
		}
	}
	cout<<endl;
	return 0;
}
