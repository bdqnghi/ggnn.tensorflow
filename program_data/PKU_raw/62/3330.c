int main()
{
	char d;
    while((d=getchar())!=EOF)
	{
		printf("%c",d);
		if(d==' ')
		{
			for(;;)
			{
				if((d=getchar())==' ')continue;
				else 
				{
                    printf("%c",d);
					break;
				}
			}
		}
	}
	return 0;
}