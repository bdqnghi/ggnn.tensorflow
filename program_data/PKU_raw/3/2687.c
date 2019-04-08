/*
 * qujianl.cpp
 *
 *  Created on: 2013-1-17
 *      Author: lenovo
 */


int main(){
	int a[100000]={0},n,k,x,i;
	int ifind=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x>k)
			continue;
		if(a[x]==1){
			ifind=1;
			break;
		}
		a[k-x]=1;
	}
	if(ifind)
		printf("yes");
	else
		printf("no");
	return 0;
}
