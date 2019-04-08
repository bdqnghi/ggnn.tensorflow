int main()
{
  char s[100],w[100];
  int i,k=0;
  scanf("%s%s",s,w);
  for(i=0;w[i];i++)
    if(w[i]==s[k])
    {
      k++;
      if(k==strlen(s)-1)
        break;
    }
    else
      k=0;
  printf("%d\n",i-strlen(s)+2);
}
