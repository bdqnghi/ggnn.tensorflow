int main()
{	
	int i,j,length2,length1;
	char str[300],sub[300],rep[300];
	gets(str);gets(sub);gets(rep);
	length1=strlen(str);
	length2=strlen(sub);
	for(i=0;i<length1;i++)
	{
		for(j=0;j<length2;j++)
		{
			if(sub[j]!=str[i+j])
			break;
		}
		if(j==length2)
		{	
			for(j=0;j<length2;j++)
				str[i+j]=rep[j];
			break;
		}
	}
	puts(str);
	return 0;
}
