int main()
{char a[100][100];
int i=0;
while(scanf("%s",a[i])!=EOF)
{i++;
}
i--;
cout<<a[i];
i--;

for(;i>=0;i--)
cout<<" "<<a[i];
return 0;
}