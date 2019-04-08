main()
{
      int f(int x);
      char str[1001];
      int i,m;
      char c;
      m=1;
      scanf("%s",str);
      for(i=0;(c=str[i])!='\0';i++)
        str[i]=f(str[i]);
      for(i=0;(c=str[i])!='\0';i++)
        if(str[i+1]==str[i])
        m=m+1;
        else {
             printf("(%c,%d)",str[i],m);
             m=1;
             }
}
int f(int x)
{
    if(x>='a'&&x<='z') x=x-'a'+'A';
    return(x);
}