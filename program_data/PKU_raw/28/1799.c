
char a[1000000];
int main()
{
	
	int  num,i,len;	
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		num=0;
		if(a[i]==' '){continue;}
		while(a[i]!=' '&&(i!=len-1))
		{
			num++;
			i++;
		}
		if(i!=len-1){printf("%d,",num);}
		else{printf("%d",num+1);}
	}
	printf("\n");
	return 0;
}