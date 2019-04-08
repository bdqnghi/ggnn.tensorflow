
int main()
{
	int n,i,j,sum=0,len;
	char  a[23];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		len=0;
		sum=0;
		scanf("%s",&a);
        len=strlen(a);
		if(a[0]=='-'||(a[0]>='A'&&a[0]<='z'))
		{
			for(j=1;j<=len;j++)
			{
		        if ((a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||(a[j]=='_') ||(a[j]>='0'&&a[j]<='9'))
                sum++;
			}
	       if(sum==len-1)
		   {
		      printf("yes\n");
		   }
		   else
		   {
              printf("no\n");
		   }
		}
			else
		{
			     printf("no\n");
		}
	}
	return 0;
}