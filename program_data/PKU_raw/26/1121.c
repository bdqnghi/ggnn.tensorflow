main()
{
char a[200];

char b[200];
gets(a);
int i=0;
int n=0;
int m=0;
int t=0;
for(i=0;i<200;i++)
    b[i]='\0';

for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
  n=n+1;
if(a[i]!=' ')
   n=0;
if(n>=2)
{
        
        //m=m+1; 
//printf("%d\n",m);

continue;
}
else
{b[t]=a[i];
t++;}
}
for(i=0;b[i]!='\0';i++)
   printf("%c",b[i]);
   
}
