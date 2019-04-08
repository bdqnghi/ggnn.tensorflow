int main()
{
    int a,b,c,d,e;
    int A,B,C,D,E;
    int as,bs,cs,ds,es;
    for(a=1;a<=5;a++)
    {
       
       for(b=1;b<=5;b++)
       {
         if(a==b)continue;
         for(c=1;c<=5;c++)
         {
           if(a==c||b==c)continue;
           for(d=1;d<=5;d++)
           { 
              if(a==d||b==d||c==d)continue;
              e=15-a-b-c-d;
              as=(e==1);
              bs=(b==2);
              cs=(a==5);
              ds=(c!=1);
              es=(d==1);
              if(e!=2&&e!=3)
              {if((a==1&&b==2)||(a==2&&b==1)){as=1;bs=1;}
              if((a==1&&c==2)||(a==2&&c==1)){as=1;cs=1;}              
              if((a==1&&d==2)||(a==2&&d==1)){as=1;ds=1; } 
             // if((a==1&&e==2)||(a==2&&e==1))as=1;es=1;bs+cs+ds=0;  
             // if((b==1&&e==2)||(b==2&&e==1))bs=1;es=1;as+cs+ds=0; 
              if((b==1&&c==2)||(b==2&&c==1)){bs=1;cs=1;} 
              if((b==1&&d==2)||(b==2&&d==1)){bs=1;ds=1;} 
              if((c==1&&d==2)||(c==2&&d==1)){cs=1;ds=1;}
             // if((c==1&&e==2)||(c==2&&e==1))cs=1;es=1;as+bs+ds=0;
             // if((d==1&&e==2)||(d==2&&e==1))ds=1;es=1;as+bs+cs=0;
             if(as+bs+cs+ds+es==2)
             
             
              {A=a;
              B=d;
              C=c;
              D=b;
              E=e;}}
              }
           }
         }
       }
       cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
       int ss;cin>>ss;
       return 0;
}
