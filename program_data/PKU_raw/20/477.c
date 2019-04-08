void swap(char a[],int n)
{
	int i,j;
	char t;
	for(j=0;j<n;j++)
		for(i=0;i<n-j-1;i++)
		if(a[i]<a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}

}
void main()
{
    char s1[100],s2[100];
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		
		char m[100];
		strcpy(m,s1);
		int l=strlen(m);
		swap(m,l);
		int i,j,k;
		for(i=0;i<l;i++)
		if(s1[i]==m[0])
		{
			j=i;
			break;
		}
			for(k=0;k<=j;k++)
				printf("%c",s1[k]);
			printf("%s",s2);
			for(i=j+1;i<l;i++)
	            printf("%c",s1[i]);
			printf("\n");
	}
}