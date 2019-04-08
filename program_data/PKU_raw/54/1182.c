 /* homework2.cpp
 *
 *  Created on: 2012-11-10
 *      Author: Lixurong
 */


int main()
{
	double n, k;//????
	cin >> n >> k;//??
	double m=0, p;//????
	int t[1000];//????
	int s=0;
	for( double j=1; j<10000000; j++ )//??
	{
	    int q=1;
	    p=j;//??????
		for( int i=0; i<n; i++ )//???????????????
	    {
		    m=(n*p)+k;
		    p=m/(n-1);
		    if( p-(int)p !=0 && i!=n-1)
		    {
		    	q=0;
		    	break;
		    }
	    }
		if( q==1 )//????????
		{
			t[s]=(int)m;
			s++;
		}
		m=0;

	}
	int max1=t[0];//????
	for( int i=0; i<s; i++ )
	{
		if(t[i]<max1)
			max1=t[i];
	}
	cout << max1;

}