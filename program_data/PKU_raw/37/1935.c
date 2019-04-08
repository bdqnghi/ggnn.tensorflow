int min(int x,int y)
{
    if(x>=y) return y;
    else return x;
}
int main()
{
     int t,i;
     scanf("%d",&t);
     for(i=0;i<t;i++)
     {
         int b[100000]={0},a,j,k;
         char s[100000];
         scanf("%s",s);
         a=strlen(s);
         for(j=0;j<a;j++)
         {
             for(k=0;k<a;k++)
             {
                 if(s[j]==s[k]) b[j]++;            
             }            
         }
         for(j=0;j<a;j++)
         {
             if(b[j]==1)
             {
                  printf("%c\n",s[j]);
                  break;
             }        
         }      
         for(j=1;j<a;j++)  b[0]=min(b[0],b[j]);
         if(b[0]>1) printf("no\n");             
     }
       
}

