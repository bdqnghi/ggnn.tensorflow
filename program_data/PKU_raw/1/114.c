/*
 *  1000012850_34.1.cpp
 *  ????????????a??????????????? ?????????
 *  Created on: 2010-11-27
 *      Author: william
 */
int resolution_into_factors(int j,int i)
{
	int m, sum=0, k=0;
	for(m=j ;m<=sqrt(i); m++)
	{
		if(i%m==0)
		{
            sum=resolution_into_factors(m, i/m)+sum+1;
			k++;
		}
	}
	if(k==0) return 0;
    return sum;
}
int main()
{
    int n, k, i;
    cin>>n;
    for(k=1; k<=n; k++)
    {
    	cin>>i;
    	cout<<resolution_into_factors(2,i)+1<<endl;
    }
    return 0;
}