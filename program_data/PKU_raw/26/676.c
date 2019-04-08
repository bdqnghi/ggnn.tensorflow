int main()
{
 char word[100],answord[100];
  gets(word);
  int len=strlen(word);
  int i=0,anslen=0;
  answord[0]=word[0];
  anslen++;
  for(i=1;i<len;i++)
  {
   if(word[i]==' '&&word[i-1]==' ')
    continue;
   else 
    answord[anslen++]=word[i];
  }
  answord[anslen]='\0';
  puts(answord);
  return 0; 
}
