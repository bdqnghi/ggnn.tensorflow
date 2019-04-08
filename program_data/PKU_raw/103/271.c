struct word
{
	char a;
	int b;
}w[1000];

int main()
{
	int i,k,num=0,temp,t=0;
	char c[1111];
	cin>>c;
	k=strlen(c);
	for(i=0;i<k;i++)
		if(c[i]>='a')
			c[i]=c[i]-32;
	i=0;
	temp=c[0];
	while(i<k)
	{
		if(c[i]==temp)
			num++;
		if(c[i]!=temp)
		{
			w[t].a=c[i-1];
			w[t].b=num;
			num=1;
			temp=c[i];
			t++;
		}
		i++;
	}
	w[t].a=c[i-1];
	w[t].b=num;
	for(i=0;i<=t;i++)
		cout<<'('<<w[i].a<<','<<w[i].b<<')';
	return 0;
}