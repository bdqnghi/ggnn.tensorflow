int main()
{
    int  o,i,A,B,C,D,E,a[6];
    for(A=1;A<=5;A++)
    for(B=1;B<=5;B++)
    for(C=1;C<=5;C++)
    for(D=1;D<=5;D++)
    for(E=1;E<=5;E++)
    {if(A==B||A==C||A==D||A==E||B==C||B==D||B==E||C==D||C==E||D==E||E==2||E==3)
        continue;
    a[1]=a[2]=a[3]=a[4]=a[5]=a[6]=0;
    if(E==1) a[A] = 1;
    if(B==2) a[B] = 1;
    if(A==5) a[C] = 1;
    if(C!=1) a[D] = 1;
    if(D==1) a[E] = 1;
    if(a[1]==1&&a[2]==1&&a[3]==0&&a[4]==0&&a[5]==0)
        cout << A <<' '<<B << ' '<<C <<' '<<D<<' '<<E;
    } 
    
    
    cin >> o;
    return 0;
}
