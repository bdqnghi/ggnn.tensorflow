int main()
{
    int i,flag,l1,l2;
    char s1[100],s2[100];
    
    gets(s1);
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    
    for(i=0;i<l1;i++)
       if((s1[i]>='A')&&(s1[i]<='Z'))
         s1[i]=s1[i]+32;

    for(i=0;i<l2;i++)
       if((s2[i]>='A')&&(s2[i]<='Z'))
         s2[i]=s2[i]+32;
         
    flag=strcmp(s1,s2);
    if(flag>0)
      printf(">");
    else if(flag<0)
      printf("<");
    else printf("=");
    return 0;
}
