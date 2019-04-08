void main()
{
	int j=0,k=0;
	char a,b[50][15]={'\0'};
	while((a=getchar())!='\n')
	{
		if(a!=' ') b[j][k++]=a;
		else{ b[j][++k]='\0'; j++; k=0; }
	}
	for(k=j;k>=0;k--) { printf("%s",b[k]); if(k!=0) putchar(' '); }
}

