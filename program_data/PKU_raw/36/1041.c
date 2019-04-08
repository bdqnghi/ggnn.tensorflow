int main()
{
int i,j,n,m,k=0,l=0;
char s1[10], s2[10];
scanf("%s %s",s1,s2);

n=strlen(s1);m=strlen(s2);

for(i=0;i<n;i++){k=k+s1[i];}
for(j=0;j<m;j++){l=l+s2[j];}

if(k==l)printf("YES");
else printf("NO");
}