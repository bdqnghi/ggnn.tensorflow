void main()
{
	char a[300];
	int n,i,b[26];
	for(i=0;i<26;i++)
		b[i]=0;
	for(i=0;i<300&&(a[i]=getchar())!='\n';i++)
	{
		if(a[i]=='a')
			b[0]++;
		else if(a[i]=='b')
			b[1]++;
		else if(a[i]=='c')
			b[2]++;
		else if(a[i]=='d')
			b[3]++;
		else if(a[i]=='e')
			b[4]++;
		else if(a[i]=='f')
			b[5]++;
		else if(a[i]=='g')
			b[6]++;
		else if(a[i]=='h')
			b[7]++;
		else if(a[i]=='i')
			b[8]++;
		else if(a[i]=='j')
			b[9]++;
		else if(a[i]=='k')
			b[10]++;
		else if(a[i]=='l')
			b[11]++;
		else if(a[i]=='m')
			b[12]++;
		else if(a[i]=='n')
			b[13]++;
		else if(a[i]=='o')
			b[14]++;
		else if(a[i]=='p')
			b[15]++;
		else if(a[i]=='q')
			b[16]++;
		else if(a[i]=='r')
			b[17]++;
		else if(a[i]=='s')
			b[18]++;
		else if(a[i]=='t')
			b[19]++;
		else if(a[i]=='u')
			b[20]++;
		else if(a[i]=='v')
			b[21]++;
		else if(a[i]=='w')
			b[22]++;
		else if(a[i]=='x')
			b[23]++;
		else if(a[i]=='y')
			b[24]++;
		else if(a[i]=='z')
			b[25]++;
	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
			break;
		else
		{
			printf("No");
			break;
		}

	}
	for(i=0;i<26;i++)
	{
		if(b[i]!=0)
			printf("%c=%d\n",i+97,b[i]);
	}
}