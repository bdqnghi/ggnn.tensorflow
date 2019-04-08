//A 1 B 2 C 3 D 4 E 5
int main()
{
    int A,B,C,D,E; 
    for(A=1;A<=5;A++){
    for(B=1;B<=5;B++){
    if(B==A)  continue;
    for(C=1;C<=5;C++){
    if(C==A || C==B)  continue;
    for(D=1;D<=5;D++){
    if(D==A || D==B || D==C)  continue;
    for(E=1;E<=5;E++){
    if(E==A || E==B || E==C || E==D)  continue;
    if(E==2 || E==3)  continue;
    int a,b,c,d,e;
    a=(A==1)+(A==2)+(E==1);  
    b=(B==1)+(B==2)+(B==2);  
    c=(C==1)+(C==2)+(A==5);  
    d=(D==1)+(D==2)+(C!=1);  
    e=(E==1)+(E==2)+(D==1);
    if(a%2==0 && b%2==0 && c%2==0 && d%2==0 && e%2==0)
    {
    cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E;
    return 0;
    }
    }
    }
    }
    }
    }
    return 0;
}