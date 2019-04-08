int main()
{
	int a1,a2,b1,b2,c1,c2;
 int A,B,C;
 int d1,d2,d3;

 for(A=0;A<3;++A)
  for(B=0;B<3;++B)
   for(C=0;C<3;++C)
   {
    if((A!=B)&&(B!=C)&&(A!=C))
    {
     a1=(B>A);a2=(C==A);
     b1=(A>B);b2=(A>C);
     c1=(C>B);c2=(B>A);

     d1=a1+a2;
     d2=b1+b2;
     d3=c1+c2;
     if((d1!=d2)&&(d2!=d3)&&(d1!=d3))
     {
      if((d1==1)&&(d2!=B)&&(d3!=C))
      {
       if(d2>d3)
       {
        cout<<"BAC"<<endl;
       }
       else
       {
        cout<<"CAB"<<endl;
       }
      }
      if((d2==1)&&(d1!=A)&&(d3!=C))
      {
       if(d1>d3)
       {
        cout<<"ABC"<<endl;
       }
       else
       {
        cout<<"CBA"<<endl;
       }
      }
      if((d3==1)&&(d1!=A)&&(d2!=B))
      {
       if(d2>d1)
       {
        cout<<"BCA"<<endl;
       }
       else
       {
        cout<<"ACB"<<endl;
       }
      }
     }
    }
   }
return 0;
}

 
