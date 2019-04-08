/*
 * wo.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int n,i,sum=0,j,temp;
	double ave=0;
	int a[1000]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	ave=(double)sum/(double)n;
   for(i=1;i<n;i++)
      for(j=0;j<n-i;j++)
      {
    	  if(a[j]>a[j+1])
    	  {
    		  temp=a[j];
    		  a[j]=a[j+1];
    		  a[j+1]=temp;
    	  }
      }
   if(a[0]==a[n-1]){
	   for(i=0;i<n-1;i++)
		   cout<<a[0]<<",";
   cout<<a[0]<<endl;}
   else if((ave-a[0])>(a[n-1]-ave))
	   cout<<a[0];
   else if((ave-a[0])<(a[n-1]-ave))
	   cout<<a[n-1];
   else if((ave-a[0])==(a[n-1]-ave))
	   cout<<a[0]<<","<<a[n-1];
   return 0;
}
