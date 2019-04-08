
int main()
{
	int i,n,temp=0;
	scanf("%d",&n);
	char a[10000][41],(*p)[41]=a;
	for(i=0;i<n;i++) scanf("%s",*(p+i));
	for(i=0;i<n;i++)
	{
		if(temp+strlen(*(p+i))<=80)
		{
			if(temp==0)
			{
			printf("%s",*(p+i));
			temp+=strlen(*(p+i))+1;
			}
			else
			{
				printf(" %s",*(p+i));
				temp+=strlen(*(p+i))+1;
			}
		}
		else
		{
			printf("\n");
			temp=0;
			i--;
		}
	}
	return 0;
}
