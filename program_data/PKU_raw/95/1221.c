int main()
{
    char s1[80],s2[80];
    gets(s1);
    gets(s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i;
    int jh=1; 
    for(i=0;i<=len1;i++)
    {
      if(s1[i]==s2[i]){continue;} 
      else
      { 
      if(s1[i]>='A'&&s1[i]<='Z'&&s2[i]>='a'&&s2[i]<='z') 
       {
        if(s1[i]-'A'+'a'<s2[i]) {printf("<");jh=0;break;}
        else if(s1[i]-'A'+'a'==s2[i]) continue;
        else {printf(">");jh=0;break;}
       }
      else if(s2[i]>='A'&&s2[i]<='Z'&&s1[i]>='a'&&s1[i]<='z')
      {
        if(s2[i]-'A'+'a'<s1[i]) {printf(">");jh=0;break;}
        else if(s2[i]-'A'+'a'==s1[i]) continue;
        else {printf("<");jh=0;break;}
       }
      else 
      {
        if(s2[i]<s1[i]) {printf(">");jh=0;break;}
        else if(s2[i]==s1[i]) continue;
        else {printf("<");jh=0;break;}
       }
      } 
    }
    if(jh==1) printf("=\n");
}