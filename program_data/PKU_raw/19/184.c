
int main(int argc, char* argv[])
{
	char s[100],a[100],b[100];
	char x[100],c[100]={'\0'};
	int i,t=0;
	gets(s);
	gets(a);
	gets(b);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			x[t]=s[i];
			t++;
		}
		else
		{
			x[t]='\0';
			if(strcmp(x,a)==0)
			{
				strcat(c,b);
				strcat(c," ");
			}
			else
			{
				strcat(c,x);
				strcat(c," ");
			}
			t=0;
		}
	}
	x[t]='\0';
	if(strcmp(x,a)==0)
	{
		strcat(c,b);
	}
	else
	{
		strcat(c,x);
	}
	puts(c);
	return 0;
}