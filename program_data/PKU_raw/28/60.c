void main()
{
char a[500][60];
int i,j,k,n=0,m,q[500];
while(scanf("%s",a[n])!=EOF)n++;
for(i=0;i<n;i++)
q[i]=strlen(a[i]);
for(i=0;i<n;i++)
i==0?printf("%d",q[i]):printf(",%d",q[i]);
}