int main()
{
	double m;
	scanf("%lf",&m);
	char a[500],b[500];
	scanf("%s%s",a,b);
	int ci=0;
	int pan=0;
	int aa=strlen(a),bb=strlen(b);
	if(aa!=bb)
	{
		printf("error");
	}
	else
	{
		int i;
		for(i=0;i<aa;i++)
		{
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
			{
				printf("error");
				pan=1;
				break;
			}
			else
				if(a[i]==b[i])
			{
				ci++;
			}
		}
	   double bi=(double)ci/aa;
	  if(pan==0)
	  {
	    if(bi>=m)
		{
		printf("yes");
		}
	    else
		{
		printf("no");
		}
	  }
	}




	return 0;
}
