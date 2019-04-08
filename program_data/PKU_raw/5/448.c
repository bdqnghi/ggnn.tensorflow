int main()
{
	int i , lena , lenb ;
	double r ,same = 0,j=0;
	char a[10000];
	char b[10000];
	scanf("%lf",&r);
	scanf("%s",&a);
	scanf("%s",&b);
	lena = strlen (a);//????
	lenb = strlen (b);
	if (lena != lenb )//????
	{
		printf("error");
	}
	else
	{
		for(i=0 ; i <=lena-1 ; i++)//???
		{
			if( a[i] == b[i])//????
			{
				same++;
			}
			else if(a[i]!='A'&& a[i]!='T'&&a[i]!='C'&& a[i]!='G')
			{
				printf("error");
				j=1;
				break;
			}
			else if(b[i]!='A'&& b[i]!='T'&& b[i]!='C'&& b[i]!='G')
			{
				printf("error");
				j=1;
				break;
			}
		}
	}
	if(j==0 && lena==lenb)
	{
		if((same/lena) > r)
		{
			printf( "yes" );
		}
		else
		{
			printf( "no" );
		}

	}
     return 0;

}
