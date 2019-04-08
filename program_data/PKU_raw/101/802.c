//*****************************
//*???
//******************************
int main()
{
	int A,B,C;
	int sumA,sumB,sumC;
	sumA=(B>A)+(C==A);
	sumB=(A>B)+(A>C);
	sumC=(C>B)+(B>A);
	if(A>B&&B>C&&sumA<sumB&&sumB<sumC)
		cout<<"CBA"<<endl;
	if(A>C&&C>B&&sumA<sumC&&sumC<sumB)
		cout<<"BCA"<<endl;
	if(B>A&&A>C&&sumB<sumA&&sumA<sumC)
		cout<<"CAB"<<endl;
	if(B>C&&C>A&&sumB<sumC&&sumC<sumA)
		cout<<"ACB"<<endl;
	if(C>A&&A>B&&sumC<sumA&&sumA<sumB)
		cout<<"BAC"<<endl;
	if(C>B&&B>A&&sumC<sumB&&sumB<sumA)
		cout<<"ABC"<<endl;
	return 0;
}