/*
 * nibolan.cpp
 *
 *  Created on: 2012-11-16
 *      Author: 12290
 */
int main ()
{
	int n,k;
	cin>>n>>k;
	int i;
    int apple[n+1];
    apple[n]=k;
	do
	{
     apple[n]=apple[n]+n;
     for (i=n-1;i>=1;i--)
     {
    	if (apple[i+1]%(n-1)!=0)
    		break;
    	else
    		apple[i]=apple[i+1]*n/(n-1)+k;
     }
    }while (i>=1);
	cout<<apple[1]<<endl;
	return 0;
}
