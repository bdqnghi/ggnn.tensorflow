
main()
{
     int a;
     cin>>a;
     int b;int c;int d;int e;int f;int k=0;
	 if(10000<=a)
     {b=a/10000;
     c=(a-10000*b)/1000;
     d=(a-10000*b-1000*c)/100;
     e=(a-10000*b-1000*c-100*d)/10;
     f=a-10000*b-1000*c-100*d-10*e;
     k=10000*f+1000*e+100*d+10*c+b;
     cout<<k;}
	 else if(1000<=a)
	 {c=(a)/1000;
     d=(a-1000*c)/100;
     e=(a-1000*c-100*d)/10;
     f=a-1000*c-100*d-10*e;
     k=1000*f+100*e+10*d+c;
	 cout<<k;
	 }
	 else if(100<=a)
	 {
       d=(a)/100;
     e=(a-100*d)/10;
     f=a-100*d-10*e;
     k=100*f+10*e+d;
	 cout<<k;
	 }
	 else if(10<=a)
	 {
		  e=(a)/10;
     f=10*e;
     k=10*f+e;
	 cout<<k;
	 }
	 else cout<<k;
}