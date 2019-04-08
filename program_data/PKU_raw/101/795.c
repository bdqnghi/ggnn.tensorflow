int main()
{
int a=0,b=0,c=0,a1,b1,c1;//a b c???A B C???   a1 b1 c1 ?ABC????????? 
     for(a=1;a<=3;a++)
     {
                      for(b=1;b<=3;b++)
                      {
                                       for(c=1;c<=3;c++)
                                       {
                                            a1=(b>a)+(c==a);
                                            b1=(a>b)+(a>c);
                                            c1=(c>b)+(b>a);
                                            if((a+a1==3)&&(b+b1==3)&&(c+c1==3))
                                             {
                                                   if(a==1)
                                                   cout<<"A"; 
                                                   if(b==1)
                                                   cout<<"B";
                                                   if(c==1)
                                                   cout<<"C"; 
                                                   if(a==2)
                                                   cout<<"A"; 
                                                   if(b==2)
                                                   cout<<"B";
                                                   if(c==2)
                                                   cout<<"C";
                                                   if(a==3)
                                                   cout<<"A"; 
                                                   if(b==3)
                                                   cout<<"B";
                                                   if(c==3)
                                                   cout<<"C"; 
                                                                            
                                             }           
                                       }                 
                      }                 
     }
return 0;
}