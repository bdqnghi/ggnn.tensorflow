void fuction1(int x,int a[])
{
	int i,j,m;
	for(i=0;i<x;i++)
		for(j=0;j<x-1-i;j++)
		{
			if(a[j]>a[j+1]){m=a[j];a[j]=a[j+1];a[j+1]=m;}
		}
	for(i=0;i<x;i++)
		cout<<a[i]<<" ";
}
void fuction2(int y,int b[])
{
	int i,j,m;
	for(i=0;i<y;i++)
		for(j=0;j<y-i-1;j++)
		{
			if(b[j]>b[j+1]){m=b[j];b[j]=b[j+1];b[j+1]=m;}
		}
	for(i=0;i<y-1;i++)
		cout<<b[i]<<" ";
	cout<<b[y-1];
}
int main ()
{
	int k,l,p,q,a[1000000],b[1000000];
	cin>>p>>q;
	for(k=0;k<p;k++)
		cin>>a[k];
	for(k=0;k<q;k++)
		cin>>b[k];
	fuction1(p,a);
	fuction2(q,b);
	return 0;
}
