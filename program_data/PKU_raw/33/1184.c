int main()
{int n;
cin>>n;


int i=0,cnt=0;
for(i=0;i<n;i++)
scanf("%s",s[i]);

for(int j=0;j<n;j++)
{
for(i=0;s[j][i]!='\0';i++) 
{
if(s[j][i]=='A')
printf("T");
else if(s[j][i]=='T')
printf("A");
else if(s[j][i]=='C')
printf("G");
else if(s[j][i]=='G')
printf("C");
} 
printf("\n");
}

    return 0;
}
