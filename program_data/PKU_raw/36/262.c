void main()
{
char a[300],b[300];
int j1,j2,i,k,j;
scanf("%s %s",a,b);
j1=strlen(a);
j2=strlen(b);
if (j1!=j2) printf("NO");
else
{j=j1;
for (i=0;i<j;i++)
for (k=0;k<j;k++)
if (a[i]==b[k])
{
j1=i;j2=k;
a[j1]=b[j2]=' ';
break;
}
k=0;
for (i=0;i<j;i++)
if (a[i]!=' ') k++;
if (k==0) printf("YES");
else printf("NO");
}
}