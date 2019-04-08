int main()
{
	void xu(int a[],char b[]);
	int z,q,s,l;
	int number[4];
	char ming[4]={'z','q','s','l'};
	for(z=10;z<=50;z=z+10)
	{
		for(q=10;q<=50;q=q+10)
	{
		for(s=10;s<=50;s=s+10)
	{
		for(l=10;l<=50;l=l+10)
	{
		if(z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l&&z+q==s+l&&z+l>s+q&&z+s<q)
		{
			number[0]=z;
			number[1]=q;
			number[2]=s;
			number[3]=l;
		}}}}}
	xu(number,ming);
	int i;
	for(i=1;i<=4;i++)
		cout<<ming[i-1]<<' '<<number[i-1]<<endl;
	
    return 0;
}
void xu(int a[],char b[])
{
	int i,j,t;
	char c;
	for(i=1;i<=4;i++)
		for(j=1;j<=4-i;j++)
			{
				if(a[j-1]<a[j])
				{
					t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
					c=b[j];
					b[j]=b[j-1];
					b[j-1]=c;}}}
		

