/*
 * fuxi1.cpp
 *??????
 *  Created on: 2011-11-4
 *      Author: APPLE
 */
int main()                                         //??????i????j???
{
	int i,j,a,b,k,p;                               //????
	int array[102][102];                           //??????
	cin>>a>>b;
	for(i=0;i<a;i++)                                  //????????????
		for(j=0;j<b;j++)
			cin>>array[i][j];


		if(a>=b)                                     //?????????????????????
		{for(j=0;j<b;j++)
			for(k=j,i=0;k>=0;i++,k--)
    cout<<array[i][k]<<endl;
		for(i=1;i<=a-b;i++)
			for(p=i,j=b-1;j>=0;p++,j--)
				cout<<array[p][j]<<endl;
		for(i=a-b+1;i<a;i++)
			for(p=i,j=b-1;p<a;p++,j--)
						cout<<array[p][j]<<endl; }
		else                                             //??????????????????
		{for(j=0;j<a;j++)
         for(k=j,i=0;k>=0;i++,k--)
		    cout<<array[i][k]<<endl;
	     for(j=a;j<b;j++)
	    	 for(k=j,i=0;i<a;i++,k--)
	    	cout<<array[i][k]<<endl;
      for(i=1;i<a;i++)
		for(j=b-1,p=i;p<a;p++,j--)
			cout<<array[p][j]<<endl;}
	return 0;                                          //?????


}
