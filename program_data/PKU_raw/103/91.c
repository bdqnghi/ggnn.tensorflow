main()
{
  char s[1001],word[1001];
  int i,len,count,num[1001];
  scanf("%s",s); 
  len=strlen(s);
  for (i=0;i<1001;i++) num[i]=1;
  count=1;
  for (i=0;i<=len-1;i++) 
  {
    if ((s[i]>='a') && (s[i]<='z')) s[i]=s[i]-'a'+'A';
  }
  for (i=0;i<=len-1;i++) 
  {
    word[count]=s[i];
    if (s[i]==s[i+1]) num[count]++; 
    else count++; 
  }                   
  for (i=1;i<=count-1;i++)
  {
    printf("(%c,%d)",word[i],num[i]);
  }  
}
