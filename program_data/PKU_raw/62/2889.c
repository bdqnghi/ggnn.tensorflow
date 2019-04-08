int main()
{
	char a[ 1000 ],b[ 1000 ];
	int i,k,f;
	gets(a);
	f=1; k=0;
	for(i=0; a[ i ]!='\0'; i++)
	{
		if(a[ i ]==' ')
		{
			if(f==1)
			{
				b[ k++ ]=a[ i ];
				f=0;
			}
		}
		else
		{
			b[ k++ ]=a[ i ];
			f=1;
		}
	}
	b[ k ]='\0';
	for(i=0; b[ i ]!='\0'; i++)
		a[ i ]=b[ i ];
	a[ i ]='\0';
	puts(a);
	return 0;
}