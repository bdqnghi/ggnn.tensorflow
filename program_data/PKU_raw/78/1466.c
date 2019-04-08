int main()
{
    int z,q,s,l,i,Q,S,L,Z;
    for(z=1;z<6;z++)
    for(q=1;q<6;q++)
    for(s=1;s<6;s++)
    for(l=1;l<6;l++)
    {
         if(z+q==s+l&&z+l>s+q&&z+s<q)
         { 
          Z=z;Q=q;L=l;S=s;                                                      
         break;
         }
         }
       for(i=5;i>0;i--)
       {
       if(Z==i)cout<<"z "<<Z*10<<endl;   //??????
       if(S==i)cout<<"s "<<S*10<<endl;
       if(L==i)cout<<"l "<<L*10<<endl;
       if(Q==i)cout<<"q "<<Q*10<<endl;
       }
    return 0;
}   