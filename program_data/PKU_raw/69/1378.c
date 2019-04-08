main()
{
char *p;
int a,b,c,i,k=0;
static char x[252];
static char y[252];
static char z[252];
gets(x);
gets(y);
a=strlen(x);
b=strlen(y); 
for(i=a-1;i>=0;i--)
   x[i+251-a]=x[i];
for(i=250-a;i>=0;i--)
   x[i]='0';
for(i=b-1;i>=0;i--)
   y[i+251-b]=y[i];
for(i=250-b;i>=0;i--)
   y[i]='0';  
for(i=250;i>=0;i--)
  { 
      c=x[i]+y[i]-'0'-'0'+k;
      if(c<=9) 
     {z[i]=c+'0';k=0;}
     if(c>9)  
     {z[i]=c%10+'0';k=1;}
  }
{for(i=0;i<=250;i++)
  { if(z[i]!='0') {p=&z[i];break;}}
if(i==251)
  printf("0");
else
printf("%s",p);}
}
