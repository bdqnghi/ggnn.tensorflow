int main()
{long int d,n,i,j,l1,l2,a1[10000],a2[10000];
char str1[10000],qq,str2[10000];
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		gets(str1);
	gets(str2);
	scanf("%c",&qq);
    l1=strlen(str1);
l2=strlen(str2);
for(j=0;j<=l1-1;j++)a1[j]=str1[j]-48;

for(j=0;j<=l2-1;j++)a2[j]=str2[j]-48;

j=1;d=0;
while(l2>=j)
{
	a1[l1-j]=a1[l1-j]-a2[l2-j]-d;
    if (a1[l1-j]<0){a1[l1-j]=a1[l1-j]+10;d=1;}else d=0;
j=j+1;
}
if (l1-j>=0)a1[l1-j]=a1[l1-j]-d;
for (j=0;j<=l1-1;j++)printf("%d",a1[j]);
printf("\n");
	}
}



	
