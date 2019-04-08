/*
 *  ????????.cpp
 *
 *  Created on: 2010-10-29
 *      Author: hyd
 */
main(){
	int n,i,t,k,j;
	do
		cin>>n;              //????????
	while (n>100000||n<=0);
	const int  m=n;      //??
    int a[m];
    for (i=0;i<=m-1;i++)
    	cin>>a[i];
    do
    cin>>t;              //????????
    while (t>100000||t<-100000);
    k=0;                 //k???????????
    for (i=0;i<=m-1;i++)
    {if (a[i]==t)        //???????????????????i???1
      {k++;
       for (j=i;j<=m-1;j++)
       a[j]=a[j+1];
      i--;
      }
    }

	 for (i=0;i<=m-k-2;i++) //??
      cout<<a[i]<<' ';
      cout<<a[m-k-1];

return 0;
}
