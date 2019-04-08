
int main(){
	char str[1000],strd[20],strb[20];
	char zfc[50][200];

	gets(str);

	int i,k;
	int j=0,n=0;

	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i]==' ')
		{
		    str[i]='\0';
			strcpy(zfc[n],(str+j));
			n++;
			j=i+1;
		}
	}
	strcpy(zfc[n],(str+j));
    n++;

	gets(strb);
	gets(strd);

	for(k=0;k<n;k++)
	{

	
		if(strcmp(strb,zfc[k])==0){
			strcpy(zfc[k],strd);
			
		}
	}

	printf("%s",zfc[0]);
	for(i=1;i<n;i++)
	{
		printf(" %s",zfc[i]);
	}

	return 0;
}


			
