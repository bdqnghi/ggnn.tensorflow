int main()
{
    int A,B,C;     //?A,B,C???? 
    int As,Bs,Cs;  //As,Bs,Cs???????? 
    char word[4];
    
    
    
    for (A=1;A<=3;A++)   //????????? 
      for(B=1;B<=3;B++)
        for(C=1;C<=3;C++)
        {
          As=(B>A)+(C==A);
          Bs=(A>B)+(A>C);
          Cs=(C>B)+(B>A);
          
    if(!(A<=B&&As<=Bs||A<=C&&As<=Cs
       ||B<=A&&Bs<=As||B<=C&&Bs<=Cs
       ||C<=A&&Cs<=As||C<=B&&Cs<=Bs))   //?????? 
          {
          word[A]='A';
          word[B]='B';
          word[C]='C';
          cout<<word[1]<<word[2]<<word[3];} //?????? 
          } 
          
return 0;
} 



