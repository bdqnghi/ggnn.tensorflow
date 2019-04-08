

int main(int argc, char* argv[])
{
	char s[600];
	int n,i,j,l;
	scanf("%d",&n);
	scanf("%s",s);
	l=strlen(s);
	int a[500]={0},max=0;
	int k;
	for(i=0;i<l;i++)
	{
	
		for(j=1+i;j<l;j++)
		{
			
			for(k=0;k<n;k++)
			{
				if(s[i+k]!=s[j+k])
					break;
			}
			if(k==n)
			{
				a[i]++;
				
			}		
		}
		
	}
	
	for(i=0;i<l;i++)
	{ 
		if(a[i]>max)
		{
			k=i;
			max=a[i];
		}
	}
	if(max==0)
		printf("NO");
	else


	{
	printf("%d\n",a[k]+1);
	for(j=0;j<l;j++)
	{
		if(a[j]==max)
		{
			for(k=0;k<n;k++)
				printf("%c",s[j+k]);
			printf("\n");
		}		
	}
	}
	
	return 0;
}
