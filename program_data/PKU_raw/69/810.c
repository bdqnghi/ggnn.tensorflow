
int main()
{
	char a[251],b[251],aa[251],bb[251];
	int la,lb,i,ii,jin=0,l,zero=0;
	cin>>a>>b;
	for(i=0;i<251;i++)
		if(a[i]!='0'){ii=i;break;}
	if(ii!=0){
	    for(i=ii;i<251;i++)
			a[i-ii]=a[i];}
	for(i=0;i<251;i++)
		if(b[i]!='0'){ii=i;break;}
	if(ii!=0){
	    for(i=ii;i<251;i++)
			b[i-ii]=b[i];}
	la=strlen(a),lb=strlen(b),l=la;
	if(la>lb)
	{
		l=la,b[la]='\0';
		for(i=la-1;i>=la-lb;i--)
			b[i]=b[i-la+lb];
		for(i=0;i<la-lb;i++)
			b[i]='0';
	}
	else if(lb>la)
	{
		l=lb,a[lb]='\0';
		for(i=lb-1;i>=lb-la;i--)
			a[i]=a[i-lb+la];
		for(i=0;i<lb-la;i++)
			a[i]='0';
	}
	for(i=l-1;i>=0;i--)
	{
		if(a[i]+b[i]-'0'+jin>'9')
			a[i]=a[i]+b[i]-'0'+jin-10,jin=1;
		else
			a[i]=a[i]+b[i]-'0'+jin,jin=0;
	}
	if(jin==1){
		cout<<1;zero=1;}
	for(i=0;i<l;i++)
	{
	    cout<<a[i];zero=1;
	}
	if(zero==0)
		cout<<0<<endl;
	return 0;
}

