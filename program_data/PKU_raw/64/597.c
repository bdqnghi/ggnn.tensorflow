/*
 * 80.cpp
 * ??????
 *  Created on: 2011-12-14
 * ???????????n??????10??,??n?????????,???????????????????????????
 */

int main()
{
	int n,i,k,j,p,t=0;
	double q;
	cin>>n;
	struct zb
	{
		int x;
		int y;
		int z;
	}aa[n];

	for(i=0;i<n;i++)
	{
		cin>>aa[i].x>>aa[i].y>>aa[i].z;
	}

	double s[n][n];
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		s[i][j]=0.0;
    	}
    }
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s[i][j]=(sqrt)((aa[i].x-aa[j].x)*(aa[i].x-aa[j].x)+(aa[i].y-aa[j].y)*(aa[i].y-aa[j].y)+(aa[i].z-aa[j].z)*(aa[i].z-aa[j].z));
		}
	}

	k=(n-1)*(n-1);
	double ss[k];
	for(i=0;i<k;i++)
	{
		ss[i]=0.0;
	}
    for(i=0;i<n-1;i++)
    {
    	for(j=1;j<n;j++)
    	{
    		ss[t]=s[i][j];
    		t=t+1;
    	}
    }

    for(i=0;i<k;i++)
    {
    	for(j=0;j<k-i-1;j++)
    	{
    		if(ss[j]<ss[j+1])
    		{
    			q=ss[j+1];
    			ss[j+1]=ss[j];
    			ss[j]=q;
    		}
    	}
    }

    p=n*(n-1)/2;
    int a=0;
	for(t=0;t<p;t++)
	{
		for(i=0;i<n-1;i++)
		{
			for(j=1;j<n;j++)
			{
				if(ss[t]==s[i][j])
				{
					cout<<"("<<aa[i].x<<","<<aa[i].y<<","<<aa[i].z<<")"<<"-"<<"("<<aa[j].x<<","<<aa[j].y<<","<<aa[j].z<<")"<<"=";
					cout<<fixed<<setprecision(2)<<s[i][j]<<endl;
					s[i][j]=-1.0;
					a=1;

				}
			}
		}
	}
	return 0;
}
