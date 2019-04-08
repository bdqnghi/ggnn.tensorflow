/*
 * md.cpp
 *
 *  Created on: 2010-12-31
 *      Author: 10040
 */



int main(){
	char str[225];
	cin.getline(str, 225);

	char str1[255], str2[255];
	int i=0;
	int len = strlen(str);
	for(; i<len; i++){
		if(str[i]==' ')
			break;
		str1[i] = str[i];
	}
	str1[i] = '\0';
	i++;
	int j;
	for(j=0; i<len; j++,i++){
		str2[j] = str[i];
	}
	str2[j]='\0';
	//cout << str1 << endl << str2 ;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 != len2){
		cout << "NO" << endl;
		return 0;
	}
	for(int k=0; k<len1; k++){
		int flag=0;
		for(int p=0; p<len2; p++){
			if(str2[p]==str1[k]){
				str2[p]='1';
				flag=1;
				break;
			}
		}
		if(flag==0){
			cout << "NO" << endl;
			return 0;
		}
	}

	cout << "YES" << endl;





	return 0;
}

