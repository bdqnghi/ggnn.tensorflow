int main()
{
	char a[101];
	int b[101],c[101];
	cin>>a;
	int l=strlen(a),i,x,j,k;
	for(i=0;i<l;i++)
		b[i]=a[i]-'0';
	x=b[0];
	for(i=0;i<l-1;i++)
	{
		c[i]=x/13;
		x=(x-13*c[i])*10+b[i+1];
	}
	c[i]=x/13;
	x=x-13*c[i];
	for(k=0; ;k++)
		if(c[k]!=0)
			break;
	if(l==1)
		cout<<'0'<<endl;
	else if(l==2&&b[0]==1&&b[1]<=2)
		cout<<'0'<<endl;
	else
		{for(j=k;j<=i;j++)
			cout<<c[j];
		cout<<endl;
			}
	cout<<x;
	return 0;
}
