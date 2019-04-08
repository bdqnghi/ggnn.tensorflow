int a,b,c,d,e;
int f1(char q)
{
    if(q=='a'){if(e==1)return(1); else return 0;}
    if(q=='b'){if(b==2)return(1); else return 0;}
    if(q=='c'){if(a==5)return(1); else return 0;}
    if(q=='d'){if(c!=1)return(1); else return 0;}
    if(q=='e'){if(d==1)return(1); else return 0;}

}
main()
{
    int i,j,t1,t2,t;
    for(a=2;a<=5;a++)//5???????
    {
        for(b=1;b<=5;b++)
        {
            if(a!=b)
            for(c=1;c<=5;c++)
            {
                if(c!=a&&c!=b)
                for(d=1;d<=5;d++)
                {
                    if(d!=a&&d!=b&&d!=c)
                    for(e=1;e<=5;e++)
                    {
                        if(e!=a&&e!=b&&e!=c&&e!=d&&e!=2&&e!=3)
                        {
                            t=f1('a');
                            if(f1('a')+f1('b')+f1('c')+f1('d')+f1('e')==2)//??????
                            {
                                t1=((a==1&&f1('a')==1)||(b==1&&f1('b')==1)||(c==1&&f1('c')==1)||(d==1&&f1('d')==1)||(e==1&&f1('e')==1));//????????
                                t2=((a==2&&f1('a')==1)||(b==2&&f1('b')==1)||(c==2&&f1('c')==1)||(d==2&&f1('d')==1)||(e==2&&f1('e')==1));
                                if(t1==1&&t2==1)
                                printf("%d %d %d %d %d",a,b,c,d,e);
                            }
                        }
                    }
                }

            }
        }
    }

}

