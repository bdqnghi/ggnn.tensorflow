int main(void)
{
	int i=0,j=0,n,m;
	char a[10000][20],b[10000][14],*p,*max;
	while((scanf("%s %s",&a[i],&b[i]))!=EOF)
	{
		n=strlen(a[i]);
		p=&b[i][2];
		max=a;
		for(j=0;j<n-1;j++)
		{
			if(*max<a[i][j+1]) max=&a[i][j+1];
		}
		/*printf("%d\n%c\n%c\n",n,*(max+1),*p);*/
		for(j=1;j<10;j++)
		{
			*(p+j)=*(max+j);
			*(max+j)='\0';
		}
		printf("%s\n",strcat(a[i],b[i]));
	}
}