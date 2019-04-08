/*
 * 3.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */

int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		char a[81];int t=1;
		gets(a);//????
		int l=strlen(a);
		if(i!=0){
		if(!(a[0]==95||(a[0]>=97&&a[0]<=122)||(a[0]>=65&&a[0]<=90)))t=0;//???????????????
		for(int j=1;j<l;j++){
			if(!((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9')||a[j]=='_'))//???????
				t=0;
		}cout<<t<<endl;//?????????1????????0???
	}}return 0;
}
