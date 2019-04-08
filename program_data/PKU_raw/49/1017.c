void main()
{
	char str[1000];
	int a,b,c,d,e,f,i,j,k,l0,l;
	gets(str);
	l0=strlen(str);
	for(l=2;l<=l0;l++)
	{

		for(i=0;i<=l0-l;i++)
		{

			a=0;
			for(j=0;j<l/2;j++)
			{

				if(str[i+j]!=str[l-j+i-1]) {a=1;break;}
			}
				if(a==0) 
			{
				for(j=i;j<i+l;j++)
					printf("%c",str[j]);
				printf("\n");
			}
		}
	}


}