/*
 * 1000012826_30_01.cpp
 *
 *  Created on: 2010-11-14
 *      Author: Administrator
 */


int main()
{
 char str1[1024],str2[1024];
 gets(str1);
 gets(str2);
 for(unsigned int i=0; i<strlen(str1); ++i)
 {
  if('a' <= str1[i] && str1[i] <= 'z')//???????
   str1[i] =str1[i]-32;//???????????
  }


 for( unsigned int j=0; j<strlen(str2); ++j)
 {
  if('a' <= str2[j] && str2[j] <= 'z')//???????
   str2[j] =str2[j]-32;//???????????
  }
     if (strcmp(str1,str2)==0)
    	 cout<<"="<<endl;
     else if(strcmp(str1,str2)==1)
    	 cout<<">"<<endl;
     else cout<<"<"<<endl;
     return 0;}