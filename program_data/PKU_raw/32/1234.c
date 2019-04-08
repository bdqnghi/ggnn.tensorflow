void func(char a[],char b[])
{
	int p=0,i=0,j=0;
	int lena=strlen(a),lenb=strlen(b);
	for(i=lena-1,j=lenb-1;j>=0;i--,j--)
	{
		if((a[i]-b[j]-p)>=0)
			{
				a[i]='0'+a[i]-b[j]-p;
				p=0;
		    }
		else
		   {
			   a[i]='0'+a[i]-b[j]-p+10;
			   p=1;
		   }
	}
	a[i]=a[i]-p;
	for(i=0;i<=lena-1;i++)
	{
		if(a[i]!=0)break;
	}
	for(j=i;j<=lena-1;j++)
		cout<<a[j];
	cout<<endl;
	return ;
}

	    
int main()
{
	int n,i,j;
	cin >> n;
	for (i=1;i<=n;i++)
	{
		char a[101],b[101];
		cin >> a >> b;
		func(a,b);
	}
	return 0;
}