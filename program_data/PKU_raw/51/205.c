int main()
{
int n,x=0,pp,count[550]={0},max=0;
scanf("%d\n",&n);
char a[550],b[550][10]={0},c[10];
c[n]=0;
gets(a);
for (int i=0;i+n<=strlen(a);i++)
    {
    pp=0;
    for (int j=0;j<n;j++)
        {
        c[j]=a[i+j];
        }
    for (int k=0;k<x;k++)
        {
        if (strcmp(c,b[k])==0) {pp=1;count[k]++;break;}
        }
    if (pp==0) {strcpy(b[x],c);x++;}
    }
for (int i=0;i<x;i++)
    {
    if (count[i]>max) max=count[i];
    }
if (max!=0)
{printf("%d\n",max+1);
for (int i=0;i<x;i++)
    {
    if (count[i]==max) printf("%s\n",b[i]);
    }
}
else printf("NO");
}
