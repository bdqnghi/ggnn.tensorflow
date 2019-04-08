int main()
{
	int i,j,m,n,a[500];
	char str[100];
	gets(str);
	if(strlen(str)==2&&(str[0]-48)*10+(str[1]-48)<13||strlen(str)==1)printf("0\n%s",str);
	else{
	m=str[0]-48;
	for(i=1;i<strlen(str);i++)
	{
		a[i]=(str[i]-48+10*m)/13;
		m=(str[i]-48+10*m)%13;
	

	}
	i=1;
	while(a[i]==0){
		i++;
	}
	for(;i<strlen(str);i++)
	{
		printf("%d",a[i]);

	}
	

	printf("\n");
	printf("%d",m);
	}


	return 0;
}
