

int main()
{char a[256],b[256];
int i,j,n,k,l;
scanf("%d\n",&n);

for(i=0;i<n;i++)
{ 
scanf("%s",&a);
l=strlen(a);
for(j=0;j<l;j++)
{if (a[j]=='A')
b[j]='T';
else if (a[j]=='T')
b[j]='A';
else if (a[j]=='C')
b[j]='G';
else if (a[j]=='G')
b[j]='C';
else
break;
}


for(k=0;k<l;k++)
{printf("%c",b[k]);
}printf("\n");
}

return 0;
}
