int main()
{
    int i,n;
    char l[1000];
    scanf("%s",l);
    n=1;
    for(i=0;l[i]!='\0';i++)
   {
  if(l[i]==l[i+1]||l[i]==l[i+1]-'a'+'A'||l[i]==l[i+1]-'A'+'a')
    {if(l[i]>='A'&&l[i]<='Z')
       {if(l[i]==l[i+1]||l[i]==l[i+1]-'a'+'A')
       n=n+1;}
    else
       { if(l[i]==l[i+1]||l[i]==l[i+1]-'A'+'a')
       n=n+1;}
    }
    else
      { if(l[i]>='A'&&l[i]<='Z')
       { printf("(%c,%d)",l[i],n);
        n=1;}
       if(l[i]>='a'&&l[i]<='z')
       {l[i]=l[i]-'a'+'A';
       printf("(%c,%d)",l[i],n);
        n=1;}}
   }
}
