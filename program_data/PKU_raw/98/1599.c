/*
 * Typesetting.cpp
 *
 *  Created on: 2013-12-5
 *      Author: KEVIN
 */


int main()
{
	int n;
	cin>>n;
	char line[81];
	char* p=line;
	memset(line,'\0',81);
	while(n--)
	{
		char word[41];
		cin>>word;
		int len=strlen(word);
		if(strlen(line)+len>80)
		{
			*(p-1)='\0';//?line???????'\0'
			cout<<line<<endl;
			memset(line,'\0',81);
			p=line;
		}
		memcpy(p,word,len);
		p+=len;
		*p++=' ';
	}
	if(strlen(line)>0)
	{
		*(p-1)='\0';
		cout<<line;
	}
	return 0;
}
