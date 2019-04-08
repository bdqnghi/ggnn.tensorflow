/*
 * 1.cpp
 *
 *  Created on: 2011-1-8
 *      Author: 10033
 */


int main(){
	char str[150];
	int i,j,nstr;
	cin.getline(str,150);
	nstr=strlen(str);
	for(i=0;i<nstr-1;i++)
		while(str[i]==' '&&str[i+1]==' ')
			for(j=i+1;j<nstr;j++)
				str[j]=str[j+1];
	cout<<str<<endl;
	return 0;
}
