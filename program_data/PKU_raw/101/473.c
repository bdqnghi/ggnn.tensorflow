int main(){
 int A,B,C;
 int a,b,c;
 for(A=1;A<=3;A++)
  for(B=1;B<4;B++)
   for(C=1;C<4;C++){
     a=((B>A)+(C==A));
     b=((A>B)+(A>C));
     c=((C>B)+(B>A));
     if(((A>B&&a<b)||(A==B&&a==b)||(A<B&&a>b))
       +((A>C&&a<c)||(A==C&&a==c)||(A<C&&a>c))
       +((B<C&&b>c)||(B>C&&b<c)||(B==C&&b==c))==3){
      if(A==1)
        {if(B==2) cout<<"ABC"<<endl;
        else cout<<"ACB"<<endl;}
      if(A==2) {
  if (B==1) cout<<"BAC"<<endl;
   else cout<<"CAB"<<endl;}
      if(A==3){if (B==1) cout<<"BCA"<<endl;
               else cout<<"BAC"<<endl;}

  }
}
return 0;
}
 