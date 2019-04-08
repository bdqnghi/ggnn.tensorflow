void main ()
{
	int a,b,i,j,len;
	long k;
	long num;
	char c[70];
	scanf ("%d%s%d",&a,&c,&b);
	len=strlen(c);
	for (i=len-1,num=0,k=1;i>=0;i=i-1,k=k*a)
	{
		if (c[i]>='a'&&c[i]<='z') c[i]=c[i]-'a'+10;
		else if (c[i]>='A'&&c[i]<='Z') c[i]=c[i]-'A'+10;
		else c[i]=c[i]-'0'+0;	
		num=num+c[i]*k;	
	}    /*ok*/

	if (num==0) printf ("0");
	for (i=0,k=b;num!=0;i++,num=num/k)
	{
		c[i]=num%k;
		if (c[i]<=9) c[i]=c[i]+'0';
		else c[i]=c[i]-10+'A';
	}
	for (j=i-1;j>=0;j--) printf("%c",c[j]);
}