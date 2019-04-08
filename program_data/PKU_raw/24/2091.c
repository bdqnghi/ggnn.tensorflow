int main()
{
	int x,y,i,k,I1,I2,J1,J2,l,m,n;
	char s[10000];
	gets(s);
	l=strlen(s);
	I1=J1=0;x=0;
	for(i=1;i<l+1;i++)
	{
		if((s[i]==' ')||(s[i]=='\0'))
		{
			k=x=m=n=i;I2=J2=i-1;
			break;
		}
	}
	for(i=k+1;i<l;i++)
	{
		if(s[i]==' ')
		{
			y=i-x-1;
			if(y>m){m=y;I1=x+1;I2=i-1;}
			if(y<n){n=y;J1=x+1;J2=i-1;}
			x=i;
		}
	}
	y=l-1-x;
	if(y>m){m=y;I1=x+1;I2=l-1;}
	if((y>0)&&(y<n)){n=y;J1=x+1;J2=l-1;}
	for(i=I1;i<=I2;i++) printf("%c",s[i]);
	printf("\n");
	for(i=J1;i<=J2;i++) printf("%c",s[i]);
	return 0;
}
