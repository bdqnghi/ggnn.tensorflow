/*
 * mokuahihua.cpp
 * ?????
 *  Created on: 2012-11-27
 *      Author: ???   1200012899
 */
int a[100],b[100];
int c,d;
void read(int,int);
void rank(int,int);
void print (int,int);
int main ()
{
	cin>>c>>d;//????????????
	read (c,d);//????????
	rank (c,d);//??????
	print(c,d);//???? ??
}
void read(int n,int m)//????
{
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
}
void rank(int n,int m)//????
{
	int temp;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];a[j]=a[j+1];a[j+1]=temp;
			}
	for(int i=0;i<m-1;i++)
			for(int j=0;j<m-1-i;j++)
				if(b[j]>b[j+1])
				{
					temp=b[j];b[j]=b[j+1];b[j+1]=temp;
				}
}
void print (int n,int m)//????
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	for(int i=0;i<m;i++)
	{
		cout<<b[i];
		if(i!=m-1)
			cout<<" ";
	}
}
