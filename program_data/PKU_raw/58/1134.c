int isA(char a)
{
	if( (a>='0' && a<='9')|| (a>='a' && a<='z') || (a>='A' && a<='Z') ||a=='_')return 1;
	return 0;
}
int isStart(char a)
{
	if(  (a>='a' && a<='z') || (a>='A' && a<='Z') ||a=='_')return 1;
	return 0;
}
int main()
{
		int i=0, n = 0;
		scanf("%d\n",&n);
		char array[300][81] ;
		for(i = 0 ; i<n ; i++)
		{
			gets(array[i]);
		}
		for(i = 0 ; i<n ; i++)	
		{
			int len = strlen(array[i]);
			int j = 0;
			int flag = 1;
			if(isStart(array[i][0])==1){
				for(;j<len;j++)
				{
					if(isA(array[i][j])==0)flag=0;
				}
			}
			else flag= 0 ;
			if(flag==1)printf("1\n");
			else printf("0\n");
		}
		return 0;
}