
void main()
{
	char a[256],b[256],c[256];
	int len1,len2,len3,i,j,sum=0;
	scanf("%s",&a);
	scanf("%s",&b);
	scanf("%s",&c);
	len1=strlen(a);
	len2=strlen(b);
	len3=strlen(c);
	for(i=0;i<len1;i++)
	{
		if(a[i]==b[0])
		{
				sum=0;
				for(j=0;j<len2;j++)
			{
				if(a[i+j]==b[j])
				{
					sum++;
				}
			}
			if(sum==len2)
			{
				for(j=0;j<len3;j++)
				{
					a[i+j]=c[j];
				}
				break;
			}	
		}
	}
	printf("%s",a);
}