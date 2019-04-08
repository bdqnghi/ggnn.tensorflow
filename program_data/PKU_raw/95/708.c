/*
 * 1000012730_wg1.cpp
 *    ??????????
 *  Created on: 2010-11-6
 *      Author: ???
 */

int main(){
    char str1[80],str2[80];    //??????
    int length1,length2,i,a;
    cin.getline(str1,80);       //????
    cin.getline(str2,80);
    length1=strlen(str1);length2=strlen(str2);
    for(i=0;i<=length1-1;i++){
    	if((str1[i]<='z')&&(str1[i]>='a'))       //???????????????
    		str1[i]=str1[i]-32;
    }
    for(i=0;i<=length2-1;i++){
        	if((str2[i]<='z')&&(str2[i]>='a'))
        		str2[i]=str2[i]-32;
        }
    a=strcmp(str1,str2);
    if(a==0)
    	cout<<"=";
    if(a==-1)cout<<"<";
    if(a==1)cout<<">";
    return 0;
}
