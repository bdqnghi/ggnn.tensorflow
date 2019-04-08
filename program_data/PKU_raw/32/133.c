void main()
{int n,d,e,i,k,carry=0;
char a[101]={0},b[101]={0},c[101]={0};
char *p1=a,*p2=b;
void move(char *p,int m);
scanf("%d",&n);
for(i=0;i<=n-1;i++)
{gets(a);
gets(a);
gets(b);
d=strlen(a);
e=strlen(b);
move(p1,d);
move(p2,e);
for(k=99-d+1;k<=99-e;k++)
b[k]='0';
for(k=99;k>=99-d+1;k--)
{
 b[k]=b[k]-'0';
  a[k]=a[k]-'0';
if(carry+b[k]>a[k])
    {c[k]=a[k]-b[k]+10-carry;
     carry=1;}
  else
    {c[k]=a[k]-b[k]-carry;
      carry=0;}    
    c[k]=c[k]+'0';
 }
for(k=0;k<=99;k++)
  {if(c[k]!=0)
    printf("%c",c[k]);}
printf("\n");
 for(k=0;k<=100;k++)
  c[k]=0; 
carry=0;  
}}
 void move(char *p,int m)
{ int h;
  *(p+100)=0;
  for(h=99;h>=99-m+1;h--)
  *(p+h)=*(p+h-100+m);
  for(h=0;h<=99-m;h++)
  *(p+h)=0;
}
