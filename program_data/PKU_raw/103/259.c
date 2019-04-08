/*
 * 2.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	char string[1005],temp;
	cin.getline(string,1005);
	//cout<<string<<endl;
	int i,length=strlen(string),count=0;
	for(i=0;i<length;i++)
		if(string[i]>='a'&&string[i]<='z')
			string[i]+=('A'-'a');
	for(i=0;i<length;)
	{
		/*if(string[i]>='a'&&string[i]<='z')
			string[i]+=('A'-'a');
		if(string[i+1]>='a'&&string[i+1]<='z')
					string[i+1]+=('A'-'a');*/
		count=1;
		temp=string[i];
		i++;
		while(string[i]==string[i-1])
		{
			if(i==length)
				break;
			count++;
			i++;
		}
		cout<<'('<<temp<<','<<count<<')';
	}


	return 0;
}
