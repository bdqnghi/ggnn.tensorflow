
//**********************
int a=0,b=0,c=0;
int words[4];
char rank[4];
//**********************
int main()
{
    for (int i=0;i<=3;i++)
    {words[i]=0;}
    
    for(a=1;a<=3;a++)
    {  
       for (b=1;b<=3;b++)
           { if(b==a)continue;
             for(c=1;c<=3;c++)
             {if(b==c||a==c)continue;
             words[1]=(b>a)+(c==a);//????
             words[2]=(a>b)+(a>c);
             words[3]=(c>b)+(b>a);
              if (words[1] == words[2]
                     || words[2] == words[3]
                     || words[3] == words[1])//a,b,c??????
                   continue;


             for(int i=1;i<=3;i++)//??
             {
                     if(words[i]==2)
                     rank[1]=i+64;
                     else if(words[i]==1)
                     rank[2]=i+64;
                     else if(words[i]==0)
                     rank[3]=i+64;}}
             }}
             cout<<rank[1]<<rank[2]<<rank[3];
                          return 0;
    }
