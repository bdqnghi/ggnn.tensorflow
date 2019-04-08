int main()
{int n,i,j,b;
char a[81];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{gets(a);
 if((a[0]=='_')||((a[0]<='z')&&(a[0]>='a'))||((a[0]<='Z')&&(a[0]>='A'))) 
 b=1;
else b=0;
j=1;
while ((b!=0)&&(a[j]!='\0'))
{ if((a[j]=='_')||(a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]<=57&&a[j]>=48)) b=1; 
else b=0;
j++;
}
printf("%d\n",b);
}
return 0;
} 
