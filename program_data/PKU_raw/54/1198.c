/*
 * ?????.cpp
 *
 *  Created on: 2012-11-14
 *      Author: ???
 */
int main()
{
	int n=0,k=0,j=1,i=1,apples=0;
	cin>>n>>k;
	apples=n+k;
	while(1)
	{
		while(apples%(n-1)==0&&i<n)
		{
			apples=apples/(n-1)*n+k;
			++i;
		}
		if (i<n){
			j++;
			apples=j*n+k;
			i=1;
		}
		else break;
	}
	cout<<apples;
	return 0;
}
