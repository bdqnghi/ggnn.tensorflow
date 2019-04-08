

int p1,p2,p3,i;
char a[1000];
char b[1000];
char c[1000];
int max(int a,int b)
{
	if (a>b) return a;else return b;
}
int za(int m)
{
	if (m<0) return 0;else return a[m]-'0';
}
int zb(int m)
{
	if (m<0) return 0;else return b[m]-'0';
}
int main()
{
	cin>>a;
	cin>>b;
	p1=0;while(a[p1]!='\0')p1++;p1--;
	p2=0;while(b[p2]!='\0')p2++;p2--;
	c[0]=0;
	for (i=0;i<=max(p1,p2)+1;i++) c[i]=za(p1-i)+zb(p2-i);
	for (i=0;i<=max(p1,p2)+1;i++) 
	{
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}
	p3=900;while((c[p3]==0)&&(p3>=0))p3--;
	for (i=p3;i>=0;i--) cout<<(int)c[i];
	if (p3<=0) cout<<0;
	cout<<endl;
	return 0;
}