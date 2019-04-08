int a[300],b[300],c[600];
void myfunc()
{
	int la,lb,i;
	cin>>la>>lb;
	for(i=0;i<la;i++)
		cin>>a[i];
	for(i=0;i<lb;i++)
		cin>>b[i];
	sort(a,a+la);
	sort(b,b+lb);
	for(i=0;i<la;i++)
		c[i]=a[i];
	for(i=la;i<la+lb;i++)
		c[i]=b[i-la];
	for(i=0;i<la+lb-1;i++)
		cout<<c[i]<<' ';
         cout<<c[i];
}
int main()
{
    myfunc();
    return 0;
}


