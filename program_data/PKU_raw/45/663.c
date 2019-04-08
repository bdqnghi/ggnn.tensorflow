void main()
{
	char a[50],b[50];
	int i=0,j=0;
	scanf("%s%s",&a,&b);
	while(b[j]!='\0')
	{	
		if(a[0]==b[j])
		{
			for(i=0;a[i]!='\0';i++)
			{
				if(a[i]!=b[i+j])
					break;
			}
			if(a[i]=='\0')
			{
				printf("%d\n",j);
				break;
			}
			else    j++;
		}
		else j++;
	}
}
	