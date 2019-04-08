int main()
{
	char s1[100]={'\0'},s2[100]={'\0'},a[100]={'\0'},b[100]={'\0'};
	gets(s1);
	gets(a);
	gets(b);
	int i,j,k,t=0,lena=strlen(a),lenb=strlen(b),n=strlen(s1);
	for(i=0;i<n-lena+1;i++)
	{
		if(i>0 && s1[i-1]!=' ')
		{
			s2[t]=s1[i];
			t+=1;
			continue;
		}
		for(j=0;j<lena;j++)
		{
			if(s1[i+j]!=a[j])
				break;
		}
		if(i+j==n || j==lena && s1[i+j]==' ')
		{
			for(k=0;k<lenb;k++)
				s2[t+k]=b[k];
			t+=lenb;
			i+=lena-1;
		}
		else
		{
			s2[t]=s1[i];
			t+=1;
		}
	}
	if(i==n-lena+1)
	{
		for(k=0;k<lena-1;k++)
			s2[t+k]=s1[i+k];
	}
	puts(s2);
	return 0;
}