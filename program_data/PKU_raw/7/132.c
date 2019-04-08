int main()
{

	char src[256];
	char dst[256];
	char replacement[256];
	//freopen("3.in","r",stdin);
	//freopen("3.out","w",stdout);

	scanf("%s",src);//????
	scanf("%s",dst);//??
	scanf("%s",replacement);//??????
	char* p=strstr(src,dst);
	if( p== NULL )
	{
		printf("%s\n",src);
	}
	else
	{
		int len = strlen(replacement);
		int i;
		for (i=0;i<len;i++)
		{
			*p = replacement[i];
			p++;
		}//end for
		printf("%s\n",src);
	}//end if


	return 0;
}