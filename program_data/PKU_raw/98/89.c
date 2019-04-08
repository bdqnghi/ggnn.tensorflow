
/*
 *  Name:homework.cpp
 *  Created on: 2012-12-10
 *  Author: Meng Li
 *  Function:????
 */


int main(){                            //???
	int n, i;
	cin >> n;
	char *start;
	char *temp;
	temp=start;
	for (i=0;i<n;i++){
		char word[40];
		cin >> word;
		int length=strlen(word);
		if (temp-start+length<80){
			if (temp-start!=0){
				cout << ' ';
				temp++;
			}
			cout << word;
			temp=temp+length;
		}
		else{
			start=temp;
			cout << endl;
			cout << word;
			temp=temp+length;
		}
	}
	return 0;
}
