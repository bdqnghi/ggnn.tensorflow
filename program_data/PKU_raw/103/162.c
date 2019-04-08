int main()
{
  char str[1001];
  int i,j=0;
  scanf("%s",str);
  for (i=0;str[i]!='\0';i++)
  {
    if ((str[i]==str[i+1])||(str[i]==str[i+1]-'a'+'A')||(str[i]==str[i+1]+'a'-'A'))
      j++;
    else
      {if (str[i]>='Z') printf("(%c,%d)",(str[i]-'a'+'A'),j+1);
         else  printf("(%c,%d)",str[i],j+1);
       j=0;
      }
  }
  return 0;
}
