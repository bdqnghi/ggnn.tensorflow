int main()
{ 
    char s[1000];
    int l,i,num=1;
    scanf("%s",s);
    l=strlen(s);
     if((s[l-1]-s[l-2]==0)||(s[l-1]-s[l])==('a'-'A')||(s[l-1]-s[l-2])==('A'-'a'))
      for(i=0;i<l;i++)
        {
          if((s[i+1]-s[i]==0)||(s[i+1]-s[i])==('a'-'A')||(s[i+1]-s[i])==('A'-'a'))
            {
              num++;
            }       
          else
            { if(s[i]-'a'>=0)
              printf("(%c,%d)",s[i]-32,num);
              else
              printf("(%c,%d)",s[i],num);
              num=1;      
            }         
        }
     else
      {for(i=0;i<l-1;i++)
        {
          if((s[i+1]-s[i]==0)||(s[i+1]-s[i])==('a'-'A')||(s[i+1]-s[i])==('A'-'a'))
            {
              num++;
            }       
          else
            { if(s[i]-'a'>=0)
              printf("(%c,%d)",s[i]-32,num);
              else
              printf("(%c,%d)",s[i],num);
              num=1;      
            }         
        } 
      if(s[l-1]-'a'>=0)
              printf("(%c,1)",s[l-1]-32);
              else
              printf("(%c,1)",s[l-1]);
      } 
      getchar();
      getchar();
}
