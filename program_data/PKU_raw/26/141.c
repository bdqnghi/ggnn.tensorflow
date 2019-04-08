int main()
{
	char a[101];
	int num=0,i,j;
	for(i=0;i<101;i++)
	{
		scanf("%c",&a[i]);
		num++;
		if(a[i]=='\n')
			break;
	}
	for(i=0;i<num;i++)
	{
		if(a[i]==' ' && a[i+1]==' ')
		{
			for(j=i+1;j<num-1;j++)
				a[j]=a[j+1];
			num--;
			i--;
		}
	}
	for(i=0;i<num;i++)
		printf("%c",a[i]);
	return 0;
}