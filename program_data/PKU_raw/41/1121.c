 
int main()
{int A,B,C,D,E,n,p=0;
for(A=3;A<=5&&(p==0);A++)
   {
    for(B=1;B<=5&&(p==0);B++)
       { if(A==B)continue;
       for(C=1;C<=5&&(p==0);C++)
          {if(B==C||A==C)continue;
           for(D=1;D<=5&&(p==0);D++)
             {if(C==D||A==D||B==D)continue;
               for(E=4;E<=5&&(p==0);E++)//E????1?2?3
                    { if(D==E||E==A||E==C||E==B)continue;
                    n=(B==2)+(A==5)+(C!=1)+(D==1);//A??????
                      if(E==4&&D!=1&&n==2&&B==2) {p=1;E--;A--;B--;C--;D--;}
                      if(E==5&&n==2&&D!=1) {
                            if(B==2&&C==1) {p=1;E--;A--;B--;C--;D--;}
                            
                         
                            }
                            }}}}}
                   if(p)  cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E;                     
}