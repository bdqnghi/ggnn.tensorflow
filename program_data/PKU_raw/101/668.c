int main()
{
 int A,B,C;
 char b[3];
 int a[3]={0};
 for(A=0;A<3;A++)
  {
    for(B=0;B<3;B++)
   {
     if(A!=B)
    {      
        C=3-A-B;
        a[0]=(((A>B)+(C==A))==A);
        a[1]=(((A<B)+(A<C))==B);
        a[2]=(((C<B)+(B<A))==C);
        if((a[0]+a[1]+a[2])==3)
        {
         b[A]='A';
         b[B]='B';
         b[C]='C';
         cout<<b[2]<<b[1]<<b[0];
		 break;
        }
     }
     else 
     continue;
   }
 }
 cin.get();cin.get();cin.get();
return 0;
}

