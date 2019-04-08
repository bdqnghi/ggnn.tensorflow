int main()
{
    int n;
	scanf("%d", &n);
	int i;
	int j;
	int chang[1000]={0};
    char jianji1[1000][285];
	   char jianji2[1000][285]={0};
      for(i=0; i<n; i++)
	{
	   scanf("%s", &jianji1[i]);
	}
    for(i=0; i<n; i++)
	{
	    chang[i]=strlen(jianji1[i]);
		for(j=0; j<chang[i]; j++)
		{
			if(jianji1[i][j]=='A')
		{
		   jianji2[i][j]='T' ;
		}
		 if(jianji1[i][j]=='T')
		{
		   jianji2[i][j]='A';
		}
		  if(jianji1[i][j]=='C')
		{
		   jianji2[i][j]='G';
		}
		   if(jianji1[i][j]=='G')
		{
		   jianji2[i][j]='C';
		}
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<chang[i]; j++)
		{
			if(j==chang[i]-1)
			{
				printf("%c\n", jianji2[i][j]);
			}
			else
			{
			    printf("%c", jianji2[i][j]);
			}
		}
		
	}
	return 0;
}
