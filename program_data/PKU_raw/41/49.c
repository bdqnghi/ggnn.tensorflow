int main()
{
    int A,B,C,D,E,word[6];//A,B,C,D,E???????word??? 
    for(A=1;A<6;A++)
    {
                    for(B=1;B<6;B++)
                    {
                                    if (B==A) continue;//??????????? 
                                    for(C=1;C<6;C++)
                                    {
                                                    if ((C==A)||(C==B)) continue;
                                                    for(D=1;D<6;D++)
                                                    {
                                                                    if ((D==A)||(D==B)||(D==C)) continue;
                                                                    E=15-A-B-C-D;
                                                                    word[A]=(E==1);
                                                                    word[B]=(B==2);
                                                                    word[C]=(A==5);
                                                                    word[D]=(C!=1);
                                                                    word[E]=(D==1);
                                                                    word[0]=((E!=2)&&(E!=3));//?????E??2 ?3? 
                                                                    if (word[0]==1&&word[1]==1&&word[2]==1&&word[3]==0&&word[4]==0&&word[5]==0)//???? 
                                                                    cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
                                                    }
                                    }
                    }
    }
    return 0;
}