
int main()
{
	char str[256*2],sub[300],replacement[300],tmp[300];
	int i,j,result=-1,k;
	gets(str);
	gets(sub);
	gets(replacement);

	for(i=0;i<=(int)(strlen(str)-strlen(sub));i++)
	{
		if(str[i]==sub[0])
		{
			for(j=0;j<(int)strlen(sub);j++)
			{
				if(str[i+j]==sub[j])
				{
					result=i;
				}
				else
				{
					result=-1;
					break;
				}
			}
		}
		if(result!=-1)
			break;
	}
	k=(int)strlen(replacement);
	if(result!=-1)
	{
		strcpy(tmp,(str+i+j));
		strcpy((str+i),replacement);
		strcpy((str+i+k),tmp);
		printf("%s",str);
	}
	else printf("%s",str);
	return 0;
}
