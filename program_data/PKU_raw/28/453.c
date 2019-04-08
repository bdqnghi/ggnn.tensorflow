int main()
{int s,i,j,k,l,b[1000];
char str[10000];

	s=0;
	gets(str);
	l=strlen(str);
	str[l]=' ';
	str[l+1]='\0';

	
	for(i=0;i<l;i++)
	{
		if(str[i]!=' ')
		{
			j=i;
			for(k=j+1;k<=l;k++)
				if(str[k]==' ')
				{
					s=s+1;
					b[s]=k-j;
					i=k;
					break;
				
				}
		}
	}
	printf("%d",b[1]);
	for(i=2;i<=s;i++)
		printf(",%d",b[i]);
}




