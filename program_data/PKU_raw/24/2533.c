int main()
{int i,j,b[200],max=0,min=100,I,J,n;
char a[200][200];

 scanf("%d",&n);
for (i=0;i<n;i++)
{
 scanf("%s",a[i]);
}
	
for (i=0;i<n;i++)
{
b[i]=strlen(a[i]);
}


for (i=0;i<n;i++)
{
if (max<b[i])
{max=b[i];I=i;}
if(min>b[i])
{min=b[i];J=i;}
}

printf("%s\n",a[I]);
printf("%s",a[J]);
return 0;
}
