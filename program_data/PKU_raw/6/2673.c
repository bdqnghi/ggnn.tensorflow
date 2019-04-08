//============================================================================
// Name        : juzhenbianyuan.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int a[101][101];
		int r,c,j,k,l,m,sum,n,p;
        cin>>n;//?????????
      for(p=1;p<=n;p++)
      { sum=0;
		cin>>r;
		cin>>c;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				cin>>a[i][j];//?????? 


		for(j=0;j<r;j++)
		{
			sum=sum+**(a+j);//?????????
		}

		for(k=1;k<c;k++)
		{
			sum=sum+*(*(a+r-1)+k);//?????????
		}
		for(l=r-2;l>=0;l--)
		{
			sum=sum+*(*(a+l)+c-1);//?????????
		}
		for(m=1;m<c-1;m++)
		{
			sum=sum+*(*(a+0)+m);//?????????
		}
     cout<<sum<<endl;

      }
	return 0;
}
