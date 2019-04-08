main()
{
int n,i,k,t;
int d[100];
char c[100][10],e[10];
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%s %d",c[i-1],&d[i-1]);
for(i=1;i<=n-1;i++)
{
for(k=n;k>=i+1;k--)
{
if(d[k-1]>d[k-2]&&d[k-1]>=60)
{
t=d[k-2];
d[k-2]=d[k-1];
d[k-1]=t;
strcpy(e,c[k-2]);
strcpy(c[k-2],c[k-1]);
strcpy(c[k-1],e);
}                     
}
}
for(i=1;i<=n;i++)
printf("%s\n",c[i-1]);                                                   
getchar();
getchar();  
}
