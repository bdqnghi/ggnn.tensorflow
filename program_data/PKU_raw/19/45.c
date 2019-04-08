int main()
{
	char ch[100],a[100],b[100],c[100][100];
	int i,n[100],k,m,j=0;
	n[0]=-1;
	gets(ch); 
	gets(a);
	gets(b);
    for (i=0;ch[i]!='\0';i++)
	{
		if (ch[i]==' ')
		{
			j++;
			n[j]=i;
			for (k=0,m=n[j-1]+1;k<i-n[j-1]-1&&m<i;k++,m++) c[j][k]=ch[m];	
		}
        continue;
	}
	for (i=n[j]+1;ch[i]!='\0';i++) c[j+1][i-1-n[j]]=ch[i];
	for (m=1;m<=j+1;m++) 
		if (strcmp(c[m],a)==0) strcpy(c[m],b);
    for (m=1;m<=j;m++) printf("%s ",c[m]);printf("%s",c[j+1]);
    
	return 0;
}