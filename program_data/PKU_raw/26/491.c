/*
 * guolv.cpp
 *
 *  Created on: 2011-1-8
 *      Author: qaj
 */
int main(){
	char ch[100];
	cin.getline(ch,100);
	int l=strlen(ch);
	for(int i=0;i<l;i++){
		if((ch[i]==' ')&&(ch[i+1]==' ')){
			for(int j=i;j<l;j++){
				ch[j]=ch[j+1];
			}
			i--;
		}
	}
	cout<<ch;
	return 0;
}