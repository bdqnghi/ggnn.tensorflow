int main()
{
	double s,w;
	int k1=0,k2=0,i,dian,lena,lenb;
    char a[1000],b[1000];

	
	scanf("%lf",&s);
	scanf("%s%s",a,b);
	lena=strlen(a);
	lenb=strlen(b);
	
	
	for(i=0;i<lena;i++)
	{
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')

			k1=1;
	}
	for(i=0;i<lenb;i++)
	{
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')

			k2=1;
	}

	if(k1==1||k2==1||lena!=lenb)printf("error");
	else
	{
		for(i=0,dian=0;i<lena;i++)
		{
			if(a[i]==b[i])
			dian++;

		}

		w=1.0*dian/lena;
		if(w>=s)printf("yes");
		else printf("no");
	}



	
	
    
	return 0;  
}
