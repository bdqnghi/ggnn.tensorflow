/*
 * 11.161.cpp
 *
 *  Created on: 2012-11-4
 *      Author: ???
 */
int main()
{
	int a[500],b[500];//????????
	int i,k=0,j,m,n,t,c,d;
	cin >>n;
	for(i=0;i<n;i++)
		cin >> a[i];
	for(j=0;j<n;j++)//?a????????b????
	{
		if(a[j]%2==1)
		{
			b[k]=a[j];
			k++;
		}
	}
	for(m=0;m<k-1;m++)//?b?????
		for(c=0;c<k-m-1;c++)
		{
			if(b[c]>b[c+1])
			{
				t=b[c];
				b[c]=b[c+1];
				b[c+1]=t;
			}
		}
	for(d=0;d<k-1;d++)//????

		cout << b[d]<<"," ;

		cout <<b[k-1];

}

