/*
 * assignment.cpp
 *
 *  Created on: 2010-11-23
 *      Author: ??
 *      ???????
 */


int main(){
	int x,y;
	int i=0,j=0;
	cin>>x>>y;
	while(1){
		if(pow(2,i)>x)
			break;
		i++;
	}
	while(1){
		if(pow(2,j)>y)
			break;
		j++;
	}
	while(i>j){
		x=x/2;
		i--;
	}
	while(i<j){
		y=y/2;
		j--;
	}
	while(1){
		if(x==y)break;
		else{
			x=x/2;
			y=y/2;
		}
	}
	cout<<x;
	return 0;
}
