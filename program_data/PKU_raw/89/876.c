/*
 * 111220_Celebrity.cpp
 *
 *  Created on: 2011-12-23
 *      Author: Alfalfa
 */
int main(){
	int n1;
	cin>>n1;
	const int n=n1;
	int knowother[n],beknown[n],input1=1,input2=1;
	memset(knowother,0,sizeof(knowother));
	memset(beknown,0,sizeof(beknown));
	while(input1||input2){
		cin>>input1>>input2;
		if(input1!=input2) {
			knowother[input1]++;
			beknown[input2]++;
		}
	}
	int celebrity=0,flag=0;
	for(int i=0;i<n;i++){
		if(knowother[i]==0 && beknown[i]==n-1) {
			celebrity=i;
			flag=1;
		}
	}
	if(flag==1) cout<<celebrity;
	else cout<<"NOT FOUND";
	return 0;
}
