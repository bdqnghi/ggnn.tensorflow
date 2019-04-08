/*
 * xunhuanyidong.cpp
 *
 *  Created on: 2010-12-8
 *      Author: Administrator
 */
void move(int*x,int n,int m){
	 int *tmp=NULL,k,j;
	 tmp=x+n;
	 for(k=0;k<m;k++){
		 *(tmp+k)=*(x+n-m+k);
	 }
	 for(j=n-m-1;j>=0;j--){
	 	    *(x+j+m)=*(x+j);
	 }
	 for(j=0;j<m;j++){
	     *(x+j)=*(tmp+j);
	 }
}
int main(){
	int m,n;
	cin>>n>>m;
	int num[n],i;
	for(i=0;i<n;i++)  cin>>num[i];
	int *p;
	p=&num[0];
	move(p,n,m);
	for(i=0;i<n-1;i++)  cout<<num[i]<<" ";
	cout<<num[n-1]<<endl;
	return 0;
}

