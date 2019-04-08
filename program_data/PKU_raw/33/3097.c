int main()
{
	int n,i,j;
	char a;
	scanf("%d",&n);
    scanf("%c",&a);
	for(i=0;i<n;i++)
	{
        
		for(j=0;j<260;j++)
		{
			
			scanf("%c",&a);
			if(a=='\n')
			{
				printf("\n");
				break;
			}
			else if(a=='A')
			{
				printf("T");
			}
			else if(a=='T')
			{
				printf("A");
			}
            else if(a=='G')
			{
				printf("C");
			}
            else if(a=='C')
			{
				printf("G");
			}
		}
	}
	return 0;
}