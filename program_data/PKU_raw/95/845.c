/*
 * 1000012702_30.cpp
 *
 *  Created on: 2010-11-11
 *      Author: shirley
 */
int main(){
	char str1[80]={0},str2[80]={0};
	cin.getline(str1,80);
	cin.getline(str2,80);

	int i;
	for(i=0;i<=79;i++){
		if(str1[i]>=97) str1[i]=str1[i]-32;
		if(str2[i]>=97) str2[i]=str2[i]-32;
		if(str1[i]==str2[i])continue;
		if(str1[i]>str2[i]){
			cout<<'>'<<endl;
			break;
		}
		if(str1[i]<str2[i]){
			cout<<'<'<<endl;
			break;
		}
	}
	if(i==80) cout<<'='<<endl;
	return 0;

}
