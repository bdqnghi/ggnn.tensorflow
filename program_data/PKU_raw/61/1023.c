/*
 * phoenix3+1.cpp
 *Author: ???
 *  Created on: 2013-9-28
 *    ??????
 */
int main()
{
	int i,n,c,a[20],b[20];
	cin>>n;
	 for (i=0;i<n;i++)
	 {
		cin>>a[i];

	 }
	 for(i=0;i<20;i++)
	 {
		 if((i==0)||(i==1))
			 b[i]=1;
		 else b[i]=b[i-1]+b[i-2];
	 }
	 for(i=0;i<n;i++)
	 {
		 c=a[i];
		 cout<<b[c-1]<<endl;
	 }

	 return 0;
}







