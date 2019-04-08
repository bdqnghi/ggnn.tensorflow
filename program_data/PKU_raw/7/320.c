int main()
{
	char str[500],sub[500],rep[500];
	int i,j,shou,mo,k;
	scanf("%s %s %s",str,sub,rep);
	int len1=strlen(str);
	int len2=strlen(sub);
	int len3=strlen(rep);
	for(i=0;i<=len1-len2;i++)
	{
		for(j=0;j<len2;j++)
		{
			if(str[i+j]!=sub[j])
			{
				break;
			}
		}	
		if(j==len2)
		{
			shou=i;
			mo=i+j;//printf("%d %d",shou,mo);
			break;
		}
		//else
		//{printf("%s",str);break;}
	}
	if(j!=len2)
	{printf("%s",str);}
	else{
	if(len2>=len3)
	{
		for(i=shou,j=0;rep[j]!=0;i++,j++)
		{
			str[i]=rep[j];
		}
		for(k=mo;str[k]!=0;k++,i++){
			str[i]=str[k];}
		str[i]=0;
	}

	else
	{
		i=len1+len3-len2;
		for(k=len1;k>=mo;k--,i--)
		{
			str[i]=str[k];
		}
		for(k=shou,j=0;rep[j]!=0;k++,j++)
		{
			str[k]=rep[j];
		}
	}
	printf("%s",str);}
	return 0;
}
