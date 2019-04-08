void main()
{
	char a;
	char num[500][6]={'\0'};
	int v[500]={0};
	int i,p,l,s=0,j=0,k=0,sign=0,max,max2;
 	for(i=0;;i++)
	{
		scanf("%c",&a);
		if(a!='\n'&&a!=',')
		{
			num[j][k]=a;
			k++;
		}
		else if(a==',')
		{
			j++;k=0;s++;
		}
		else break;
	}
	for(i=0;i<=499;i++)
	{
		l=strlen(num[i]);
		for(j=1,p=1;j<=l;j++)
		{
			v[i]=v[i]+(num[i][l-j]-'0')*p;
			p=p*10;
		}
	}
	for(i=0;i<=s;i++)
	{
		if(v[i]>max) max=v[i];
	}
	for(i=0;i<=s;i++)
	{
		if(v[i]>max2&&v[i]<max)
		{
			max2=v[i];
			sign=1;
		}
	}
	if(sign) printf("%d",max2);
		else printf("No");

}
 