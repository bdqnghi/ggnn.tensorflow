int main()
{int i,j;
char a[500];
gets(a);
for(i=0;i<strlen(a);i++)
if(a[i]>='0'&&a[i]<='9')
cout<<a[i];
else
{if(!(a[i]>='0'&&a[i]<='9')&&a[i+1]>='0'&&a[i+1]<='9')
cout<<endl;
}
return 0;
}