int main()
{  int same,i,j,k;
    char str[256],sub[256],repl[256];
   scanf("%s%s%s",str,sub,repl);
   for(i=0;i<strlen(str);i++)
   { same=1;
     for(j=0;j<strlen(sub);j++)
     {if(str[i+j]!=sub[j])
      same=0;
     }
     if(same==0)
     printf("%c",str[i]);
     if(same==1)
     { printf("%s",repl);
       for(k=i+strlen(sub);str[k]!=0;k++)
       {printf("%c",str[k]);}
       break;
     }
   }
return 0;
}
