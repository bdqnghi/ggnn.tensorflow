/*
 * a003.cpp
 *
 *  Created on: 2011-10-29
 *      Author: Administrator
 */
int main()
{
	int i;
	char a1[80],b1[80];
	cin.getline(a1,80);
	cin.getline(b1,80);
	for(i=0;i<80;i++)
	{
		if(25>=a1[i]-65&&a1[i]-65>=0)
			a1[i]=a1[i]+32;
		if(25>=b1[i]-65&&b1[i]-65>=0)
			b1[i]=b1[i]+32;
	}//?????????????

	if(strcmp(a1,b1)>0) cout<<">";
	if(strcmp(a1,b1)<0) cout<<"<";
	if(strcmp(a1,b1)==0) cout<<"=";//??? ???
	return 0;
}