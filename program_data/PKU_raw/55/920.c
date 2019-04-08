main()
{
int a,b,i,j,k,l,m,n;
long s=0;
int d[32]; 
char c[32],e[32];
scanf("%d %s %d",&a,c,&b);
if(c[0]=='0')
printf("%d\n",0);
else
{ 
n=strlen(c);
for(i=0;i<=n-1;i++)
{
if(c[i]<'A')
d[i]=c[i]-'0';
else if(c[i]>='A'&&c[i]<'a')
d[i]=c[i]-'A'+10;
else
d[i]=c[i]-'a'+10;
}                  
for(i=0;i<=n-1;i++)
{ 
k=d[i]; 
for(j=1;j<=n-1-i;j++)
k=k*a;
s=s+k;                   
}
for(i=0;s>0;i++)
{
l=s%b;
if(l<10)
e[i]=l+'0';
else
e[i]=l-10+'A';
s=s/b;         
}
for(m=i-1;m>0;m--) 
printf("%c",e[m]);
printf("%c\n",e[0]);
}
getchar();
getchar();  
getchar();        
}