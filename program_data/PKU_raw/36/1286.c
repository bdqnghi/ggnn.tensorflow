int main()
{
	char a[100],b[100];
	int i,j,m,n,k=0,c[100]={0};
	memset(a,'0',sizeof(char));
	memset(b,'0',sizeof(char));
    scanf("%s",a);
	scanf("%s",b);
    m=strlen(a);
	n=strlen(b);
	if(m!=n)
		printf("NO\n");
	else
	{ for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(c[j]==0)
			{
				if(a[i]==b[j])
				{
					c[j]=1;
					k++;
					break;
				}
			}
			else continue;
	if(k==n)printf("YES\n");
	else printf("NO\n");}
    return 0;


}
