int main()
{
    char name[100],a[100],b[100];
    int k=0,j=0,n,i,p;
    char word[100][100];
    gets(name);
    gets(a);
    gets(b);
    n=strlen(name);
    for(i=0;i<n;i++)
    {
        if(name[i]!=' ')
        {
             word[k][j]=name[i];
             j++;
        }
        else
        {
              word[k][j]='\0';
              k++;
              j=0;
        }
    }
	word[k][j] = '\0';
	k++;

    for(p=0;p<k;p++)
    {
         if(strcmp(word[p],a)==0)
         {
              strcpy(word[p],b);
         }
    }
    for(p=0;p<k-1;p++)
    {
          printf("%s ",word[p]);
    }
    printf("%s",word[k-1]);
    return 0;
}