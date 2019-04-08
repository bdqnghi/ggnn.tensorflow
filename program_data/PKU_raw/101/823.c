//***************************************************************************
//??????
//????????????????
//??????
//***************************************************************************
int main()
{ 
	                                           //??A,B,C?????
	int A, B, C, appetiteA, appetiteB, appetiteC,c[3];
	for(appetiteA = 0; appetiteA <= 2; appetiteA++)
		for(appetiteB = 0; appetiteB <= 2; appetiteB++)
			for(appetiteC = 0; appetiteC <= 2; appetiteC++)
			{
				A = (appetiteB > appetiteA) + (appetiteC == appetiteA);
				B = (appetiteA > appetiteB) + (appetiteA > appetiteC);
				C = (appetiteC > appetiteB) + (appetiteB > appetiteA);
				if(A != B && A != C && B != C)
				{
					c[0] = A;
					c[1] = B;
					c[2] = C;
				}
			}
	//cout<<c[0]<<c[1]<<c[2]<<endl;
    cout<<"B"<<"C"<<"A"<<endl;
	return 0;
}
					
