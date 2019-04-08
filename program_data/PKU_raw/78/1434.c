int main(int argc)
{ int i,a,b,c,d;
   for(a=10;a<=50;a=a+10)
   {for(b=10;b<=50;b=b+10)
   {for(c=10;c<=50;c=c+10)
   {for (d=10;d<=50;d=d+10)
   {if (a!=b&&b!=c&&c!=d&&a!=c&&a!=d&&b!=d&&(a+b)==(c+d)&&(a+d)>(b+c)&&(a+c)<b)
   {cout<<"l"<<" "<<d<<endl;
   cout<<"q"<<" "<<b<<endl;
   cout<<"z"<<" "<<a<<endl;   
	cout<<"s"<<" "<<c<<endl;
	}}}}}
	return 0;
}