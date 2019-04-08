int main()
{
double a;int b;
char c[1000];
cin>>a;
cin>>c;
cin>>b;
int num=0,len,i;
int remain;
double x[1000];
len=strlen(c);
char m[1000];
int o[1000];

for(i=0;i<len;i++)
{
	if(c[i]>='a'&&c[i]<='z')
		x[i]=c[i]-'a'+10;
	if(c[i]<='Z'&&c[i]>='A')
		x[i]=c[i]-'A'+10;
	if(c[i]>='0'&&c[i]<='9')
		x[i]=c[i]-'0';
}
for(i=0;i<len;i++)                        
{	num+=x[i]*pow(a,len-1-i);}
remain=num;


int p=0;
do
{
	o[p]=remain%b;
	remain=(remain-o[p])/b;
	p++;
}
while(remain>0);

for(i=0;i<p;i++)
{
	if(o[i]>=10)
		m[i]=o[i]-10+'A';
	else
		m[i]=o[i]+'0';
}
for(i=p-1;i>=0;i--)
	cout<<m[i];
return 0;

}