/*
 * judgement.cpp
 *
 *  Created on: 2011-12-2
 *      Author: 11095
 */

int main()
{
	int n,i;
	cin>>n;
	cin.get();
	char str[100];
	for(i=1;i<=n;i++){
		cin.getline(str,100);
		int ans=1,i=0;
		if(str[0]>='0'&&str[0]<='9')  //????
		{
			ans=0;
			cout<<ans<<endl;
			continue;
		}

		char *p=str;
		for(p=str;i<strlen(str);i++,p++){
			if(*p>='0'&&*p<='9'||*p>='a'&&*p<='z'||*p>='A'&&*p<='Z'||*p=='_')  //??????
				continue;
			else
			{
				ans=0;
				break;
			}
		}
		cout<<ans<<endl;
	}

}
