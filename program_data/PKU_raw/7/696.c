char s[100],a[100],b[100],c[100],d[100];
int main()
{
	gets(s);
	scanf("%s",a);
	scanf("%s",b);
	int i,p,ch=0;
	int k;
	for(k=0;s[k]!='\0';k++)
	{
		i=0;                       
		for(p=k;a[p-k]!='\0';p++)
		{
			c[i]=s[p];
			i++;
		}
		if(strcmp(a,c)==0)
		{
				ch=1;
				break;
				
		
		}
	}
	if(ch==0)
	{
		printf("%s",s);
	}
	else
	{
		int A;
		
			for(A=0;A<k;A++)
			{
				d[A]=s[A];
			}
				strcat(d,b);
			for(A=k+strlen(a);s[A]!='\0';A++)
			{
				d[A-strlen(a)+strlen(b)]=s[A];
			}
		
	//	printf("%s\n",a);
	//	printf("%s\n",b);
	//	printf("%s\n",c);
		printf("%s\n",d);
	}

	return 0;
}

