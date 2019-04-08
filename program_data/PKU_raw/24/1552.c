int main()
{
	char b[20000],a[200][100];
	int i,n,x=0,k=0,len[200],max,min;
	gets(b);
	n=strlen(b);
    for(i=0;i<n;i++){
		if(b[i]!=' '&&b[i]!=','){
			a[x][k]=b[i];
			k++;
		}
		else{
			if(k==0)
				continue;
			a[x][k+1]='\0';
			len[x]=k;
			k=0;
			x++;
		}
	}
    len[x]=k;
	a[x][k+1]='\0';
	max=0;
	min=0;
	for(i=0;i<=x;i++){
		if(len[i]>len[max])
			max=i;
		if(len[i]<len[min])
			min=i;
	}
	printf("%s\n%s",a[max],a[min]);
	return 0;
}