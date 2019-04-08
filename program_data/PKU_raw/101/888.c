int main()
{
	int A,B,C;            //????
	A=B=C=0;
	A=30;B=20;C=10;
		if(B<A&&C!=A&&A>C&&C>B)	//????????????????
			cout<<"CBA";      //????????????????
    A=30;C=20;B=10;
	if(B<A&&C!=A&&A>B&&A>C&&C>B||B>A)
			cout<<"BCA";
	B=30;A=20;C=10;
		if(A<B&&A<C)
			cout<<"CAB";
   B=30;C=20;A=10;
		if(A<B&&A<C&&B>A&&C==A)
			cout<<"ACB";
	C=30;B=20;A=10;
		if(C<B&&B<A)
			cout<<"ABC";
	C=30;A=20;B=10;
		if(C<B&&B<A)
			cout<<"BAC";
    return 0;                                  
}
