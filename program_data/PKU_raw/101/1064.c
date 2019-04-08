int main()
{
    int A,B,C;
    for(A=0;A<=2;A++)
    for(B=0;B<=2;B++)
    for(C=0;C<=2;C++)
    if(((B>A)+(A==C)==(2-A))&&((A>B)+(A>C)==(2-B))&&((C>B)+(B>A)==(2-C))&&(A!=B)&&(A!=C)&&(B!=C))
    {if(A>B>C)
    cout<<"C"<<"B"<<"A"<<endl;
    if(A>C>B)
    cout<<"B"<<"C"<<"A"<<endl;
    if(B>A>C)
    cout<<"C"<<"A"<<"B"<<endl;
    if(B>C>A)
    cout<<"A"<<"C"<<"B"<<endl;
    if(C>B>A)
    cout<<"A"<<"B"<<"C"<<endl;
    if(C>A>B)
    cout<<"B"<<"A"<<"C"<<endl;
    }
   
    return 0;}
    
     