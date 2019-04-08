int main()
{
	int i,k,j;
	char danci[100][100]={'0'},zfc[3000];
	gets(zfc);
	for(i=0,k=0,j=0;zfc[i]!='\0';i++){
		if(zfc[i]==' '){
			zfc[i]='\0';
			strcpy(danci[j],(zfc+k));
			k=i+1;
			j++;
		}
	}
	strcpy(danci[j],(zfc+k));
	j++;
	char zuichang[100],zuiduan[100];
	strcpy(zuichang,danci[0]);
	strcpy(zuiduan,danci[0]);
	for(i=0;i<j-1;i++){
		if(strlen(zuichang)<strlen(danci[i+1])){
			strcpy(zuichang,danci[i+1]);
		}
		if(strlen(zuiduan)>strlen(danci[i+1])){
			strcpy(zuiduan,danci[i+1]);
		}
	}
	printf("%s\n",zuichang);
	printf("%s\n",zuiduan);
	return 0;
}