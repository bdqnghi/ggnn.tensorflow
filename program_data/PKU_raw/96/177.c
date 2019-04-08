int main()
{
   char beichushu[200];
   gets(beichushu);
   int i=0,a,b,x=0,l;
   a=(beichushu[0]-'0')/13;
   b=(beichushu[0]-'0')%13;
   l=strlen(beichushu);
   if(l==1)
     printf("%d\n%d",(beichushu[0]-'0')/13,(beichushu[0]-'0')%13);
   if(l==2)
     printf("%d\n%d",((beichushu[0]-'0')*10+beichushu[1]-'0')/13,((beichushu[0]-'0')*10+beichushu[1]-'0')%13);
   if(l>2)
    {
       for(i=0;beichushu[i+1]!='\0';i++)
      {
        b=(b%13)*10+beichushu[i+1]-'0';
        x=x+1;
        a=b/13;
        if(a==0&&x==1)
          continue;
        else
          printf("%d",a);                                
      } 
        printf("\n%d",b%13); 
    }
   getchar();
   getchar();  
}
