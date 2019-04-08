int main()
{	
	char zfc[305],*ps; 
	int sz[26]={0},a[26]={0},i,j,c=1,d=1;
	scanf("%s",&zfc);
	for(ps=zfc;*ps!='\0';ps++)
	{
		for(i=0;i<26;i++)
		{
			if(*ps==65+i){
				sz[i]++;
				break;
			}
		}
		for(j=0;j<26;j++)
		{
			if(*ps==97+j){
				a[j]++;
				break;
			}
		}
	}
	for(i=0;i<26;i++){
		if(sz[i]!=0)
			break;
		else
			c=0;
	}
	for(j=0;j<26;j++){
		if(a[j]!=0)
			break;
		else 
			d=0;
	}
	if(c==0&&d==0)
		printf("No");
	else 
	{
		for(i=0;i<26;i++){
			if(sz[i]!=0)
				printf("%c=%d\n",i+65,sz[i]);
		}
		for(j=0;j<26;j++){
			if(a[j]!=0)
				printf("%c=%d\n",j+97,a[j]);
		}
	}
	return 0;
}
	
	

