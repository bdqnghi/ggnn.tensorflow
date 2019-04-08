int main()
{
    int x[6]={0},A,B,C,D,E,a,b,c,d,e,Qt,count,Cf;
    for(A=1;A<=5;A++)
        for(B=1;B<=5;B++)
        { if(B==A) continue;
            for(C=1;C<=5;C++)
            {if(C==A||C==B) continue;
                for(D=1;D<=5;D++)
                {if(D==A||D==B||D==C) continue;
                    for(E=1;E<=5;E++)
                    {if(E==A||E==B||E==C||E==D) continue;
                     Qt=(E!=2&&E!=3);
                     x[A]=(E==1);
                     x[B]=(B==2);
                     x[C]=(A==5);
                     x[D]=(C!=1);
                     x[E]=(D==1);
                     if(x[1]==1&&Qt==1&&x[2]==1&&x[3]==0&&x[4]==0&&x[5]==0)
                    {cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E;}
                    }
                    } 
                    }
                    }
        return 0;
        
    }
