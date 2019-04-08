void main()
{
	char a[100],b[100],temp;
	int i,j,l1,l2,can=1;
	scanf("%s %s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2) printf("NO");
	else
	{
		for(i=0;i<l1;i++)
		{
			if(can==1)
			{
				can=0;
				for(j=i;j<l1;j++)
				{
					if(b[j]==a[i]&&can==0) 
					{
						temp=b[i];
						b[i]=b[j];
						b[j]=temp;
						can=1;
					}
				}
			}
		}
		if(can==0) printf("NO");
		else printf("YES");
	}
}