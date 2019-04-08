
int main(int argc, char* argv[])
{
	int i,j=0,k,b,a,x[20],y[20],M;
	long int N=0;
	char s[20];
	scanf ("%d %s %d",&a,&s,&b);
	k=strlen(s);
	for (i=0;i<k;i++)
	{
		if (s[i]>47&&s[i]<58)
			x[i]=s[i]-48;
		else if (s[i]>64&&s[i]<90)
			x[i]=s[i]-55;
		else if (s[i]>96&&s[i]<123)
			x[i]=s[i]-87;
	}
	for (i=0;i<k;i++)
	{
		N=N+x[i]*pow(a,k-i-1);		
	}
	M=N;
	if (N==0)
		printf ("0\n");
	else
	{
	do {
		N=N/b;
		j++;
	} while (N>=b);
	for (i=0;i<=j;i++)
	{
		y[i]=M%b;
		M=M/b;
		if (y[i]<10)
			y[i]=y[i]+48;
		else if (y[i]>=10)
			y[i]=y[i]+55;
	}
	for (i=j;i>=0;i--)
	{
		printf ("%c",y[i]);
	}
	}
	return 0;
}