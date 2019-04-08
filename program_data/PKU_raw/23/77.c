int main()
{
	char a[100];
	int b[100];
	int i,j,k;
	gets(a);
    j=0;
	for(i=0;;i++)
	{
		if(a[i]==' ')
		{
			b[j]=i;
			j++;
		}
		if(a[i]=='\0')
		{
			b[j]=i;
			break;
		}
	}
	//for(i=0;i<=j;i++)
		//printf("%d\n",j);
    for(i=j;i>0;i--)
	{
		for(k=b[i-1]+1;k<b[i];k++)
		{
			printf("%c",a[k]);
            
		}
		printf(" ");
	}
	for(i=0;i<b[0];i++)
		printf("%c",a[i]);
	return 0;
}