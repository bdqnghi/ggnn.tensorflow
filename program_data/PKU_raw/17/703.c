int main()
{
	int i,j,k,l;
	char s1[101],s2[101]={0};
	for (i=1;i>0;)
	{
		gets(s1);
		if(strcmp(s1,s2)==0) {printf("\n"); break;}
		puts(s1);
		l=strlen(s1);
		for (j=0;j<l;j++)
		{
			if(s1[j]!='('&&s1[j]!=')') s1[j]=' ';
			else
			{
				if(s1[j]==')')
				{
					for(k=j;k>=0;k--)
						if (s1[k]=='(') break;
					if (k!=-1) s1[k]=s1[j]=' ';
					else s1[j]='?';
				}
			}
		}
		for (j=0;j<l;j++)
		{
			if (s1[j]=='(') s1[j]='$';
		}
		strcpy(s2,s1);
		puts(s1);
	}
	return 0;
}

