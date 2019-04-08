int main()
{
    int A,B,C,shumu[4],i;
    char pai[4];
    for(i=1;i<=3;i++)shumu[i]=0;
    for(A=1;A<=3;A++) 
    {
                      for(B=1;B<=3;B++)
                      {
                                       if(A==B)continue;
                                       C=6-A-B;
                                       shumu[1]=(B>A)+(A==C);//A??????? 
                                       shumu[2]=(A>B)+(A>C);//B??????? 
                                       shumu[3]=(C>B)+(B>A);//C??????? 
                                                        if((shumu[1]+A)==(shumu[2]+B) && (shumu[2]+B)==(shumu[3]+C))//????????????????????????? 
                                                        {
                                                                                      pai[A]='A';
                                                                                      pai[B]='B';
                                                                                      pai[C]='C';
                                                        }
                      }
    }
    for(i=1;i<=3;i++)cout<<pai[i];
    cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();
    return 0;
} 