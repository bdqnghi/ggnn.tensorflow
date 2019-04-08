int main()
{
	char a[500],temp[500],temp2[500];
	int i,k,j,b;
	gets(a);
	b=strlen(a);
	for(i=2;i<=b;i++)
	{
		for(j=0;j<b-i+1;j++)
		{
			strncpy(temp,&a[j],i);
			for(k=0;k<i;k++)
			{
				
				temp2[k]=temp[i-k-1];
			}
			temp[i]='\0';
			temp2[i]='\0';
			if(strcmp(temp,temp2)==0) printf("%s\n",temp);
		}
	}
	
	
}