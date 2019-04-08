/*
 * tianjisaima.cpp
 *
 *  Created on: 2012-3-19
 *      Author: Hijack
 */

const int MAX = 1005;
int a[MAX],b[MAX];
int cmp(int a, int b)
{
	return a > b;
}
int main(){
    int n,i;
    while(cin>>n && n)
    {
    	for(i = 0; i < n; i++)
    		cin>>a[i];
    	for(i = 0; i < n; i++)
    		cin>>b[i];
    	sort(a,a+n,cmp);
    	sort(b,b+n,cmp);
        int num = 0;
        int al = 0, bl = 0;
        int ar = n-1,br = n-1;
    	while(al <= ar)
    	{
    		if(a[ar] > b[br])
    		{
    			ar--;
    			br--;
    			num += 200;
    		}
    		else if(a[ar] < b[br])
    		{
    			ar--;
    			bl++;
    			num -= 200;
    		}
    		else if(a[ar] == b[br])
    		{
    			if(a[al] > b[bl])
    			{
    				al++;
    				bl++;
    				num += 200;
    			}
    			else if(a[al] < b[bl])
    			{
    				ar--;
    				bl++;
    				num -= 200;
    			}
    			else if(a[al] == b[bl])
    			{
    				if(a[ar] == b[bl])
    				{
    					ar--;
    					bl++;
    				}
    				else
    				{
    					ar--;
    					bl++;
    					num -= 200;
    				}
    			}
    		}
    	}
    	cout<<num<<endl;

    }

}
