/*
 * wanyi.cpp
 *
 *  Created on: 2012-11-21
 *      Author: 7
 */
char c[300];
void change(char a[250],char b[250],int la,int lb)
{
	int sig=1;
	c[la]=a[la-1];
	if(lb>0)
		{
			c[la]=a[la-1]+b[lb-1]-'0';
		}
	if(c[la]>'9')
	{
		c[la]=c[la]-10;
		if(la>1)
		a[la-2]+=1;
		else
			c[0]='1';
	}
	if(la>1)
	change(a,b,la-1,lb-1);
	else
	{
		for(int i=0;i<(int)strlen(c);i++)
			{
			if(sig&&c[i]=='0')
				{continue;}
			else {cout<<c[i];sig=0;}
			}
		if(sig)
			cout<<0;
	}
}
int main()
{
	memset(c,'\0',sizeof(c));
	c[0]='0';
	char a[300];
	char b[300];
	cin.getline(a,250,'\n');
	cin.getline(b,250,'\n');
	if(strlen(a)>strlen(b))change(a,b,strlen(a),strlen(b));
	else change(b,a,strlen(b),strlen(a));
}
