void main()
{
int j,i,n,f;
char s[301], a[26];
f=0;
for(i=0;i<26;i++) a[i]=0;

for(i=0;i<301;i++)
 {
 scanf("%c",&s[i]);
 if(s[i]=='\n'){n=i;break;}
 }

for(i=0;i<n;i++)
 for(j=0;j<26;j++)
 if(s[i]==97+j){a[j]++;f=1;break;}

if(f)
{for(i=0;i<26;i++)
if(a[i]!=0) printf("%c=%d\n",97+i,a[i]);}
else printf("No\n");
}
