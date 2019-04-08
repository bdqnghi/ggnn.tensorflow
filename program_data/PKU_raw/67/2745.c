
int main()
{
int n;
float c;
cin>>n;
float x,y;
cin>>x>>y;
float z=y/x;
float a,b;
int i;
for (i=1;i<n;i++)
{
	cin>>a>>b;
	c=b/a;
	if (c-z>0.05)
		cout<<"better"<<endl;
	if (z-c>0.05)
		cout<<"worse"<<endl;
	if (c>=z-0.05&&c<=z+0.05)
		cout<<"same"<<endl;
}
	return 0;
}
