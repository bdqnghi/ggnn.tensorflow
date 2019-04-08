/*
 * Distance sorting.cpp
 *
 *  Created on: 2013-11-6
 *      Author: ???
 */
int main()
{   int a[10],b[10],c[10];
    float d[100],p,x[100][3],y[100][3];
    int i,j,n,k,m=0,s,t;
    cin>>n;
    for(i=0;i<n;i++)
    	cin>>a[i]>>b[i]>>c[i];
    for(i=0;i<n-1;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    	      x[m][0]=a[i];
    	      x[m][1]=b[i];
    	      x[m][2]=c[i];
    	      y[m][0]=a[j];
    	      y[m][1]=b[j];
    	      y[m][2]=c[j];
    	      d[m]=sqrt((x[m][0]-y[m][0])*(x[m][0]-y[m][0])+(x[m][1]-y[m][1])*(x[m][1]-y[m][1])+(x[m][2]-y[m][2])*(x[m][2]-y[m][2]));
    	      m++;
    	}
    }
    for(j=0;j<m-1;j++)
    {
    	for(i=0;i<m-1-j;i++)
    	{
    		if(d[i]<d[i+1])
    		{
    			p=d[i];
    			d[i]=d[i+1];
    			d[i+1]=p;
    			for(k=0;k<3;k++)
    			{   s=x[i][k];
    				x[i][k]=x[i+1][k];
    				x[i+1][k]=s;
    				t=y[i][k];
    				y[i][k]=y[i+1][k];
    				y[i+1][k]=t;
    			}
    		}
    	}
    }
    for(i=0;i<m;i++)
    	cout<< fixed<<setprecision(0)<<"("<<x[i][0]<<","<<x[i][1]<<","<<x[i][2]<<")-("<<y[i][0]<<","<<y[i][1]<<","<<y[i][2]<<")="<< fixed<<setprecision(2)<<d[i]<<endl;


	 return 0;

}
