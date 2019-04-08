int main()
{
	int A=1,B=1,C=1,a,b,c;
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
			{
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
				if(((A<B)+(a>b)!=1)+((A<C)+(a>c)!=1)+((B<C)+(b>c)!=1)+((A>B)+(a<b)!=1)+((A>C)+(a<c)!=1)+((B>C)+(b<c)!=1)+((A==B)+(a==b)!=1)+((A==C)+(a==c)!=1)+((B==C)+(b==c)!=1)==9)
				{
		        if((A>B)&&(B>C)) cout<<"CBA"<<endl;
		        if((A>C)&&(C>B)) cout<<"BCA"<<endl;
		        if((B>A)&&(A>C)) cout<<"CAB"<<endl;
		        if((B>C)&&(C>A)) cout<<"ACB"<<endl;
		        if((C>A)&&(A>B)) cout<<"BAC"<<endl;
		        if((C>B)&&(B>A)) cout<<"ABC"<<endl;
		        }
			}
	return 0;
}