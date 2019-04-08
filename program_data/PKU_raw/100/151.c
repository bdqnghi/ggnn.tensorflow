void main()
{
	int b[27];
	char a[300],c[27]={' '};
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=1;i<=26;i++)
		c[i]='a'+i-1;
	for(i=0;i<=26;i++)
		b[i]=0;
	for(i=0;i<n;i++)
	{
		if(a[i]=='a')
			b[1]++;
		else if(a[i]=='b')
			b[2]++;
			else if(a[i]=='c')
			b[3]++;
	else if(a[i]=='d')
			b[4]++;
	else if(a[i]=='e')
			b[5]++;
	else if(a[i]=='f')
			b[6]++;
	else if(a[i]=='g')
			b[7]++;
	else if(a[i]=='h')
			b[8]++;
	else if(a[i]=='i')
			b[9]++;
	else if(a[i]=='j')
			b[10]++;
	else if(a[i]=='k')
			b[11]++;
	else if(a[i]=='l')
			b[12]++;
	else if(a[i]=='m')
			b[13]++;
	else if(a[i]=='n')
			b[14]++;
	else if(a[i]=='o')
			b[15]++;
	else if(a[i]=='p')
			b[16]++;
	else if(a[i]=='q')
			b[17]++;
	else if(a[i]=='r')
			b[18]++;
	else if(a[i]=='s')
			b[19]++;
	else if(a[i]=='t')
			b[20]++;
	else if(a[i]=='u')
			b[21]++;
	else if(a[i]=='v')
			b[22]++;
	else if(a[i]=='w')
			b[23]++;
	else if(a[i]=='x')
			b[24]++;
	else if(a[i]=='y')
			b[25]++;
	else if(a[i]=='z')
			b[26]++;
	}
	for(i=1;i<=26;i++)
	{	if(b[i]!=0)break;}
	if(i>=27)printf("No");
	
	for(i=1;i<=26;i++)
	{
		if(b[i]!=0)
			printf("%c=%d\n",c[i],b[i]);
	}
}
	



