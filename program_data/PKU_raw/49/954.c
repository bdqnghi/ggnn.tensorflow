int judge(char front[MAX-1],int m)
{
	int i,out;
	char back[MAX-1]={""};
	for(i=0;i<m;i++)
	{
		back[i]=front[m-i-1];
	}
	if(strcmp(back,front)==0)
	{
		out=1;
	}
	else
		out=0;
	return out;
}

int main()
{
	int len,i,j,k;
	char s[MAX];
	scanf("%s",&s);
	len=strlen(s);
	for(i=2;i<=len;i++)
	{
		char son[MAX-1][MAX-1]={""};
		for(j=0;j<=len-i;j++)
		{
			char *p=&s[j];
			for(k=0;k<i;k++)
			{
				son[j][k]=*p;
				p++;
			}
		}
		for(j=0;j<=len-1;j++)
		{
			int out;
			out=judge(son[j],i);
			if(out==1)
			{
				for(k=0;k<i;k++)
					printf("%c",son[j][k]);
				printf("\n");
			}
			
		}
	}
	return 0;
}




	