int main()
{
	char a[200][100]={0},cc[1000]={0};
	int i=0,j=0,k=0,max=0,min=100,x=0,y=0,n;
	gets(cc);
	n=strlen(cc);
	cc[n]=' ';
	while(cc[k]!=0)
	{
		while(cc[k]!=' '&&cc[k]!=',')
		{
			a[i][j++]=cc[k++];
		}
		if(j!=0)
		{
			if(max<j){max=j;x=i;}
			if(min>j){min=j;y=i;}
		    j=0;i++;
		}
		k++;
	}

	printf("%s\n%s",a[x],a[y]);
	return 0;
}