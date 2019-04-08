/*
 * dazhengshujianfa.cpp
 *
 *  Created on: 2010-12-24
 *      Author: lz
 */

int main()
{
	int n;
	cin>>n;
	char a[200];//?????
	char b[200];//????
	char c[200];//???
	char s[200];//????????
	while(n>0)
	{
		n--;
		int i;
		int j;
		int carry=0;//??
		cin>>s;
		int slen=strlen(s);
		for(i=0;i<slen;i++)
			a[i]=s[slen-i-1];
		int alen=slen;
		cin>>s;
		slen=strlen(s);
		for(i=0;i<slen;i++)
			b[i]=s[slen-i-1];
		int blen=slen;
		for(i=0;i<blen;i++)//??
		{
			if(a[i]-'0'-carry>=b[i]-'0')
			{
				c[i]=(char)(a[i]-b[i]-carry+'0');
				carry=0;
			}
			else
			{
				c[i]=(char)(a[i]-b[i]-carry+10+'0');
				carry=1;
			}
		}
		for(i=blen;i<alen;i++)
		{
			if(a[i]-carry>='0')
			{
				c[i]=(char)(a[i]-carry);
				carry=0;
			}
			else
			{
				c[i]=(char)(a[i]-carry+10);
				carry=1;
			}
		}
		for(i=alen-1;i>=0;i--)
			if(c[i]!='0')
				break;
		for(j=i;j>=0;j--)
			cout<<c[j];
cout<<endl;
	}
	return 0;
}
