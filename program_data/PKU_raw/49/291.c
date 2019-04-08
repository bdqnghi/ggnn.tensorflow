int main()
{
  char s[500];
  gets(s);
  int i,j,k,l=0,m=0;
  for(i=2;i<strlen(s);i++) 
  for(j=i/2;j<=(strlen(s)-i/2);j++)
  {  l=0;
     if(i%2==0)
     {
        for(k=0;k<i/2;k++)
        if(s[j-k-1]!=s[j+k])
        { l=1;break;}
        else continue;
      }      
       if(i%2==1)
      {   if(j==strlen(s)-i/2)
          break;
          for(k=1;k<(i/2+1);k++)
          if(s[j-k]!=s[j+k]) 
             {l=1;break;}
       }
      if(l==0)
      {for(m=0;m<i-1;m++)
       printf("%c",s[j-i/2+m]);
       printf("%c\n",s[j+i/2-1]);
       } 
     }
 return 0;
} 