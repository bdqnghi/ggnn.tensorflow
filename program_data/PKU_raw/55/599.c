int main()
{
	long m,p,i,n,x,ten=0,k,j,q,y,sum=0;
	char c[100]={0};
	scanf("%ld%s%ld",&m,c,&p);
	n=strlen(c);
	if(c[0]=='0')
		printf("0\n");
	else{
		for(i=0;i<n;i++)
		if(c[i]>='A'&&c[i]<='Z')
			c[i]+=32;
		for(i=n-1;i>=0;i--)
		{
			if(c[i]>='a'&&c[i]<='z')
				x=(c[i]-87)*pow(m,n-1-i);
			else
				x=(c[i]-48)*pow(m,n-1-i);
			ten=ten+x;
		}
		sum=ten;k=ten;i=0;
		while(k)
		{
			k=k/p;	i++;	
		}
		for(j=0;j<i;j++)
		{ten=sum;
			for(y=j+1;y<i;y++)
				ten=ten/p;
			q=ten%p;
			if(q<=9)
				printf("%c",q+48);
			if(q>9)
				printf("%c",q+55);
		}
	}
		return 0;
}

