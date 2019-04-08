int main()
{
	int n,i,j,k,m,s=0;
	char c[100],d[100];
	gets(c);
	n=strlen(c);
	d[n]='\0';
	for(i=0;i<n;i++)
	{
		if(((c>0)&&(c[i-1]==' '))||(i==0)&&(c[i]!=' '))
		{
			for(j=i;j<n;j++)
			{
				if(c[j]==' ') break;
			}
			m=j-i;
			s=s+m;
			for(k=i;k<j;k++)
			{
				d[n-s+k-i]=c[k];
			}
		}
		if(c[i]==' ')
		{
			s=s+1;
			d[n-s]=c[i];
		}
	}
	puts(d);
	return 0;
}
