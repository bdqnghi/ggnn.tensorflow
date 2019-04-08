int main(void)
{
    char s1[MAX], s2[MAX];
    gets(s1);
    gets(s2);
    int i=0;
    while(s1[i]!='\0')
    s1[i]=toupper(s1[i]),i++;
      i=0;
      while(s2[i]!='\0')
    s2[i]=toupper(s2[i]),i++;
    if(strcmp(s1,s2)>0)
    printf(">");
    else if(strcmp(s1,s2)<0)
    printf("<");
    else
    printf("=");
    return 0;
}
