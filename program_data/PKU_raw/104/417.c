/*
 * 1000062703.cpp
 *
 *  Created on: 2010-11-12
 *      Author: Administrator
 */
int cha(int a,int b){
	if(a>b)
		return(cha(a/2,b));
	if(a<b)
		return(cha(a,b/2));
	if(a==b)
		return a;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<cha(x,y)<<endl;
	return 0;
}
