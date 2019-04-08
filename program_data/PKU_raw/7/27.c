int main()
{
	char string[256],substring[256],replacement[256],final[500];
	int i,j,k,length,length1,length2,a,flag=0;
	scanf("%s",string);
	scanf("%s",substring);
	scanf("%s",replacement);
	length=strlen(string);
	length1=strlen(substring);
	length2=strlen(replacement);
	for(i=0,j=0; string[i]!= '\0';i++)
	{
		if(string[i]==substring[j])
		{
			a=i;
			if(string[a+1]==substring[j+1])	
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		for(k=0;k<=a-1;k++)
			*(final+k)=*(string+k);
		for(k=a;k<a+length2;k++)
			*(final+k)=*(replacement+k-a);
		for(k=a+length2;k<length+length2-length1;k++)
			*(final+k)=*(string+k+length1-length2);
		*(final+length+length2-length1)='\0';
		for(k=0;final[k]!='\0';k++)
			printf("%c",final[k]);
	}
	else if(flag==0)
	{
		for(i=0,j=0; string[i]!= '\0';i++)
			printf("%c",string[i]);
		return 0;
	}
	return 0;
}