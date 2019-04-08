/*
 * name.cpp
 *
 *  Created on: 2010-12-31
 *      Author: 10308
 */
int main(){
	char a1[100],a2[100];
	cin.getline(a1,100);
	int l=strlen(a1);
	for(int i=0;i<l;i++){
		if(a1[i]==' '){
			for(int j=i+1;j<l;j++){
				a2[j-i-1]=a1[j];
			}
			a1[i]='\0';
			a2[l-i-1]='\0';
			break;
		}
	}
	int k;
	if(strlen(a1)!=strlen(a2)){
		cout<<"NO"<<endl;
		return 0;
	}
	for(int i=0;i<strlen(a1);i++){
		for(int j=0;j<strlen(a2);j++){
			if(a2[j]==a1[i]){
				for(k=j;k<strlen(a2)-1;k++){
					a2[k]=a2[k+1];
				}
				a2[k]='\0';
			}
		}
	}
	if(strlen(a2)==0)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
