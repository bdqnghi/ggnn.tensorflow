int main()
{
	int i,j,n;
	scanf("%d",&n);
	char s[41][7],t[7];
	double h[41],tmp;
	for(i=1;i<=n;i++)
		scanf("%s %lf",s[i],&h[i]);

	for(i=n;i>1;i--)
		for(j=1;j<i;j++)
		{
			if( (s[j][0]=='m'&&s[j+1][0]=='m'&&h[j]>h[j+1]) || (s[j][0]=='f'&&s[j+1][0]=='f'&&h[j]<h[j+1]) || (s[j][0]=='f'&&s[j+1][0]=='m'))
			{
				strcpy(t,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],t);
				tmp=h[j];
				h[j]=h[j+1];
				h[j+1]=tmp;
			}
		}
   tmp=1;
	for(i=1;i<=n;i++)
	{
		if(tmp==1)
		{
			printf("%.2lf",h[i]);
			tmp++;
		}
		else printf(" %.2lf",h[i]);
	}

	return 0;
}


