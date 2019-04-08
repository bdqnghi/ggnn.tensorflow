/*
 * 111202_6_AcceptableIdentifier.cpp
 *
 *  Created on: 2011-12-4
 *      Author: Alfalfa
 */
void judge(char word[81]){ //??????
	int len=strlen(word),flag=0;
	if(word[0]<'A'||(word[0]>'Z'&&word[0]<'_')||(word[0]>'_'&&word[0]<'a')||word[0]>'z') { cout<<0<<endl; flag=1;} //????????? ???0
	else for(int i=1;i<len;i++){
		if(word[i]<'0'||(word[i]>'9'&&word[i]<'A')||(word[i]>'Z'&&word[i]<'_')||(word[i]>'_'&&word[i]<'a')||word[i]>'z'){
			cout<<0<<endl;
			flag=1;
			break; //??????
		}
	}
	if(flag==0) cout<<1<<endl; //??????????1
}

int main(){
	int n,j;
	cin>>n;
	char a[81],b[81];
	cin.getline(b,81);
	for(j=0;j<n;j++){
		cin.getline(a,81);
		judge(a);
	}
	return 0;
}
