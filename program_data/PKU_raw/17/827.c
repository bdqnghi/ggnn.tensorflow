void output(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
    switch(a[i]) 
  {
        case 1:printf("$");break;
        case 0:printf(" ");break;
        case -1:printf("?");break;
  }
  printf("\n");
}
void trans(char s[],int a[],int n)
{
  int i,p[200],k=-1;
  n=strlen(s); 
  for(i=0;i<n;i++) 
     {
       if((s[i]!='(')&&(s[i]!=')')) a[i]=0;
       else if(s[i]=='(')
                {
                   k++; p[k]=i;
                   a[i]=1;   
                }   
            else
                {
                   if(k>-1) 
                      {
                         a[p[k]]=0;
                         k--;
                         a[i]=0;
                      } 
                   else a[i]=-1;                       
                } 
     }
}
void input()
{
  char s[200];
  int a[200],n;
  while(scanf("%s",s)!=EOF)
  {
     n=strlen(s);
     puts(s);
     trans(s,a,n);
     output(a,n);
  }
}
main()
{
  input();
}