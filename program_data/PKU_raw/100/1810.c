int main(){
	int i,time[52]={0},k=0;
	char zfc[300];
	gets(zfc);
	for(i=0;zfc[i]!='\0';i++)
	{
		if(zfc[i]<='Z'&&zfc[i]>='A')
		{
			k++;
			time[zfc[i]-'A']++;
		}
		if(zfc[i]<='z'&&zfc[i]>='a')
		{
			k++;
			time[zfc[i]-'a'+26]++;
		}
	}
	if(k==0)printf("No\n");
	else
	{
		for(i=0;i<26;i++)	
		{		
			if(time[i]>0)
			printf("%c=%d\n",'A'+i,time[i]);
		}
		for(i=26;i<52;i++)
		{
	    	if(time[i]>0)
			printf("%c=%d\n",'a'+i-26,time[i]);
		}
	}
	return 0;
}