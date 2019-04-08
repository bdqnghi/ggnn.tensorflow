/*
 * shit.cpp
 *
 *  Created on: 2012-10-15
 *      Author: Administrator
 */

int main()
{
	int z,q,s,l;
	int a[5];
	char b[5];
	for(z=1;z<6;z++)
		for(q=1;q<6;q++)
			for(s=1;s<6;s++)
				for(l=1;l<6;l++)
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						a[1]=z*10;b[1]='z';
						a[2]=q*10;b[2]='q';
						a[3]=s*10;b[3]='s';
						a[4]=l*10;b[4]='l';
						break;
					}
	int j,i,p,e;
	for(j=1;j<=3;j++)
	{
		for(i=1;i<=4-j;i++)
		{
			if(a[i]<a[i+1])
			{
				p=a[i];
				a[i]=a[i+1];
				a[i+1]=p;
				e=b[i];
      			b[i]=b[i+1];
				b[i+1]=e;
			}
		}
	}
	for(i=1;i<=4;i++)
	{
		cout<<b[i]<<" "<<a[i]<<endl;
	}
	return 0;
}
