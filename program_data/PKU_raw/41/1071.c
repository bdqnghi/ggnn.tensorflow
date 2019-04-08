int main()
{
    int a,b,c,d,e;
    int a1,b1,c1,d1,e1;
    int a2,b2,c2,d2,e2;
    for(e=1;e<6;e++)
    {
     if(e==2||e==3) continue;
        for(a=1;a<6;a++)
        {
         for(b=1;b<6;b++)
         {
           for(c=1;c<6;c++)
           {
            for(d=1;d<6;d++)
            {
               a1=(e==1),b1=(b==2),c1=(a==5),d1=(c!=1),e1=(d==1);
               if((a1+b1+c1+d1+e1)==2)  
             {  
                   if(a==1||a==2&&a1==1)a2=1; 
                 else if(a!=1&&a!=2&&a1==0)a2=1;
                 else a2=0;
                 if(b==1||b==2&&b1==1){b2=1;}  
                 else if(b!=1&&b!=2&&b1==0)b2=1;
                 else b2=0;
                 if(c==1||c==2&&c1==1){c2=1;}  
                 else if(c!=1&&c!=2&&c1==0)c2=1;
                 else c2=0;
                 if(d==1||d==2&&d1==1){d2=1;}  
                 else if(d!=1&&d!=2&&d1==0)d2=1;
                 else d2=0;
                 if(e==1||e==2&&e1==1){e2=1;}  
                 else if(e!=1&&e!=2&&e1==0)e2=1;
                 else e2=0;
               if((a2+b2+c2+d2+e2)==5) {
               break;}
               }   
                else continue;  
            }
           }
         }
        }
    }
    a=5,b=2,c=1,d=3,e=4;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
    return 0;
}
