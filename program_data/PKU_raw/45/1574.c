int main()
{
	int i,j,k=1;
	char a[50],b[50];
	scanf("%s%s",a,b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==a[0])
			for(j=1;a[j]!='\0';j++)
			{
				if(b[i+j]=a[j]) k++;
				if(a[k]=='\0') {printf("%d\n",i);break;}
			}
	}
	return 0;
}
