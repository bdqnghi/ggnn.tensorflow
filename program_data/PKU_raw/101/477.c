int main()
{
 int A,B,C;
 int a,b,c;
 for(A=1;A<4;A++)
  for(B=1;B<4;B++)
   for(C=1;C<4;C++)
   {
     a=((B>A)+(C==A));
     b=((A>B)+(A>C));
     c=((C>B)+(B>A));
        if(((A>B&&a<b)||(A==B&&a==b)||(A<B&&a>b))
            +((A>C&&a<c)||(A==C&&a==c)||(A<C&&a>c))
             +((B<C&&b>c)||(B>C&&b<c)||(B==C&&b==c))==3)
		{
			if (A<B)
			{
				if (A>C)
				{
					cout<<"C"<<"A"<<"B";
				}
				else 
				{
					if (B<C)
					{
						cout<<"A"<<"B"<<"C";
					}
					else
					{
						cout<<"A"<<"C"<<"B";
					}
				}
			}
			else 
			{
				if (B>C)
				{
					cout<<"C"<<"B"<<"A";
				}
			    else 
				{
					if (A<C)
					{
						cout<<"B"<<"A"<<"C";
					}
					else
					{
						cout<<"B"<<"C"<<"A";
					}
				}
			}
        
		}
   }
 return 0;
}