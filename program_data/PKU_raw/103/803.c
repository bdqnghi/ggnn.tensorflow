int main()
{
	char a[2000],c[2000];
	cin>>a;
	int l=strlen(a),i,j=1,k=0,b[2000];
	for(i=0;i<l-1;i++)
	{
		if(a[i]==a[i+1]||(a[i]-a[i+1]==32)||(a[i]-a[i+1]==-32))
		j++;
		else
		{
			b[k]=j;
			c[k]=a[i];
			k++;
			j=1;
		}
	}
		c[k]=a[l-1];
		b[k]=j;
	for(i=0;i<=k;i++)
		{if(c[i]<='Z')
			cout<<"("<<c[i]<<","<<b[i]<<")";
		else
		{
			c[i]=c[i]-32;
			cout<<"("<<c[i]<<","<<b[i]<<")";
		}
		}
}
