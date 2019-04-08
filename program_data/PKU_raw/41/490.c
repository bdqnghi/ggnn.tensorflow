int main()
{
    int A,B,C,D,E;
    for(int i=1;i<=5;i++)
    {
        A=i;          
        for(int j=1;j<=5;j++)
        {
            B=j;
            if(B==A)
            continue;    
            for(int k=1;k<=5;k++)
            {
                C=k;
                if(C==A||C==B)
                continue;    
                for(int l=1;l<=5;l++)
                {
                    D=l;
                    if(D==A||D==B||D==C)
                    continue;
                    for(int m=1;m<=5;m++)
                    {
                        E=m;
                        if(E==A||E==B||E==C||E==D||E==2||E==3)
                        continue;
                        if((A==1||A==2)&&E!=1)
                        continue;
                        if((B==1||B==2)&&B!=2)
                        continue;
                        if((C==1||C==2)&&A!=5)
                        continue;
                        if((D==1||D==2)&&C==1)
                        continue;
                        if((E==1||E==2)&&D!=1)
                        continue;
                        if(C!=1)
                        continue;
                        printf("%d %d %d %d %d\n",A,B,C,D,E);
                        break;  
                    }
                }
            }       
        }   
    }
    return 0;
}