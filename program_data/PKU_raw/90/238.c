/*
 * fangpingguo.cpp
 *
 *  Created on: 2010-12-1
 *      Author: 378073652
 */

int s=0;
int  number(int x ,int y,int z,int num){
	int i;

	if(x==0&&y>=num) {s=s+1;}
	if(x==0&&y<num) return 0;
	for(i=z;i<=x;i++)
	{
		if(x-i>=0) number(x-i,y,i,num+1);
	}
	
    return s;
}



int main(){
	int t,m,n,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cin>>m>>n;
		cout<<number(m,n,1,0)<<endl;

s=0;


	}
}
