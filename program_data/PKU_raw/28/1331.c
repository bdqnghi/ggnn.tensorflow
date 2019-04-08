void main()
{char s[10000];
int n,i,sum,j;
gets(s);
n=strlen(s);
j=1;
for(i=0;i<n;i++)
{if(s[i]==' ') j=0;}
if(j) 
{printf("%d",n);}
else
{
for(sum=0,i=0;s[i]!='\0';i++)
 {if(s[i]!=' ')
{sum++;}
else if(s[i]==' '&&sum!=0)
{printf("%d,",sum);
sum=0;}
  }
for(sum=0,i=n-1;;i--)
{
if(s[i]==' '){break;}
else 
sum++;
}
printf("%d",sum);
}
}