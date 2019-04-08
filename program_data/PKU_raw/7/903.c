int main()
{
	int i,flag,w,j,len;
	char str[257],sub[200],rep[50];
	scanf("%s %s %s",str,sub,rep);
	len=strlen(sub);
	w=500;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==sub[0])
		{
			
			for(j=i;j<i+len;j++)
			{
				if(str[j]!=sub[j-i]) 
				{
					flag=0;
					break;
				}
			
			}
		
		
			if(flag!=0) 
			{
				w=i;
			    break;
			}
			else flag=1;
		}
	}
	if(w!=500)
	{
	j=0;
	for(i=w+len;str[i]!='\0';i++)
	{
		sub[j]=str[i];
		j++;
	}
	sub[j]='\0';
	str[w]='\0';
	printf("%s%s%s",str,rep,sub);
	}
	else printf("%s",str);
	return 0;
}