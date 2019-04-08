/*
 * 1134 ??.cpp
 *
 *  Created on: 2010-11-12
 *      Author: ???
 */
int main()
{
	int a[16],i,j,k,l,n;         //????
	k=0;
	while (k!=-1)               //-1????
	{
		if (a[0]==-1)break;    //-1????
		i=0;l=1;
		do                     //??????
		{
			i=i+1;
			cin>>a[i];
			l=i+1;
		}while(a[i]!=0);
		l=l-1;n=0;
		for (i=0;i<l;i++)      //???????
			for (j=0;j<l;j++)
			{
				if (a[i]==2*a[j])
					n=n+1;
			}
		cout<<n<<endl;        //??
		for (i=0;i<16;i++)
			a[i]=0;
		cin>>a[0];
		k=a[0];
	}
	return 0;
}