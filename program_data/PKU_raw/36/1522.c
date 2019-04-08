int main(int argc, char* argv[])
{
	char a[100],b[100];
	int i,j,len1,len2,flag=0;
	scanf("%s",a);
	scanf("%s",b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2)printf("NO\n");
	else
	{
		for(i=0;i<len1;i++)
		{
			for(j=0;j<len1;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='\0';
					flag++;
					break;
				}
			}
		}
		if(flag==len1)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}