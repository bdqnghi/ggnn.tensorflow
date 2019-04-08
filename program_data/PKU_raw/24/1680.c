int main ()
{
    char s[10000];
	char d[100][100];
	int i,m,n,j,t,a;
	char b[100];
	int r[100]={0};
	gets(s);
	m=0;
	n=0;
	i=0;
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
	a=n;
	for (;n>0;n--){
		for(m=0;m<n;m++){
			if (r[m+1]<r[m]){
				t=r[m+1];
				r[m+1]=r[m];
				r[m]=t;
				strcpy(b,d[m+1]);
				strcpy(d[m+1],d[m]);
				strcpy(d[m],b);
			}
		}
	}
	if(r[a]!=r[a-1]){
         printf("%s\n",d[a]);
	}
	else{
		for(i=0;i<a;i++){
			if (r[i]==r[a]){
                printf("%s\n",d[i]);
				break;
			}
		}
	}
	printf("%s",d[0]);
	return 0;
}
