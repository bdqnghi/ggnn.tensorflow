/*
 * WenziPaiban.cpp
 *
 *  Created on: 2012-12-18
 *      Author: ThinkPad
 */
int main()
{
    int n,i,count=0;
    cin>>n;
    char a[n][40];
    for(i=0;i<n;i++)
    	cin>>*(a+i);
    for(i=0;i<n;i++)
    {
    	count=count+strlen(*(a+i))+1;

    	if(count<=80&&count+strlen(*(a+i+1))<=80&&i<n-1)cout<<a[i]<<" ";
    	if(count==81||count+strlen(*(a+i+1))>80||i==n-1)
    	{
    		cout<<*(a+i);
    		count=0;
    		cout<<endl;
    	}
    }

	return 0;

}
