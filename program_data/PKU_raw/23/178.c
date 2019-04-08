/*
 *  Name:andian.cpp
 *
 *  Created on: 2012-11-05
 *  Author: ??
 *  Function?????
 */


int main()
{
	char a[100];
	int i, j, length, flag;
	cin.getline(a,100);
	length=strlen(a);
	flag=length;
	for (i=length-1;i>=0;i--){
		if (a[i]==' '){
			if (flag!=length)
				cout<<' ';
			for (j=i+1;j<=flag-1;j++){
				cout<<a[j];
			}
			flag=i;
		}
		if (i==0){
			if(flag!=length)
				cout << ' ';
			for (j=0;j<=flag-1;j++){
				cout<<a[j];
			}
		}
	}
	return 0;
}

