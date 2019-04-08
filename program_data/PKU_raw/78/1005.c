int main()
{
 int a,b,c,d,m,n,i;
 for(a=10;a<=50;a=a+10)
	 for(b=10;b<=50;b=b+10)
		 if(a==b)continue;
         else for(c=10;c<=50;c=c+10)
			 if(a==c||c==b)
				 continue;
			 else for(d=10;d<=50;d=d+10)
				 if(a==d||b==d||c==d)
					 continue;
				 else if(a+b==c+d&&a+d>b+c&&a+c<b)
					 for(i=50;i>=10;i=i-10)
					 {
						 if(a==i)
							 cout<<"z "<<a<<endl;
						 if(b==i)
							 cout<<"q "<<b<<endl;
						 if(c==i)
							 cout<<"s "<<c<<endl;
						 if(d==i)
							 cout<<"l "<<d<<endl;
					 }
}
