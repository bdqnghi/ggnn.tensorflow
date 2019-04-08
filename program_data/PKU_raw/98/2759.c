
int main(void)
{
	int cnt;
	char data[1000][90];
	scanf("%d",&cnt);
	int i;
	for(i=0;i<cnt;i++)
		scanf("%s",data[i]);
	int c=0;
	i=0;
	while(i<cnt){
		while(c<80){
			if(c+strlen(data[i]) >= 80)
				break;
			if(c != 0)
			{
				printf(" ");
				c++;
			}
			printf("%s",data[i]);
			c = c+strlen(data[i]);
			i++;
			if(i>=cnt)
				break;
		}
		printf("\n");
		c=0;
	}
	
	return 0;
}