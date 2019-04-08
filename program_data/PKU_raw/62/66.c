int main()
{
char a[100]={0},b[100][100]={{0}};
int i,n,k,j;
gets(a);
n=strlen(a)-1;
b[0][0]=a[0];
for(i=0,j=0,k=1;i<=n;i++,k++)
{
if(a[i]==32&&a[i+1]!=32){j++;k=0;}
if(a[i+1]!=32)b[j][k]=a[i+1];
}
for(i=0;i<=j;i++){for(k=0;k<=strlen(b[i])-1;k++){putchar(b[i][k]);}if(i!=j)putchar(32);}
}