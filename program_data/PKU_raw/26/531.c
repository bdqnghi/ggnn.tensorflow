/*
 * ???????.cpp
 *
 *  Created on: 2011-1-8
 *      Author: lenovo
 */
int main()
{
	char a[60];
	while (true)
	{
		int i=0;
	    if (!(cin.get(a[i]))) break;

	    if (a[i]==' ')
	    	{
	    	   while (true)
	    	   {
	    		   cin>>a[i+1];
	    		   if (a[i+1]!=' ')
	    		   {
	    			   cout<<' '<<a[i+1];
	    			   break;
	    		   }
	    		   i++;
	    	   }
	    	}
	    else
	    	cout<<a[i];
	    i++;
	}
	return 0;
}