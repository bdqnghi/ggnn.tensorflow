int main()
{
	int n,z,i,l;
	char word[100];
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		scanf("%s",word);
		l=strlen(word);
		
		for(i=0;i<l;i++)
		{
			if(word[l-3]=='i'&&word[l-2]=='n'&&word[l-1]=='g')
			{
				for(i=0;i<l-3;i++)
					printf("%c",word[i]);
				printf("\n");
				break;
			}
			else 
			{
				for(i=0;i<l-2;i++)
					printf("%c",word[i]);
				printf("\n");
				break;

			}
			printf("\n");
		}
	}
	return 0;
}
