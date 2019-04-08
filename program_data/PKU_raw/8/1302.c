/*
 * function2.7.cpp
 *
 *  Created on: 2013-12-1
 *      Author: st
 */

int a[20],b[20],c[40];
void read(int x1,int x2)
{   int i;
	for(i=0;i<x1;i++)
		cin>>a[i];
	for(i=0;i<x2;i++)
		cin>>b[i];
	return ;
}
void sort1(int n)
{
	int k,j,tem;
	for(k=1;k<n;k++)
		for(j=0;j<n-k;j++)
			if(a[j]>a[j+1])
				{tem=a[j];
	            a[j]=a[j+1];
	            a[j+1]=tem;}
    return ;
}
void sort2(int n)
{
	int k,j,tem;
		for(k=1;k<n;k++)
			for(j=0;j<n-k;j++)
				if(b[j]>b[j+1])
					{tem=b[j];
		            b[j]=b[j+1];
		            b[j+1]=tem;}
		return ;
}
void combine(int n1,int n2)
{   int i;
for(i=0;i<n1;i++)
	c[i]=a[i];
	for(i=n1;i<n1+n2;i++)
		c[i]=b[i-n1];
	return ;
}

void arraycout(int n1,int n2)
{
	int i;
	cout<<c[0];
	for(i=1;i<n1+n2;i++)
		cout<<" "<<c[i];
	return ;

}
int main()
{   int n1,n2;
    cin>>n1>>n2;
	read(n1,n2);
	sort1(n1);
	sort2(n2);
	combine(n1,n2);
	arraycout(n1,n2);
	return 0;

}
