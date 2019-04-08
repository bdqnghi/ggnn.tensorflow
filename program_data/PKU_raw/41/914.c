int main()
{
    int A,B,C,D,E;
  for(int a=1;a<6;a++)
  {
   for(int b=1;b<6;b++)
   {
    if(a==b)
    continue;
    else
    {
     for(int c=1;c<6;c++)
     {
       if((c==a)||(c==b))
       continue;
       else
       {
        for(int d=1;d<6;d++)
        {
         if((d==a)||(d==b)||(d==c))
         continue;
         else
         {
           for(int e=1;e<6;e++)
           {
             if((e==a)||(e==b)||(e==c)||(e==d))
             continue;
             else
             {
                 A=(e==1);
                 B=(b==2);
                 C=(a==5);
                 D=(c!=1);
                 E=(d==1);
                 if((A+B+C+D+E==2)&&(e!=2)&&(e!=3))
                 {
                    if((A&&(a==1||a==2))+(B&&(b==1||b==2))+ (C&&(c==1||c==2))+ (D&&(d==1||d==2))+ (E&&(e==1||e==2))==2)
                    {
                                                            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
                    } 
                 }                                     
             } 
             }
             }
             }
             }
             }
             }
             }
             }
             return 0;
             }                                                  
                                                            
