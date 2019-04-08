/*
 * p7.cpp
 *
 *  Created on: 2010-11-5
 *      Author: ???
 *      ????
 */
int main()
{
	int i,j,k,a,l,sum=0;  //????????
	char s[101];
	char s1[101];
	char s2[101];
	char s0[101];
	cin.getline(s,101);   //?????
	cin>>s1;
	cin>>s2;
	int k1=strlen(s);
	for(i=0;i<strlen(s);i++)   //???????
	{	if((s[i]==s1[0]&&s[strlen(s1)+i]==' '&&s[i-1]==' ')||(i==0&&s[i]==s1[0]&&s[strlen(s1)+i]==' ')||(s[i]==s1[0]&&s[i-1]==' '&&i+strlen(s1)==strlen(s)))    //
		{
		for(a=0;a<strlen(s)-i-strlen(s1);a++)  //????????????
			s0[a]=s[i+strlen(s1)+a];
	for(j=0;j<strlen(s2);j++)   //???????
		s[i+j]=s2[j];
	for(l=0;l<strlen(s0);l++)   //????????
		s[i+j+l]=s0[l];
     sum++; i=i+strlen(s2)-strlen(s1);
		}
	}
	for(k=0;k<k1+sum*strlen(s2)-sum*strlen(s1);k++)
	cout<<s[k];   //??
	return 0;
}

