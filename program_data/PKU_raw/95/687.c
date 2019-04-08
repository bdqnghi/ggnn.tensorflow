//============================================================================
// Name        : test3.cpp
// Author      : Liang ShiYu
// Version     : 1.0
// Copyright   : copyright reserved
// Description : about string
//============================================================================


int main() {                       //main function
	char a[80];     
	char b[80];                    //dim string a and string b for storing the input
	cin.getline(a,80);
	cin.getline(b,80);             //get the input
	int n=strlen(a);               //calculate the length of the string
	for(int i=0;i<n;i++){
		if(a[i]>=97&&a[i]<=122) a[i]-=32;
	}
	n=strlen(b);
	for (int i=0;i<n;i++){
		if(b[i]>=97&&b[i]<=122) b[i]-=32; 
	}                                       //edit each string
	int z;
	z=strcmp(a,b);                  //compare the two string
	if (z<0) cout<<"<";
	if (z==0) cout<<"=";
	if(z>0) cout<<">";              //cout correctly
	return 0;
}
