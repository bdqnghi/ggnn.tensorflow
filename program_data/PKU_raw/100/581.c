void main()
{
	char a[300];
	int i,n,j,c[26]={0},b=0;
	scanf ("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a')
			c[0]++;
		else if(a[i]=='b')
			c[1]++;
		else if(a[i]=='c')
			c[2]++;
		else if(a[i]=='d')
			c[3]++;
		else if(a[i]=='e')
			c[4]++;
		else if(a[i]=='f')
			c[5]++;
		else if(a[i]=='g')
			c[6]++;
		else if(a[i]=='h')
			c[7]++;
		else if(a[i]=='i')
			c[8]++;
		else if(a[i]=='j')
			c[9]++;
		else if(a[i]=='k')
			c[10]++;
		else if(a[i]=='l')
			c[11]++;
		else if(a[i]=='m')
			c[12]++;
		else if(a[i]=='n')
			c[13]++;
		else if(a[i]=='o')
			c[14]++;
		else if(a[i]=='p')
			c[15]++;
		else if(a[i]=='q')
			c[16]++;
		else if(a[i]=='r')
			c[17]++;
		else if(a[i]=='s')
			c[18]++;
		else if(a[i]=='t')
			c[19]++;
		else if(a[i]=='u')
			c[20]++;
		else if(a[i]=='v')
			c[21]++;
		else if(a[i]=='w')
			c[22]++;
		else if(a[i]=='x')
			c[23]++;
		else if(a[i]=='y')
			c[24]++;
		else if(a[i]=='z')
			c[25]++;
	}

		i=0;
		for(j='a';j<='z';j++)
		{
			if(c[i]>0)
			{printf("%c=%d\n",j,c[i]);
			b++;}
			 
			i++;
		}
		if(b==0)
			printf("No");
		
}