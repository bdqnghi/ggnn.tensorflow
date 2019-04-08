int main()
{
    char s[256],sub[256],rep[256];
    int t,i,j,k;
    gets(s);
    gets(sub);
    gets(rep);
    for (i=0;s[i]!='\0';i++)
    {
        t=0;
        if (s[i]==sub[0])
        {
           for (j=i,k=0;sub[k]!='\0';j++,k++)
           {
               if (s[j]!=sub[k]) 
               {
                  t=1;break;
                  }
                  }
           if (t==0)
           {
             for (j=i;rep[j-i]!='\0';j++) s[j]=rep[j-i];
             break;
             }
             }
             }
    printf("%s",s);
}

