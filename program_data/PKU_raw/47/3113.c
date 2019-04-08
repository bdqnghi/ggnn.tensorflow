/*
 * nb.cpp
 *
 *  Created on: 2013-12-5
 *      Author: de
 */
int main(){
int n,i,t;
cin>>n;
int a[n];
for(i=0;i<n;i++)cin>>a[i];
int *p=NULL,*q=NULL;
p=a;
for(p=a,q=a+n-1;p<q;p++,q--)
{
t=*p;
*p=*q;
*q=t;
}
p=a;
cout<<*p;
for(p=a+1;p<a+n;p++)
cout<<" "<<*p;
return 0;
}
