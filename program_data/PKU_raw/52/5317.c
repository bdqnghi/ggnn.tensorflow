/*
 * ????xunhuan.cpp
 * ??????
 * ?????2012 12 22
 * ?????????
 */



int main(){
	int m,n,i,j,t;
	cin >>n>>m;
	int a[n];
	for (i=0;i<n;i++)
		cin >>*(a+i);               //??
	for (i=1;i<=m;i++)
		for (j=1;j<=n-m;j++){
			t=*(a+n-m+i-j);
			*(a+n-m+i-j)=*(a+n-m+i-j-1);
			*(a+n-m+i-j-1)=t;
		}                            //????
	for (i=0;i<n;i++){
		if (i!=n-1)
		cout <<*(a+i)<<" ";
		else cout <<*(a+i);          //??
	}
	return 0;
}
