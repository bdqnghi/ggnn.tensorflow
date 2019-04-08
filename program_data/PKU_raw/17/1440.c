
int main(int argc, char* argv[])
{
	char a[100],b[100];
	int left[100],k=0,len,i;
	while(scanf("%s",&a)!=EOF)
	{
		len=strlen(a);
		puts(a);
		for(i=0;i<len;i++)
		{	b[i]=32;}
		for(i=0;i<len;i++)
		{	if(a[i]=='(')
		{
			k++;
			left[k]=i;
			
		}
		}
        for(;k>0;k--)
		{
			for(i=left[k];i<len;i++)
			{	
				if(a[i]==')')
				{
					a[i]=' ';
					a[left[k]]=' '; 
					break;
				}
			}
		}
		for(i=0;i<len;i++)
		{	if(a[i]=='(')
		{	b[i]='$';}
		if(a[i]==')')
		{	b[i]='?';}
		}
		for(i=0;i<len;i++)
			printf("%c",b[i]);
		printf("\n");
	}
	return 0;
}