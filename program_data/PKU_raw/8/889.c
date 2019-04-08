/*
 * model.cpp
 *
 *  Created on: 2012-11-25
 *      Author: ???
 */
int a[100],b[100],x=0,y=0;  //??????
void in(){
	cin>>x>>y;    //??
	for (int i=0;i<x;i++)cin>>a[i];
	for (int i=0;i<y;i++)cin>>b[i];
}
void sortnum(){   //??
	sort(a,a+x);
	sort(b,b+y);
}
void cat(){
	for (int i=x;i<100;i++)	a[i]=b[i-x];   //??
}
void out(){
	cout<<a[0];
	for (int i=1;i<x+y;i++)cout<<" "<<a[i];  //??
}
int main()   //???
{
	in();
	sortnum();
	cat();
	out();
	return 0;
}