/*
 * erweishuzuzuoshangyouxiabianli.cpp
 *
 *  Created on: 2012-12-13
 *      Author: Justin
 */

int main(){
	int a[100][100],*p;
	int raw,col;
	cin>>raw>>col;
	for(p=a[0];p<a[0]+raw*col;p++){
		cin>>*p;
	}
	if(col!=1){
	cout<<a[0][0]<<endl;
	for(p=a[0]+1;p<a[0]+col-1;p++){
		int *q;
		q=p;
		do{
			cout<<*q<<endl;
			q+=col-1;
		}while((q+1-a[0])%col!=0 && q<a[0]+raw*col);
	}

	for(p=a[0]+col-1;p<a[0]+col*raw;p+=col){
			int *q;
			q=p;
			do{
				cout<<*q<<endl;
				q+=col-1;
			}while((q+1-a[0])%col!=0 && q<a[0]+raw*col);
		}}
	if(col==1){
		for(p=a[0];p<a[0]+raw*col;p++){
				cout<<*p<<endl;
			}
	}
	return 0;
}