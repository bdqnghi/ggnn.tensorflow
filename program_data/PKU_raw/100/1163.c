int main()
{  char str[300];
   scanf("%s",str);
   int len;
   len=strlen(str);
   int count=0,i,j;
   for(i=0;i<len;i++)
  {  if(str[i]>='a'&& str[i]<='z')
     count++;
   }  
     if(count==0)
   printf("No");
     else for(j=97;j<=122;j++)
  {  int n=0; 
     for(i=0;i<len;i++)
     { if(str[i]==j)
        n++;
      }
     char a;
     a=(char)j;
     if (n!=0)
     printf("%c=%d\n", a,n);

   }

    return 0;
}
