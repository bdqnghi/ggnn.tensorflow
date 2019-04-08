/*
 * 1000012795-????.cpp
 *
 *  Created on: 2010-12-19
 *      Author: Administrator
 */
int main()
{
	int a[100]={0};
	int n,i;
     cin>>n;
	for(i=1;i<=n;i++)
	{
		int m,j,a1,a2,k;
		cin>>m;
		for(j=1;j<=m;j++)
			cin>>a[j];
		if(a[m]+3*(m-1)<=57)
		{
			a1=60-3*m;
			cout<<a1<<endl;
		}
		if(a[m]+3*(m-1)==58||a[m]+3*(m-1)==59||a[m]+3*(m-1)==60)
			cout<<a[m]<<endl;
		if(a[m]+3*(m-1)>60)
		{
			for(k=m-1;k>=1;k--)
			{
				if(a[k]+3*(k-1)<=57)
				{
					a2=60-3*k;
					cout<<a2<<endl;
					break;
				}
			    if(a[k]+3*(k-1)==58||a[k]+3*(k-1)==59||a[k]+3*(k-1)==60)
			    {
			 	    cout<<a[k]<<endl;
			        break;
			    }
			}
		}
	}
	return 0;
}
