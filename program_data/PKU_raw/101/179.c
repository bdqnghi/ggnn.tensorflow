int main()
{
    int a,b,c;              //a,b,c??A,B,C?????????1,???3?
    int word[4],rank[4];
    
    for (a=1;a<=3;a++)
      for (b=1;b<=3;b++)
       {if (b==a) continue;          //??a,b?? 
         for (c=1;c<=3;c++)
          {if ((c==a)||(c==b)) continue;  //??a,b,c?? 
           word[1]=(b>a)+(c==a);          //?????,word[1]??A??? 
           word[2]=(a>b)+(a>c);
           word[3]=(c>b)+(b>a);
           
           rank[4-a]=1;                  //????????????????????=4-??? 
           rank[4-b]=2;
           rank[4-c]=3;
           if ((word[rank[1]]==0)&&(word[rank[2]]==1)&&(word[rank[3]]==2))   //????????????????? 
             {cout<<(char)(rank[3]+64)<<(char)(rank[2]+64)<<(char)(rank[1]+64)<<endl;  //?? 
              }
           }
         }
     return 0;
}
