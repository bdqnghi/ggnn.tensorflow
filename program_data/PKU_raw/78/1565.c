int main()
{
    int z,q,s,l,sum;
    for(z=1;z<=3;z++)
    for(q=1;q<=5;q++)
    for(s=1;s<=3;s++)
    {
               l=z+q-s;
                sum=(z+l>s+q)+(z+s<q);
                if(sum==2&&l<=5)
                {
                          if(q>l)
                          {
                                 cout<<'q'<<' '<<10*q<<endl;
                                 cout<<'l'<<' '<<10*l<<endl;
                          }
                          else
                          {      
                                 cout<<'l'<<' '<<10*l<<endl;
                                 cout<<'q'<<' '<<10*q<<endl;                                 
                          }
                          if(z>s)
                          {
                                 cout<<'z'<<' '<<10*z<<endl;
                                 cout<<'s'<<' '<<10*s<<endl;
                          }
                          else
                          {
                                 cout<<'s'<<' '<<10*s<<endl;
                                 cout<<'z'<<' '<<10*z<<endl;
                          }
                break;
                }
    }
    
    return 0;
}