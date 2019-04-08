void main()
{
	char s[10000];
	int i,l,a[400],k=1;
	char c;
	gets(s);
	l=0;
	k=0;
	for(i=0;(c=s[i])!='\0';i++)
	{
		if(c!=' ')l++;
		else
		{
			a[k]=l;
			k++;	l=0;
	}
		}
	

	if(k==0)printf("%d",l);
	else if(k>0){
		printf("%d",a[0]);
		for(i=1;i<k;i++)
			if(a[i]!=0)printf(",%d",a[i]);
		printf(",%d",l);}
}

