/*
 * md.cpp
 *
 *  Created on: 2010-12-31
 *      Author: 10040
 */



int main(){
	char str[40];
	cin.getline(str,40);
	//cout << str <<endl;
	int tens[9]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
	int num=0, k=0;
	int len = strlen(str);
	for(int i=0; i<len; i++){
		if(str[i]>='0' && str[i]<='9'){
			k++;
			continue;
		}
		else if(k==0) continue;
		else{
			for(int j=0; j<k; j++){
				//cout << str[i-j] << endl;
				num += (str[i-j-1]-'0')*tens[j];
			}
			k=0;
			cout << num << endl;
			num = 0;
		}
	}
	if(k!=0){
		for(int j=0; j<k; j++){
			num += (str[len-j-1]-'0')*tens[j];
		}
		k=0;
		cout << num << endl;
	}


	return 0;
}
