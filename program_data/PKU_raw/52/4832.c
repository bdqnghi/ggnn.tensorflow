/*
 * m,n.cpp
 *
 *  Created on: 2011-12-11
 *      Author: FXD
 */
int main()
{
	int a[1000],n,m,i,j,t;
	int*p=NULL,*q=NULL,*r=NULL,*s=NULL,*x=NULL,*y=NULL;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	p=&a[0];
	q=&a[n-1];
	for(i=0,j=n-1;i<j;i++,j--)
	{
		t=*q;
		*q=*p;
		*p=t;
		p++;
		q--;
	}
	r=&a[0];
	s=&a[m-1];
	for(i=0,j=m-1;i<j;i++,j--)
	{
		t=*s;
		*s=*r;
		*r=t;
		r++;
		s--;
	}
	x=&a[m];
	y=&a[n-1];
	for(i=m,j=n-1;i<j;i++,j--)
	{
		t=*y;
				*y=*x;
				*x=t;
				x++;
				y--;
	}
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<a[n-1]<<endl;
	return 0;

}
