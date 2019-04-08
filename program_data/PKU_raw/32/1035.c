/*
 * 88.cpp
 *
 *  Created on: 2011-12-25
 *      Author: 1
 */

int main()
{
	int n,aa,bb,i,j,p,q;
	cin>>n;
	char a[100];
    char b[100];
    char d[100];
    cin.getline(a,100);
	while(n>0)
	{
		n=n-1;
		cin.getline(a,100);
		cin.getline(b,100);
		cin.getline(d,100);
		aa=(strlen)(a);
		bb=(strlen)(b);
		for(i=aa;i>=0;i--)
		{
			b[i]=b[i-aa+bb];
		}
		for(i=0;i<aa-bb;i++)
		{
			b[i]='0';
		}
		int c[aa];
		for(i=aa-1;i>=0;i--)
		{
			p=(int)(a[i]);
			q=(int)(b[i]);
			if(p>=q) c[i]=p-q;
			else
			{
				c[i]=p+10-q;
				a[i-1]=(char)((int)(a[i-1])-1);
			}
		}
		for(i=0;i<100;i++)
		{
		    if(c[i]!=0) break;
		}
		for(j=i;j<100;j++)
		{
			c[j-i]=c[j];
		}
		for(j=0;j<aa-i;j++)
		{
			cout<<c[j];
		}
		cout<<endl;
	}
	return 0;
}
