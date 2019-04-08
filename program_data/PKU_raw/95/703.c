/*
 * p5.cpp
 *
 *  Created on: 2010-11-5
 *      Author: ???
 *      ?????????
 */
int main()
{
	char s1[81],s2[81];  //?????
	int i;        
	cin.getline(s1,81);   //?????
	cin.getline(s2,81);
	for(i=0;i<81;i++)   //???????
		if (s1[i]<97&&s1[i]>64) s1[i]=s1[i]+32;
	for(i=0;i<81;i++)
			if (s2[i]<97&&s2[i]>64) s2[i]=s2[i]+32;
	if(strcmp(s1,s2)>0) cout<<'>'<<endl;    //???????
	if(strcmp(s1,s2)<0) cout<<'<'<<endl;
	if(strcmp(s1,s2)==0) cout<<'='<<endl;


	return 0;



}
