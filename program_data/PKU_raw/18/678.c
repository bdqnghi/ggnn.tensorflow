/*
 * ??????????????
 * ??          ???
 * ????: 2011-11-6
 * ??????????????????????a[1][1]???
 */

int main()
{
    int i,j,k,n,min,sum=0,num=0;
    int a[101][101];
    int minr[101];
    int minc[101];
    cin>>n;

    for(k=1,num=0,sum=0;k<=n;k++)
    {

    	for(i=1;i<=n;i++)            //??? ????
    	{
    		for(j=1;j<=n;j++)
    		{
    			cin>>a[i][j];
    		}
    	}
        num=0;
        sum=0;
    	while(num<n-1)
    	{
    		memset(minr,0,101*4);
    		memset(minc,0,101*4);
    		for(i=1;i<=n-num;i++)                            //??????????
    		{ 											//?????
    			min=a[i][1];
    			for(j=1;j<=n-num;j++)
    			{
    				if(a[i][j]<min)
        			min=a[i][j];
    			}
    			minr[i]=min;
    		}

    		for(i=1;i<=n-num;i++)                           //?????
    		{
    			for(j=1;j<=n-num;j++)
    			{
    				a[i][j]=a[i][j]-minr[i];
    			}
    		}

    		for(j=1;j<=n-num;j++)
                { 											//?????
                	min=a[1][j];
                	for(i=1;i<=n-num;i++)
                	{
                		if(a[i][j]<min)
                			min=a[i][j];
                	}
                	minc[j]=min;
                }

           for(j=1;j<=n-num;j++)                          //?????
                {
                	for(i=1;i<=n-num;i++)
                	{
                		a[i][j]=a[i][j]-minc[j];
                	}
                }

                sum=sum+a[2][2];
                //??

                //????
                for(i=1;i<=n-num;i++)                        //???
                {
                	for(j=2;j<=n-num-1;j++)
                	{
                		a[i][j]=a[i][j+1];
                	}
                }

                for(j=1;j<=n-num-1;j++)
                {
                	for(i=2;i<=n-num-1;i++)
                	{
                		a[i][j]=a[i+1][j];
                	}
                }

                num++;                                       //???????1
    	}
     cout<<sum<<endl;
    }

	return 0;
}