/*
 * bla.cpp
 *
 *  Created on: 2012-11-4
 *      Author: Administrator
 */

int main()
{
	int m;
	while(cin>>m)
	{
		if(m==-1) break;
		int a[15],i=0,j,k,count=0;
		a[0]=m;
		while(cin>>m)
		{
			if(m==0) break;
			i++;
			a[i]=m;
		}
		k=i+1;
		for(i=0;i<k;i++)
			for(j=0;j<k;j++)
				if(a[i]==2*a[j])
					count++;
		cout<<count<<endl;
	}
	return 0;
}