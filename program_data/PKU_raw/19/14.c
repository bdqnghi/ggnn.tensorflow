
int main()
{
	char a[PI],b[PI],sun[PI];
	struct sum{
		char tmp[20];
	};
	struct sum s[100];
	gets(sun);
	gets(a);
	gets(b);
	int i,len,j;
	len=strlen(sun);
	sun[len+1]=' ';

	int k=0,n=0;
	for (i=0;i<=len+1;i++)
	{
		if (sun[i]==' ')
		{
			n++;
			int t;
			t=i-k;
			for (j=0;j<k;j++)
			{
			
				s[n].tmp[j]=sun[t];
				t++;
			}
			s[n].tmp[j]='\0';
			k=0;
		}
		else 
			k++;
	}
	s[n].tmp[j-1]='\0';
	for (i=1;i<=n;i++)
	{
		if (strcmp(s[i].tmp,a)==0)
			strcpy(s[i].tmp,b);
		if (i!=n)
			printf("%s ",s[i].tmp);
		else
			printf("%s",s[i].tmp);
	}
	
	return 0;
}