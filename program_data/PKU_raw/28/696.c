int main()
{
   int n=0,i,k=0,p;
   char s[800],word[400][900];
   gets(s);
    for (i = 0; s[i]!=0; i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '\0';
            strcpy(word[n], (s + k));
            n++;
           k=i+1;
       
        }
       }
    strcpy(word[n],(s+k));
    n=n+1;
    for(i=0;i<n-1;i++)
    {
      p=strlen(word[i]);
      if(p==0)
          continue;
      else
      printf("%d,",p);
    }
	p=strlen(word[n-1]);
      printf("%d",p);
      return 0;

}