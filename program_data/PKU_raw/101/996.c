int main()
{int a,b,c,p,q,r,m;
char n[3];
for(a=0;a<=2;a++)

	for(b=0;b<=2;b++)
		for(c=0;c<=2;c++)
{if(a==b||b==c||c==a)continue;
p=(b>a)+(c==a);
q=(a>b)+(a>c);
r=(c>b)+(b>a);
		if(p+a==q+b&&p+a==r+c)

		{n[a]='A';
		n[b]='B';
		n[c]='C';
		cout<<n[0]<<n[1]<<n[2];
				
}
}


}