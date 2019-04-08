/*
 * 1.cpp
 *
 *  Created on: 2011-1-8
 *      Author: Administrator
 */
int main(){
	char string[101];
	cin.getline(string,101);
	int i,j,lenth = strlen(string);
	for(i=0;i<lenth;i++){
		if(string[i]=='\0')  break;
		if(string[i]==' '){
			j=i;
			while(true){
				if(string[j+1]!=' ')  break;
				j++;
			}
			int l=j-i;
			for(j=i+1;j<lenth-l;j++){
				string[j]=string[j+l];
			}
			string[j]='\0';
		}
	}
	cout<<string<<endl;
	return 0;
}

