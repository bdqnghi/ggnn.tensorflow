int main()
{
   int A,B,C,x,y,z;
   for(A=0;A<=2;A++)
	 for(B=0;B<=2;B++)
		for(C=0;C<=2;C++)
		{x=(A<B)+(A==C);
	     y=(A>B)+(A>C);
	     z=(C>B)+(B>A);
	     if((x>y&&y>z)&&(A<B&&B<C))
	    	cout<<"A"<<"B"<<"C"<<endl;
	     if((x>z&&z>y)&&(A<C&&C<B))
	    	cout<<"A"<<"C"<<"B"<<endl;
	     if((y>x&&x>z)&&(B<A&&A<C))
		    cout<<"B"<<"A"<<"C"<<endl;
	     if((y>z&&z>x)&&(B<C&&C<A))
	    	cout<<"B"<<"C"<<"A"<<endl;
	     if((z>x&&x>y)&&(C<A&&A<B))
	    	cout<<"C"<<"A"<<"B"<<endl;
	     if((z>y&&y>x)&&(C<B&&B<A))
	        cout<<"C"<<"B"<<"A"<<endl;
	     }
   return 0;;
}