int main(int argc, char *argv[])
{
    char ch[1000];
    int a[50]={0};
    gets(ch);
    int m;
    m=strlen(ch);
    int i,j=0;
    for(i=0;i<=m-1;i++)
    {if(ch[i]==' '||ch[i]=='\n')
    j++;
    else 
    a[j]++;}
    int max=0,min=100,q,p;
    for(i=0;i<=j;i++)
    {if(max<a[i])
    {max=a[i];
    q=i;}
    if(min>a[i])
    {min=a[i];
    p=i;}
}
if(q==0)
{for(i=0;ch[i]!=' ';i++)
printf("%c",ch[i]);printf("\n");}
else
{int num=0;

for(i=0;i<=m-1;i++)
{ if(ch[i]==' ')
  num++;
  else if(num==q)
  printf("%c",ch[i]);
}
  printf("\n");
  
  
    
    

}
if(p==0)
{for(i=0;ch[i]!=' ';i++)
printf("%c",ch[i]);
printf("\n");}
else 
{int mum=0;
for(i=0;i<=m-1;i++)
{if(ch[i]==' ')
 mum++;
else if(mum==p)
printf("%c",ch[i]);
if(mum==p+1)
  {printf("\n");
  break;}
}}

    
    
    
    
    
    
    
  

  return 0;
}
