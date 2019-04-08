int main ()
{
    char s[100000];
	char d[1000][100];
	int i,m,n,j,p;
	int r[1000]={0};
	gets(s);
	m=0;
	n=0;
	i=0;
	p=strlen(s);
    while (s[i]!='\0'){
		j=0;
		for (;s[i]!=' '&&s[i]!='\0';i++,j++)
		{
			d[m][j]=s[i];
			r[m]++;
		}
		if(s[i]=='\0')
		{
			break;
		}
		d[m][j]='\0';
        m++;
		n++;
		i++;
	}
	d[m][j]='\0';
	for (i=0;i<m;i++){
		if (r[i]!=0){
		  printf("%d,",r[i]);
		}
	}
	printf("%d",r[m]);
	return 0;
}
	