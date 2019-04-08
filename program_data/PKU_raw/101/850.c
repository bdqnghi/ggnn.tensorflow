int main ()
{   int a;
    int b;
    int c;
    for(a=1;a<=3;a++)                                                                                        //???? 
       {  for(b=1;b<=3;b++)
              {   for(c=1;c<=3;c++)
                      {   if((a+(b>a)+(c==a))==(b+(a>b)+(a>c))&&(b+(a>b)+(a>c))==(c+(c>b)+(b>a)))            //???????? 
                             {  int num[3]={a,b,c};                                                          //????? 
                                int mid;
                                int j;
                                int i;
                                for(j=1;j<=2;j++)
                                   {  for(i=0;i<=1;i++)
                                         { if(num[i]>num[i+1])
                                             {  mid=num[i];
                                                num[i]=num[i+1];
                                                num[i+1]=mid;
                                             }
                                         }
                                   }
                                if(num[0]==a)  cout<<"A";                                                 //???????                 // 
                                if(num[0]==b)  cout<<"B";
                                if(num[0]==c)  cout<<"C";
                                if(num[1]==a)  cout<<"A";
                                if(num[1]==b)  cout<<"B";
                                if(num[1]==c)  cout<<"C";
                                if(num[2]==a)  cout<<"A";
                                if(num[2]==b)  cout<<"B";
                                if(num[2]==c)  cout<<"C";
                             }
                      }
              }
       }
 
    return 0;
}