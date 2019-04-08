
void Reverse( char y[] )
{
	int len = strlen(y);
	int i;
	for (i=0;i<len/2;i++)
	{
		char tmp = y[i];
		y[i] = y[len-i-1];
		y[len-i-1] = tmp;
	}
}

int main()
{
	int a,b,n,s=0,a1=1,l,r,i,j;
	char x[100],y[1000],m;
	scanf("%d %s %d",&a,x,&b);
	n=strlen(x);
	for(i=0;i<n;i++)
	{
		if(x[n-1-i]<58)
			r=x[n-1-i]-48;
		else
		{
			if((x[n-1-i]>='a')&&(x[n-i-1]<='z'))
				r=x[n-1-i]-87;
			else
				r=x[n-1-i]-55;
		}
		s=s+r*a1;
		a1=a1*a;
	}
	memset(y,0,sizeof(y));
	for(i=0,l=s;;i++)
	{
		r=l%b;
		l=(l)/b;
		
		if(r<10)
			y[i]=r+48;
		else
			y[i]=r+55;
		if(l==0)break;
	}
	Reverse(y);
	printf("%s\n",y);
	//for(j=i;j>=0;j--)
	//{
	//	printf("%c",y[j]);
	//}
	//printf("\n");
	return 0;
}