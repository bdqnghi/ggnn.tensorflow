int f(char c)
{   if ((c>'Z')&&(c<='z'))
    c=c-'a'+'A';
    return c;
}
main()
{ int j=1;
  char str[1050];
  scanf("%s",str);
  for (int i=0;i<=strlen(str)-1;i++)
  {str[i]=f(str[i]);
  }
  for(int i=0;i<=strlen(str)-1;i++)
  {if(str[i]==str[i+1])
   {j=j+1;
   }
   else 
   {printf("(%c,%d)",str[i],j);
    j=1;
   }
  }
}