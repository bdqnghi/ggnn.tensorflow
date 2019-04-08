void main()
{
char a[300]="\0",c;
int n,i,j,k=0;
gets(a);
n=strlen(a);
for(c='a';c<='z';c++)
 {j=0;
 for(i=0;i<n;i++)if(a[i]==c)j++;
 if(j>0)
  {printf("%c=%d\n",c,j);k++;}
 }
if(k==0)printf("No\n");
}