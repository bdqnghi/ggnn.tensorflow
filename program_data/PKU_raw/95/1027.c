/*
 *bigorsamll.cpp
 *
 *  Created on: 2011-10-28
 *      Author: 11287
 */
int main()
{
 char str1[80],str2[80];                       //?????
 int i;
 cin.getline(str1,80);                         //?????
 cin.getline(str2,80);
 for(i=0;str1[i]!='\0';i++)                   //?????
	 if(str1[i]>='A'&&str1[i]<='Z')
		 str1[i]=str1[i]+32;
 for(i=0;str2[i]!='\0';i++)
 	 if(str2[i]>='A'&&str2[i]<='Z')
 		 str2[i]=str2[i]+32;
 if(strcmp(str1,str2)<0) cout<<"<"<<endl;       //???????
 if(strcmp(str1,str2)>0) cout<<">"<<endl;
 if(strcmp(str1,str2)==0) cout<<"="<<endl;
 return 0;
 }
