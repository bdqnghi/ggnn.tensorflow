/*
 * dancidao.cpp
 *
 *  Created on: 2013-11-15
 *      Author: ???
 */
int main()
{
	int i,j,n,q=0,l[100];
    char a[100][50];
    for(i=0;i<100;i++)
    {
    	for(j=0;j<50;j++)
    	{
    		a[i][j]=cin.get();
    		if(a[i][j]==' ')
    		{
    			l[i]=j;
    			break;
    		}
    		else
    			if(a[i][j]=='\n')
    			{
    				l[i]=j;
    				q=1;
    				break;
    			}
    	}
		if(q)
			break;
    }
    n=i+1;
    for(i=n-1;i>=0;i--)
    {
    	if(i==0)
    	      for(j=0;j<l[i];j++)
    			cout<<a[i][j];
    	else
    	{
    		for(j=0;j<l[i];j++)
    			cout<<a[i][j];
    		cout<<' ';
    	}
    }
       return 0;
}
