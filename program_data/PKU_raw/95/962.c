
int main()
{   
	char a[80],b[80],i;
	cin.getline(a,80);
	cin.getline(b,80);
	i=0;
	while(a[i]!='\0')
		{if((a[i]>=65)&&(a[i]<=90))
		a[i]=a[i]+32;
	i++;}
	i=0;
	while(b[i]!='\0')
		{if((b[i]>=65)&&(b[i]<=90))
		b[i]=b[i]+32;
	i++;}
	i=strcmp(a,b);
	if(i==0)
		cout<<'=';
	if(i>0)
		cout<<'>';
	if(i<0)
		cout<<'<';

    return 0;
}