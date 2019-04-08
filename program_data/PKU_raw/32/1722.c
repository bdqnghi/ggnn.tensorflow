
int main()
{
	char a[100][101],b[100][101],j[100][101],A[100][101],B[100][101];
	int ac,bc,i,k,c,j1,j2,sw,p,n,i2;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%s%s", a[i],b[i]);
		ac=strlen(a[i]);
		bc=strlen(b[i]);
		if (ac>bc)
		{
			c=ac;
			for (i2=0;i2<ac-bc;i2++)
				B[i][i2]='0';
			B[i][i2]='\0';
			strcat(B[i], b[i]);
			strcpy(A[i],a[i]);
		}
		if (ac<bc)
		{
			c=bc;
			for (i2=0;i2<bc-ac;i2++)
				A[i][i2]='0';
			A[i][i2]='\0';
			strcat(A[i], a[i]);
			strcpy(B[i], b[i]);
		}
		if (ac==bc)
		{
			c=ac;
			strcpy(A[i],a[i]);
			strcpy(B[i],b[i]);
		}
		sw=0;
		for (i2=c-1,k=0;i2>=0;i2--,k++)
		{
			j1=A[i][i2]-'0';
			j2=B[i][i2]-'0';
			if (j1-sw-j2>=0)
			{
				j[i][k]=j1-sw-j2+'0';
				sw=0;
			}
			else
			{
				j[i][k]=10+j1-sw-j2+'0';
				sw=1;
			}
		}
		j[i][k]='\0';
		if (i!=n-1)
			printf("\n");
	}
	for (i2=0,p=0;i2<n;i2++)
	{
		c=strlen(j[i2]);
		for (i=c-1;j[i2][i]=='0';i--)
			p+=1;
		for (i=c-p-1;i>=0;i--)
		{
			printf("%c", j[i2][i]);
		}
		if (i2!=n-1)
				printf("\n");
	}
	return 0;
}

