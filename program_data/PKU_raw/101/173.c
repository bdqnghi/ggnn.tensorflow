int main()
{
int A=0;    //????3?????
int B=0;
int C=0;
int wordA=0;    //??3????????
int wordB=0;
int wordC=0;
for(A=1;A<=3;A++)             //?A??
   {for (B=1;B<=3;B++)        //?B??
         {for (C=1;C<=3;C++)  //?C??
              { if (A!=B&&A!=C&&B!=C)     //?A?B?C????????
                    { wordA=(B>A)+(C==A);   //????A,B,C????
                      wordB=(A>B)+(A>C);
                      wordC=(C>B)+(B>A);
                        if (A>B&&B>C)              //???6??????????
                              {if ((wordA<wordB)&&(wordB<wordC))
                                   {cout<<'C'<<'B'<<'A'<<endl;}
                               }
                        if (A<B&&B<C)
                              {if ((wordB<wordA)&&(wordC<wordB))
                                  {cout<<'A'<<'B'<<'C'<<endl;}
                              }
                        if (A>C&&C>B)
                              {if ((wordA<wordC)&&(wordC<wordB))
                                   {cout<<'B'<<'C'<<'A'<<endl;}
                               }
                        if (B>A&&A>C)
                              {if ((wordB<wordA)&&(wordA<wordC))
                                   {cout<<'C'<<'A'<<'B'<<endl;}
                               }
                        if (B>C&&C>A)
                             {if ((wordB<wordC)&&(wordC<wordA))
                                   {cout<<'A'<<'C'<<'B'<<endl;}
                              }             
                         if (C>A&&A>B)
                             {if ((wordC<wordA&&wordA<wordB))
                                   {cout<<'B'<<'A'<<'C'<<endl;}
                              }
                  }
              }                                                               
         }
   }
 return 0;         

}