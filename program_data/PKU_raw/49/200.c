int main()
{
	char s[550]={0};
	int i,num,j,k;
	for(i=0;i<550;i++)
	{
		scanf("%c", &s[i]);
		if(s[i]=='\n')
		{
			s[i]=0;
			num=i-1;
			break;
		}
	}
	char *p1,*p2;
	for(i=2;i<=num+1;i++)
	{
		p1=(char *)malloc(sizeof(char)*(i+1));
		p2=(char *)malloc(sizeof(char)*(i+1));
		for(j=0;j<=num+1-i;j++)
		{
			for(k=j;k<=j+i-1;k++)
			{
				*(p1+k-j)=s[k];
				*(p2+k-j)=s[j+j+i-1-k];
			}
			*(p1+i)='\0';
			*(p2+i)='\0';
			if(strcmp(p1,p2)==0) printf("%s\n", p1);
		}
		free(p1);
		free(p2);
	}
	return 0;
}
