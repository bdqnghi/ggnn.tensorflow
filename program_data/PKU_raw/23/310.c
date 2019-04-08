
int main()
{
    char a[150];int b[150],word=1,c=0;b[1]=0;
    gets(a);
    int l=strlen(a);
    for (int i=0;i<=l-1;i++)
     {if (a[i]==' '){word++;b[word]=i;}}
     b[word+1]=l;
     for (int i=word;i>=2;i--)
      {
       for (int j=b[i]+1;j<=b[i+1]-1;j++)cout<<a[j];
       cout<<' ';
      }
      for (int i=0;i<=b[2]-1;i++)cout<<a[i];
return 0;
}

