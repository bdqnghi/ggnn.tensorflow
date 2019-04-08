void main()
{char  a[100],b[100],c,d;
int i,j,k;
gets(a);
gets(b);
for(j=0;(c=a[j])!='\0';j++)
{    c=c;}
for(k=0;(d=b[k])!='\0';k++)
{    d=d;}
if(j==k)
{
    for(i=0;i<=j;i=i+1)
    {    c=a[i];
    if(c>='A'&&c<='Z')  c-='A'-'a';    d=b[i];if(d>='A'&&d<='Z')  d-='A'-'a';
      if(c==d)  continue;
      else if(c>d)  {printf(">");  break;}
       else if(c<d)  {printf("<");  break;}}
       if(i>=j)
         printf("=");
}
}
