void main()
{
	char a[200],b[200];
	int a1=-1,a2=-1,alast,blength,i,j,n;
	gets(a);
	alast=strlen(a);
	blength=0;
	n=strlen(a);
	for(i=0;i<n;i++)
		if(a[i]==' '){a1=i;break;}
	for(i=0;i<n;i++)
		if(a[i]!=' '){a2=i;break;}
	if((a1!=-1)&&(a2!=-1))
    {
	for(i=n-1;i>=a1;i--)
	{
        if(a[i]==' ')
		{   
			for(j=0;j<alast-1-i;j++)
				b[blength+j]=a[i+1+j];
			b[blength+alast-1-i]=' ';
			blength=blength+alast-i;
			alast=i;
		}	
	}
	for(i=a2;i<a1;i++)
		b[blength+i]=a[a2+i];
	for(i=0;i<n-a2;i++)
		printf("%c",b[i]);
	}
	else if(a1==-1)
	{for(i=0;i<n;i++) printf("%c",a[i]);}

}