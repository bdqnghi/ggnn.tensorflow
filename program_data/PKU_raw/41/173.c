
int main()
{
    int A,B,C,D,E;
    int As,Bs,Cs,Ds,Es;
    for(A=1;A<=5;A++)
    {
        for(B=1;B<=5;B++)
        {
            if(A==B)
            continue;
            for(C=1;C<=5;C++)
            {
                if(A==C||B==C)
                continue;
                for(E=1;E<=5;E++)
                {
                    
                    if(A==E||B==E||C==E||E==2||E==3)
                    continue;
                    else
                    D=15-A-B-C-E;
                 As=(E==1);
                 Bs=(B==2);
                 Cs=(A==5);
                 Ds=(C!=1);
                 Es=(D==1);
                 if(A+B==3&&As==1&&Bs==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(A+C==3&&As==1&&Cs==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(A+D==3&&As==1&&Ds==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(A+E==3&&As==1&&Es==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(B+C==3&&Bs==1&&Cs==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(B+D==3&&Bs==1&&Ds==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(B+E==3&&Bs==1&&Es==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(C+D==3&&Cs==1&&Ds==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(C+E==3&&Cs==1&&Es==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
                 if(D+E==3&&Ds==1&&Es==1)
                 cout <<A<<" "<<B<<" "<<C<<" "<<D<<" "<< E << endl;
            break;
                }
     
         }
   
    }

}  

return 0;
}
