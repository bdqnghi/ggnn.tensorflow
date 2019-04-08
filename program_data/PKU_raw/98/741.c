/*
 * word.cpp
 *
 *  Created on: 2011-12-11
 *      Author: wangshiheng
 */

int main()
{
	char words[41];
	int s=-1,l,n,i;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>words;
		l=strlen(words);
			if (s==-1){s=l+s+1;cout<<words;}
			else if (s+l+1<=80){s=l+s+1;cout<<' '<<words;}
			else {s=l;cout<<endl;cout<<words;}
	}

	return 0;
}
