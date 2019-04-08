int min(int x,int y);
int main()
{
char s[501]={0};
int d[501][501]={0},e[501]={0};
gets(s);
int l,i,j,t;
l=strlen(s);
for (i=1;i<(l-1);i=i+1) //????
{
for (j=1;j<=min(i,l-i-1);j=j+1)
{
if (s[i-j]==s[i+j])
{
d[2*j+1][e[2*j+1]]=i;
e[2*j+1]=e[2*j+1]+1;
}
else
break;
}
}
for (i=0;i<(l-1);i=i+1) //???????????
{
for (j=0;j<=min(i,l-i-1);j=j+1)
{
if (s[i-j]==s[i+1+j])
{
d[2*j+2][e[2*j+2]]=i;
e[2*j+2]=e[2*j+2]+1;
}
else
break;
}
}
for(i=2;i<=l;i=i+1)
{
for (j=0;j<e[i];j=j+1)
{
if (i % 2==0)
{
for(t=(d[i][j]-i/2+1);t<=(d[i][j]+i/2); t=t+1)
printf("%c",s[t]);
printf("\n");
}
else
{
for(t=(d[i][j]-i/2);t<=(d[i][j]+i/2);t=t+1)
printf("%c",s[t]);
printf("\n");
}
}
}
return 0;
}
int min(int x,int y)
{
if (x>y) return(y);
else return(x);
}
