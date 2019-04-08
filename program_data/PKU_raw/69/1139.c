int length(char* v);
void diandao(char* v,int i);
int main()
{
	int x=0;
	char a[250],b[250],c[250];
	cin.getline(a,250);
	cin.getline(b,250);
	diandao(a,length(a));
	diandao(b,length(b));
	x=length(a);
	if(x<length(b))x=length(b);
	for(int i=0;i<x;i++)
		c[i]='0';
	for(int i=0;i<x;i++)
	{
		if(a[i]<'0'||a[i]>'9') a[i]='0';
		if(b[i]<'0'||b[i]>'9') b[i]='0';
		if(a[i]-'0'+b[i]-'0'+c[i]-'0'<=9)	c[i]+= -'0'+a[i]-'0'+b[i];
		else	{c[i]=c[i]-'0'+a[i]-'0'+b[i]-10; c[i+1]='1';}
	}
	diandao(c,length(c));
	int k=0;
	for(int i=0;i<length(c);i++)
	{	if(c[i]!='0'){k=i;break;}}
	for(int i=k;i<length(c);i++)
		cout<<c[i];
	return 0;
}
int length(char* v)
{
	int x;
	for(int i=1;v[i-1]>='0'&&v[i-1]<='9';i++)
		x=i;
	return x;
}
void diandao(char* v,int i)
{
	for(int j=0;j<i/2;j++)
		swap(v[j],v[i-j-1]);
}