int main()
{
	int i;
	char zfc[MAX];

	gets(zfc);

	for(i=0;zfc[i];i++){
		if(zfc[i]!=' '){
			printf("%c",zfc[i]);
		}
		
		if(zfc[i]==' '&&zfc[i+1]!=' '){
			printf("%c",zfc[i]);
		}
	}
   return 0;
}
	
				