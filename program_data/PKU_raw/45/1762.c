int main()
{
    char s[50],w[50];
    scanf("%s%s",s,w);
    int same,i,k;
    for(i=0;w[i]!='\0';i++)
    { int result=1;
      for(k=0;s[k]!='\0';k++)
      {  
         if(w[i+k]!=s[k])
         same=0;
         else   
         same=1;
         result=result*same;
      }
      if(result==1)
      {printf("%d",i);
      break;}
    }
 
return 0;
}
