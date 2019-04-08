void main()
{
char s[50][50];
int k[50];
int a,i,t,j,l[50],q=0;
while (scanf("%s",s[q])!=EOF) q++;
for(i=0;i<=q;i++) 
{
k[i]=strlen(s[i]);
l[i]=k[i];
}
for(i=0;i<=q;i++)
for(j=i+1;j<=q;j++)
{
if(l[i]<l[j])
{
t=l[i];
l[i]=l[j];
l[j]=t;
}
}
if(l[q]==0)l[q]=l[q-1];
for(i=0;i<=q;i++)
if(k[i]==l[0]){printf("%s\n",s[i]);break;}
for(i=0;i<=q;i++)
if(k[i]==l[q]){printf("%s",s[i]);break;}
}
