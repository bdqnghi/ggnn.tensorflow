/*
 * wanyi.cpp
 *
 *  Created on: 2012-11-14
 *      Author: 7
 */
int n,m;
int a[100],b[100],c[200];
void in()
{
	cin>>n>>m;
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
}
void pai(int *p,int k)
{
	int i,j,temp;
	for(i=0;i<k;i++)
		for(j=0;j<k-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
}
void he()
{
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i];
	for(i=0;i<m;i++)
		c[i+n]=b[i];
}
void out()
{
	int i;
    cout<<c[0];
	for(i=1;i<n+m;i++)
		cout<<" "<<c[i];
}
int main()
{
	in();
	pai(a,n);
	pai(b,m);
	he();
	out();
}
