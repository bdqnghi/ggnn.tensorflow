int main(int argc, char* argv[])
{
	char str[300],b[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int n,i,j,k,a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			if(str[i]==b[j])
			{
				a[j]++;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			printf("%c=%d\n",b[i],a[i]);
		}
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
            k=1;
			break;
		}
		else
			k=0;
	}
    if(k==0)
		printf("No");

	return 0;
}