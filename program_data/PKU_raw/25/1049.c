/*
 * ??2?N??.cpp
 *
 *  Created on: 2012-12-31
 *      Author: i
 */
int main(){
	int num[40]={0},temp[40]={0},n=0,i=0;
	num[0]=1;temp[0]=1;
	cin>>n;
	while(n--){
		for(i=0;i<40;i++){
			if(num[i]+temp[i]<10)temp[i]=num[i]+temp[i];
			else {
				temp[i]=num[i]+temp[i]-10;
				temp[i+1]++;
			}
		}
		for(i=0;i<40;i++){
			num[i]=temp[i];
		}
	}
	n=0;
	for(i=39;i>=0;i--){
		if(n!=0||num[i]!=0){
			cout<<num[i];
			n++;
		}
	}
	return 0;
}
