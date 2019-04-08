/*
 * temp.cpp
 *
 *  Created on: 2011-5-8
 *      Author: 10288
 */
void add(char * a,char *b);
int main()
{
	char a[301],b[301];
	cin >> a >> b;
	if(strcmp(a,"0")==0&&strcmp(b,"0")==0)
		cout << 0;
	else
	{
	if(strlen(a)>=strlen(b))
		add(a,b);
	else
		add(b,a);
	}

}
void add(char* a,char* b)
{
	char c[301];
	memset(c,'0',sizeof(c));
	int d[301],f[301];
	int l1=strlen(a);
	int l2=strlen(b);
	int i,t,j;
	for(i=l1-1;i>=0;i--)
		d[l1-1-i]=a[i]-'0';
	for(i=l2-1;i>=0;i--)
		f[l2-1-i]=b[i]-'0';
	for(i=l2;i<l1;i++)
		f[i]=0;
	for(i=0;i<l1;i++)
	{
		t=d[i]+f[i]+c[i]-'0';
		c[i]=t%10+'0';
		c[i+1]=t/10+'0';
	}
	for(i=200;i>=0;i--)
		if(c[i]!='0')
			break;
	for(j=i;j>=0;j--)
		cout << c[j];
}
