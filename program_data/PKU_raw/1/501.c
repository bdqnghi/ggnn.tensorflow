/*
 * fenjie.cpp
 *
 *  Created on: 2010-11-28
 *      Author: ???
 *      function: ????
 */
int solutionNumber(int a,int k){//??????????????
	int i;
	if(a==1) return 1;
	if(k>a) return 0;
	for(i=k;i<=a;i++)
	    if(a%i==0) return solutionNumber(a,i+1)+solutionNumber(a/i,i);
}
int main()
{
	int n,a[101];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];//??????
		cout<<solutionNumber(a[i],2)<<endl;//????????????
	}
	return 0;
}


