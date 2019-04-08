struct weight
{
    char name;
    int weight;
};
int main()
{
    int a,b,c,d,i,j,t1;
    char t2;
    struct weight f[4];
    for(a=1;a<=5;a++)
        for(b=1;b<=5;b++)
            for(c=1;c<=5;c++)
                for(d=1;d<=5;d++)
                {
                    if((a!=b) && (b!=c) && (c!=d) && (d!=a))
                        if((a+b)==(c+d))
                            if((a+d)>(c+b))
                                if((a+c)<b)
                                {
                                    f[0].name='z';
                                    f[0].weight=a;
                                    f[1].name='q';
                                    f[1].weight=b;
                                    f[2].name='s';
                                    f[2].weight=c;
                                    f[3].name='l';
                                    f[3].weight=d;
                                    for(i=0;i<4;i++)
                                        for(j=i+1;j<4;j++)
                                            if(f[j].weight>f[i].weight)
                                            {
                                                t1=f[j].weight;
                                                t2=f[j].name;
                                                f[j].weight=f[i].weight;
                                                f[j].name=f[i].name;
                                                f[i].weight=t1;
                                                f[i].name=t2;
                                            }
                                    for(i=0;i<4;i++)
                                        printf("%c %d\n",f[i].name,10*f[i].weight);
                                }
                }
    return 0;
}