int main()
{
double a;int b;
char c[1000];
cin>>a;
cin>>c;
cin>>b;
double num=0;
int len,i;
int remain;
double x[1000];
len=strlen(c);
char m[1000];
int o[1000];
for(i=0;i<len;i++)
{
	if(c[i]>='a'&&c[i]<='z')
		x[i]=c[i]-87;
	if(c[i]<='Z'&&c[i]>='A')
		x[i]=c[i]-55;
	if(c[i]>='0'&&c[i]<='9')
		x[i]=c[i]-48;
}
for(i=0;i<len;i++)                        //
{	num+=x[i]*pow(a,len-1-i);}
remain=num;

int p=0;
while(remain>0)
{
	o[p]=remain%b;
	remain=(remain-o[p])/b;
	p++;
}
for(i=0;i<p;i++)
{
	if(o[i]>=10)
		m[i]=o[i]+55;
	else
		m[i]=o[i]+48;
}
for(i=p-1;i>=0;i--)
	cout<<m[i];
if(p==0)
    cout<<0<<endl;
return 0;

}
