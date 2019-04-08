int main()
{
	int i,r,j=0;
	int A,B,C,D;
	int counta=0,countb=0;
	char a[250],b[250],c[250];
	char num[10]={'0','1','2','3','4','5','6','7','8','9'};
	gets(a);
	gets(b);
	for(i=0;a[i];i++) counta++;
	for(i=0;b[i];i++) countb++;
	if(counta>=countb)
	{
		for(i=counta-1;i>=(counta-countb);i--) b[i]=b[i-counta+countb];
		for(i=0;i<(counta-countb);i++) b[i]='0';
	}
    if(counta<countb)
	{
		for(i=countb-1;i>=(countb-counta);i--) a[i]=a[i-countb+counta];
		for(i=0;i<(countb-counta);i++) a[i]='0';
		counta=countb;
	}
    for(i=0;i<=counta;i++) c[i]='0';
    for(i=counta-1;i>=0;i--)
	{
		A=a[i]-'0';
		B=b[i]-'0';
		C=A+B;
		D=c[i+1]-'0';
		if(C+D<10)
			c[i+1]=num[C+D];
		else
		{
			c[i]='1';
			c[i+1]=num[C+D-10];}
		}
		for(i=0;i<=counta;i++)
			if(c[i]=='0') j++;
		if(j==counta+1) printf("0\n");
		else
		{
			for(i=0;i<=counta;i++)
			{	
				if(c[i]!='0')
				{
					r=i;
					break;
				}
			}
			for(i=r;i<=counta;i++) printf("%c",c[i]);
		}
		printf("\n");
	return 0;
}




