int main(){
	char zfc[101];
	gets(zfc);
	int n=strlen(zfc);
	for(int i=0;i<n-1;i++){
		while(zfc[i]==zfc[i+1]&&zfc[i]==' ')
		{
			for(int j=i;j<=99;j++)
			{
				zfc[j]=zfc[j+1];
			}
		}
	}
	printf("%s",zfc);
	return 0;
}