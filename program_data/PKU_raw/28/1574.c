
int main()
{
	char a[999],d[999][999];
	gets(a);
	int i,j,k=0;
	int kk;
	for(i=0;i<strlen(a);i++)
	{
		kk=0;
		for(j=i;a[j]!=' ';j++)
		{
			kk=1;
			d[k][j-i]=a[j];
			d[k][j-i+1]='\0';
			if(a[j]=='\0')
			{
				break;
			}
		}
		i=j;
		if(kk==1)
		{
			k++;
		}
	}
	for(i=0;i<k-1;i++)
	{
		printf("%d,",strlen(d[i]));
	}
	printf("%d",strlen(d[k-1]));
	return 0;
}