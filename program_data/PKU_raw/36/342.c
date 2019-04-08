int pd(char str[10]);
int main()
{
	int n,i,j,m,return1,return2;
	char str1[10]={'\0'},str2[10]={'\0'};
	for(i=0;i<10;i++)
	{
		scanf("%c",&str1[i]);
		if(str1[i]==' ') 
		{
			str1[i]='\0';
			break;
		}
	
	}
	scanf("%s",str2);
	n=strlen(str1);
	m=strlen(str2);
	if(m!=n) printf("NO");
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(str1[i]==str2[j])
				{
					str1[i]='\0';
					str2[j]='\0';
					j=n;

				}
			}

		}
		return1=pd(str1);
		return2=pd(str2);
		if (return1==0&&return2==0) printf("YES");
		else printf("NO");

	}

	return 0;}

int pd(char str[10])
{
	int i,z=0;
	for(i=0;i<10;i++)
		if(str[i]!='\0')
		{
			z=1;
			break;
		
		}
	
return (z);
}