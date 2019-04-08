void main()
{
	char a[100],b[100],c[100],temp[100];
	int i,j=0,k,lena,lenb,mark=0;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
	lena=strlen(a);
	lenb=strlen(b);

	for(i=0;i<lena;i++)
	{
		if(a[i]==b[0])  
		{
			for(j=1;j<lenb;j++)	
			{
				if(a[i+j]==b[j]) mark=1;
				else
				{
					mark=0;
					break;
				}
			}
		}
		if(mark==1)
		{
			for(k=0;k<lenb;k++)
				a[i+k]=c[k];
			break;
		}
	}
	for(i=0;i<lena;i++)
	{
		printf("%c",a[i]);
		
	}
}
