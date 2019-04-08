/*
 * ???:06.cpp
 * ???:???
 * ????:2011-11-06
 * ??:??n?n???????????????????a[1][1]???
 */

int main( )
{
    int n,i,j,k,l,d,c,s,t,min1,min2;     //????
    cin>>n;     //??n
    int a[n][n][n],b[n][n];     //????
    for (i=0;i<n;i++)     //?????
    {
    	int h=0;     //????a[1][1]????
	    for(j=0;j<n;j++)     //????
		    for(k=0;k<n;k++)
			    cin>>a[i][j][k];
	    for(l=0;l<n-1;l++)     //????????
    	{
            for(j=0;j<n-l;j++)
            {
                min1=a[i][j][0];
                for(k=1;k<n-l;k++)
                {
            	    if(min1>a[i][j][k])
            	    	min1=a[i][j][k];
                }
                for(k=0;k<n-l;k++)
                a[i][j][k]=a[i][j][k]-min1;     //???????????
            }
            for(d=0;d<n-l;d++)     //????????
            {
            	min2=a[i][0][d];
            	for(c=1;c<n-l;c++)
            	{
            		if(min2>a[i][c][d])
            			min2=a[i][c][d];
            	}
            	for(c=0;c<n-l;c++)
            		a[i][c][d]=a[i][c][d]-min2;     //???????????
            }
            b[i][l]=a[i][1][1];     //?????a[1][1]
            for(s=1;s<n-1-l;s++)
            	for(t=0;t<n-l;t++)
            		a[i][s][t]=a[i][s+1][t];     //????
            for(t=1;t<n-l-1;t++)
            	for(s=0;s<n-l-1;s++)
            		a[i][s][t]=a[i][s][t+1];     //????
        }
	    for(l=0;l<n-1;l++)     //??
	    	h=h+b[i][l];
	    cout<<h<<endl;     //??
    }
	return 0;
}