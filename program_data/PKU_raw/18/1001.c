/*
 * 6.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */

int main()
{
    int n,m;
    cin>>n;
    m=n;
    while(m>0)
    {
    	m=m-1;
    	int a[n][n],b[n-1],s=0;
    	int (*p)[n]=NULL,*q=NULL;
    	p=a;
    	q=b;
    	for(int i=0;i<n;i++)
    		for(int j=0;j<n;j++)
    			cin>>*(*(p+i)+j);
    	int imin,jmin;
    	for(int k=0;k<n-1;k++)
    	{
    	for(int i=0;i<n-k;i++)
    	{
    		imin=*(*(p+i)+0);
    		for(int j=1;j<n-k;j++)
    		{
    			if(*(*(p+i)+j)<imin)
    			{
    				imin=*(*(p+i)+j);
    			}
    		}
    		for(int j=0;j<n-k;j++)
    		{
    			*(*(p+i)+j)=*(*(p+i)+j)-imin;
    		}
    	}
    	for(int i=0;i<n-k;i++)
    	{
    		jmin=*(*(p+0)+i);
    		for(int j=1;j<n-k;j++)
    		{
    			if(*(*(p+j)+i)<jmin)
    			{
    				jmin=*(*(p+j)+i);
    			}
    		}
    		for(int j=0;j<n-k;j++)
    		{
    			*(*(p+j)+i)=*(*(p+j)+i)-jmin;
    		}
    	}
    	*(q+k)=*(*(p+1)+1);
    	for(int i=1;i<n-1-k;i++)
    	{
    		for(int j=0;j<n-k;j++)
    		{
    			*(*(p+i)+j)=*(*(p+i+1)+j);
    		}
    	}
    	for(int i=1;i<n-1-k;i++)
    	{
    		for(int j=0;j<n-1-k;j++)
    		{
    			*(*(p+j)+i)=*(*(p+j)+i+1);
    		}
    	}
    	}
    	for(int k=0;k<n-1;k++)
    	{
    		s=s+*(q+k);
    	}
    	cout<<s<<endl;
    }
    return 0;
}

