int main()
{
char a[10000],b[10000],tem;
scanf("%s%s",a,b);
for (int i=strlen(a)-1;i>=0;i--)
    for (int j=0;j<i;j++)
        if (a[j]>a[j+1])
        {
        tem=a[j];
        a[j]=a[j+1];
        a[j+1]=tem;
        }
for (int i=strlen(b)-1;i>=0;i--)
    for (int j=0;j<i;j++)
        if (b[j]>b[j+1])
        {
        tem=b[j];
        b[j]=b[j+1];
        b[j+1]=tem;
        }
if (strcmp(a,b)==0) printf("YES");
else printf("NO");
}
