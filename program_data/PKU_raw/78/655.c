/*
 * Homework3.8Weight.cpp
 *
 *  Created on: 2013-10-19
 *      Author: JuiceHe
 */

int main()
{
	int z,q,s,l;
	char f='z',g='q',h='s',i='l',j,k;int a,b,c,d,m,n;

	for(z=10;z<=50;z=z+10)
	for(q=10;q<=50;q=q+10)
	for(s=10;s<=50;s=s+10)
	for(l=10;l<=50;l=l+10)
	 if((z+q==s+l)&&(z+l>s+q)&&(z+s<q)&&(z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l))//????????

	{a=z;b=q;c=s;d=l;//?????????f?g?h?i?????a?b?c?d?????j?k??????m?n?????
	 if(b<a){f='q';g='z';m=a;a=b;b=m;}//??z?q????
	 if(c<b)//?s?????z?q????
	  {if(c<a){j=f;f='s';h=g;g=j;
	          m=a;a=c;c=b;b=m;}
	  else {j=g;g='s';h=j;m=b;b=c;c=m;}}
	 if(d<c)//?l?????z?q?s????
	  {if(d<a){j=f;f='l';k=g;g=j;j=h;h=k;i=j;
		 	   m=a;a=d;n=b;b=m;m=c;c=n;d=m;}
	  else if(d<b){j=g;g='l';i=h;h=j;m=b;b=d;d=c;c=m;}
	  else {j=h;h='l';i=j;m=c;c=d;d=m;}
	  }
	 break;}
		 	 cout<<i<<" "<<d<<endl<<h<<" "<<c<<endl<<g<<" "<<b<<endl<<f<<" "<<a<<endl;//???????????

	return 0;
}
