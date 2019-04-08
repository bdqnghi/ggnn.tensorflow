int main()
{
   int n,o,g;
   double a,b,c,d,x1,x2;
   cin>>n;
   for(o=1;o<=n;o++)
   {
	   cin>>a>>b>>c;
	   if(a<0)
	   {
		   a=0-a;
		   b=0-b;
		   c=0-c;
	   }
	 d=b*b-4*a*c;
	 if(d>0)
		 g=2;
	 else if(d<0)
		 {
		 g=0;
		 d=0-d;
		 }
	 else
		 g=1;
	 if(g==1)
	 {
		 x1=-b/(2*a);
		 cout<<"x1=x2=";
		 printf("%.5f",x1);
		 cout<<endl;
	 }
	 else if(g==2)
	 {
		 x1=(sqrt(d)-b)/(2*a);
		 x2=(-sqrt(d)-b)/(2*a);
		 cout<<"x1=";
		 printf("%.5f",x1);
		 cout<<";x2=";
		 printf("%.5f",x2);
		 cout<<endl;
	 }
	 else
	 {
		 x1=sqrt(d)/(2*a);
		 cout<<"x1=";
		 printf("%.5f",-b/(2*a));
		 cout<<"+";
		 printf("%.5f",x1);
		 cout<<"i;x2=";
		 		 printf("%.5f",-b/(2*a));
		 		 cout<<"-";
		 		 printf("%.5f",x1);
		 		 cout<<"i"<<endl;
	 }
   }
   return 0;
}
