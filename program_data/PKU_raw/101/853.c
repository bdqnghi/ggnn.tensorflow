int main()
{
	int a=0,b=0,c=0;
	int a1,a2,b1,b2,c1,c2;
	int A,B,C;

	  for(a=0;a<=2;a++)
		 for(b=0;b<=2;b++)
			for(c=0;c<=2;c++)	//??a,b,c?????2,1,0???????
			{
				  if(b>a) a1=1;else a1=0;
			      if(c==a)a2=1;else a2=0;
			      if(a>b) b1=1;else b1=0;
			      if(a>c) b2=1;else b2=0;
			      if(c>b) c1=1;else c1=0;
			      if(b>a) c2=1;else c2=0;//?????????????????1????0
			      A=a1+a2,B=b1+b2,C=c1+c2;//?????????????ABC??
				   if(a>b && b>c && A<B && B<C)cout<<"CBA";
				   if(a>c && c>b && A<C && C<B)cout<<"BCA";
				   if(b>a && a>c && B<A && A<C)cout<<"CAB";
				   if(b>c && c>a && B<C && C<A)cout<<"ACB";
				   if(c>a && a>b && C<A && A<B)cout<<"BAC";
				   if(c>b && b>a && C<B && B<A)cout<<"ABC";//????a,b,c???C,B,A???????????????
				   
				  
	       }

			
			return 0;
}