void main()
{
	char a[100];
	int l,i,j,k,len,flag;
	scanf("%s",a);
	len=strlen(a);
	for (l=2;l<len;l+=2)
	{
		for(i=0;i<len;i++)
		{
			for(j=0;j<l/2;j++)
			{
				if(a[i+j]==a[i+l-1-j]) flag=1;
				else 
				{
					flag=0;
					break;}
			}
			if (flag==1)
			{
				for(k=i;k<i+l;k++)
					printf("%c",a[k]);
				printf("\n");
			}
		}
	}
}
	
	
	
	
	
	
	//	abcddcbaab