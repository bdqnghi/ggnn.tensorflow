int main()
{
    char s[100],w[100],temp[100];
	int n,i,j;
	scanf("%s%s",s,w);
	n=strlen(s);
	for(i=0;*(w+i)!='\0';i++)
	{
		for(j=0;j<n;j++)
			*(temp+j)=*(w+j+i);
		*(temp+j)='\0';
		if(strcmp(temp,s)==0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
