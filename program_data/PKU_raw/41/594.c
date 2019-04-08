
int main()
{
    int word[6],rank[6];
    for (int a=1; a<6; a++)
        for (int b=1; b<6; b++)
            if (a!=b)
                for (int c=1; c<6; c++)
                    if ((c!=a)&&(c!=b))
                        for (int d=1; d<6; d++)
                            if ((d!=a)&&(d!=b)&&(d!=c))
                            {
                                int e=15-a-b-c-d;
                                if ((e==2)||(e==3)) continue;
                                word[1]=e==1;
                                word[2]=b==2;
                                word[3]=a==5;
                                word[4]=c!=1;
                                word[5]=d==1;
                                rank[a]=1;
                                rank[b]=2;
                                rank[c]=3;
                                rank[d]=4;
                                rank[e]=5;
                                if ((word[rank[1]])&&(word[rank[2]])&&(!word[rank[3]])&&(!word[rank[4]])&&(!word[rank[5]]))
                                cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
                            }


return 0;
}
