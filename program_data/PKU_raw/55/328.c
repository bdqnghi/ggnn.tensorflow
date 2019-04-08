int main()
{
long a,b,c=0,k,i;
char an[100],*p,bn[100]="";
scanf("%d %s %d",&a,an,&b);
for(p=an;*p!='\0';p++)
{
if((*p>='a')&&(*p<='z'))
  c=c*a+*p-87;
if((*p>='A')&&(*p<='Z'))
  c=c*a+*p-55;
if((*p>='0')&&(*p<='9'))
  c=c*a+*p-48;
}
for(i=0;c>=b;i++)
{
k=c%b;
c=c/b;
if((k>=0)&&(k<9)) bn[i]=k+48;
else
bn[i]=k+55;
}
if((c>=0)&&(c<9)) bn[i]=c+48;
else
bn[i]=c+55;
for(;i>=0;i--)
printf("%c",bn[i]);
return 0;
}