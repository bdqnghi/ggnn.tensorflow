int main()
{
	int i=0,j=0,len,k,m,l,n,f;
	char a[100],b[100][100];
	cin>>n;
	for(f=0;f<n;f++)
	{	cin>>a;
		len=strlen(a);
		for(k=0;k<len;k++)
		{
			b[i][j++]=a[k];}
		if(j==79||j==80){b[i][j]='\0';i++;j=0;}
		else if(j>80){
			for(l=j-1;;l--)
			{
                if(b[i][l]!=' ')
				b[i][l]='\0';
				if(b[i][l]==' ')break;
			}b[i][l]='\0';j=0;i++;
			for(k=0;k<len;k++)
			{
				b[i][j++]=a[k];
			}
			b[i][j++]=' ';
		}
		else if(j<79)b[i][j++]=' ';
	}
	b[i][j-1]='\0';
	for(m=0;m<=i;m++){
			cout<<b[m]<<endl;
	}

	return 0;
}
