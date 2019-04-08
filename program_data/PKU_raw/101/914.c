/*
 * bifanliang.cpp
 *
 *  Created on: 2012-10-26
 *      Author: 99006
 */

int main (){
	int a,b,c;
	int ia(int,int,int);
	int ib(int,int,int);
	int ic(int,int,int);
	void out(int,int,int);
	for (a=0;a<=2;a++)
		for (b=0;b<=2;b++){
			if (a==b) continue;
			c=3-a-b;
			if (a+ia(a,b,c)==2&&b+ib(a,b,c)==2&&c+ic(a,b,c)==2)
				out(a,b,c);

		}
	return 0;
}
int ia (int a,int b,int c){
	int i=0;
	if (b>a) i++;
	if (c==a) i++;
	return i;
}
int ib (int a,int b,int c){
	int i=0;
	if (a>b) i++;
	if (a>c) i++;
	return i;
}
int ic (int a,int b,int c){
	int i=0;
	if (c>b) i++;
	if (b>a) i++;
	return i;
}
void out (int a,int b,int c){
	for (int i=0;i<=2;i++){
		if (a==i) cout<<"A";
		else if (b==i) cout<<"B";
			 else cout<<"C";
	}
}