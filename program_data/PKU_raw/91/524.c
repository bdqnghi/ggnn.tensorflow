int main() 
{
	int i=0,l=0;
	char zfc[LEN],Friend[LEN];
	gets(zfc);
	l=strlen(zfc);
	//printf("%d",l);
	for(i=0;i<l;i++)
	{
		if(i+1<l)
		{
		  Friend[i]=zfc[i]+zfc[i+1];
		  printf("%c",Friend[i]);
		}
		if(i==l-1)
		{
	      Friend[i]=zfc[i]+zfc[0];
		  printf("%c",Friend[i]);
		}
	}
	return 0;
}