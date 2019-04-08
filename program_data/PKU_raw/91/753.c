/*
 * zhizheng.cpp
?? - ???????
 *  Created on: 2012-12-12
 *      Author: ???
 */
char str1[101],str2[101],*p=NULL,*q=NULL;
int len1;
int main(){
	cin.getline(str1,101);
	len1=strlen(str1);
	for(p=str1,q=str2;p<str1+len1-1;p++,q++)
	{
		*q=*p+*(p+1);
	}
	*q=*p+*(p-len1+1);
	cout<<str2<<endl;
	return 0;
}
