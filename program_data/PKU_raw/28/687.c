
int main(){
    char str[1000];
    char zfc[300][20];
    int sum[300];

    gets(str);

    int i,k,l;
    int m,j=0,n=0;



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

    for(k=0;k<n;k++){
		sum[k]=strlen(zfc[k]);
	}

	printf("%d",sum[0]);

	for(k=1;k<n;k++)
	{
		if(sum[k]!=0){
		printf(",%d",sum[k]);
		}
	}
	return 0;
}




