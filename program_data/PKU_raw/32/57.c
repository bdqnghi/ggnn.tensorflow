void gui0(char[],int n);
int main()
{
	int num;
	scanf("%d",&num);
	char a[101],b[101];
	char**pp=(char**)malloc(num*sizeof(char*));
	for(int k=0;k<num;k++)
	{
		gui0(a,101);
		gui0(b,101);
		scanf("%s",a);
		scanf("%s",b);
		int m=strlen(a);
		int n=strlen(b);
		int j=n-1;
		for(int i=m-1;i>=m-n;i--)
		{
			if(b[j]<=a[i])
				a[i]=a[i]-b[j]+'0'; 
			else
			{
				a[i-1]--;
				int t=a[i]-b[j]+10;
				a[i]='0'+t;
			}
			j--;
			if(j<0)
				break;
		}
		pp[k]=(char*)malloc(101*sizeof(char));
		strcpy(pp[k],a);
	}
	for(int r=0;r<num;r++)
	{
		int i;
		for(i=0;i<strlen(pp[r]);i++)
			if(pp[r][i]=='0')
				continue;
			else
				break;
		for(;i<strlen(pp[r]);i++)
			printf("%c",pp[r][i]);
		printf("\n");
	}
	return 0;
}
void gui0(char a[],int n)
{
	for(int i=0;i<n;i++)
		a[i]='\0';
}