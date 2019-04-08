int location(char*seg,char*who){
	int i=0,j,len,flag=0;
	len=strlen(seg);
	for(j=0;;j++)
	{
		if(who[j]==seg[i]){
			for(;i<len&&(who[j]==seg[i]);i++,j++);
			if(i==len&&(who[j-1]==seg[i-1]))
			{
				flag=1;break;
			}
		}
	}
	if(flag==1) return j-len;
	else return -1;			
}

int main( )
{
	char *segment=(char *)malloc(sizeof(char));
	char *whole=(char *)malloc(sizeof(char));
	scanf("%s%s",segment,whole);
	printf("%d",location(segment,whole));
	return 0;
}

