/*
 * homework.cpp
 *
 *  Created on: 2013-10-21
 *      Author: dyx
 */
int main()
{
	int n;
	cin >> n;
	int sum[n],i;
	for( i=0;i<n;i++)
		cin >> sum[i];
    int k;//delete number?
    cin >> k;
    int j=0;
    for(i=0;i<n;i++)
    {
    	if(sum[i]==k)
    		continue;
    	if(sum[i]!=k&&j==0)
    	{
    		cout << sum[i];
    		j++;
    	}
    	else	
    	cout << " " << sum[i];
    }



return 0;






}
