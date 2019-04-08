int main()
{
	char str[7][40];
	int n,i,l,j,t;
	scanf("%d\n",&n);
	for(t=0;t<n;t++)
	{
		scanf("%s",str[0]);
		l=strlen(str[0]);
		
		if(l<=2)
			continue;
		else if(l==3)
		{
			if(str[0][1]=='e'&&str[0][2]=='r'||str[0][1]=='l'&&str[0][2]=='y')
				printf("%c\n",str[0][0]);
		}
	
			else
		{
			for(i=1;i<7;i++)
				for(j=0;j<40;j++)
					str[i][j]=0;
			strncpy(str[1],str[0],l-3);
			strcpy(str[2],str[1]);
			strcat(str[1],"ing");
			if(strcmp(str[0],str[1])==0)
			{
			printf("%s\n",str[2]);
			continue;
			}

			strncpy(str[3],str[0],l-2);
			strcpy(str[4],str[3]);
			strcat(str[3],"er");
			if(strcmp(str[0],str[3])==0)
			{
				printf("%s\n",str[4]);
				continue;
			}

			strncpy(str[5],str[0],l-2);
			strcpy(str[6],str[5]);
			strcat(str[5],"ly");
			if(strcmp(str[0],str[5])==0)
			{
			printf("%s\n",str[6]);
			continue;
			}
		}
	
	}
	return 0;
}
	