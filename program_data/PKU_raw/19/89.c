int main()
{
	char str[100][100];
int i,j=0;
	for(i=0;i<100;i++)
	{
		j+=scanf("%s",str[i]);
		if(str[i][0]<2) break;
	
	}
	
for(i=0;i<100;i++)
	{
	if(strcmp(str[i],str[j-1])==0)
	{strcpy(str[i],str[j]);}
}
for(i=0;i<j-2;i++)
{printf("%s ",str[i]);}
printf("%s",str[j-2]);
return 0;
}