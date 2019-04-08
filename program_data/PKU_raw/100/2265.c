int main()
{
	char s[301],letter;
	gets(s);
	int a[52]={0},m=0,n,i;
	n=strlen(s);
	for(i=0;i<n;i++)
	{     if(s[i]=='A')a[0]++;
	 else if(s[i]=='B')a[1]++;
	 else if(s[i]=='C')a[2]++;
	 else if(s[i]=='D')a[3]++;
	 else if(s[i]=='E')a[4]++;
	 else if(s[i]=='F')a[5]++;
	 else if(s[i]=='G')a[6]++;
     else if(s[i]=='H')a[7]++;
	 else if(s[i]=='I')a[8]++;
	 else if(s[i]=='J')a[9]++;
	 else if(s[i]=='K')a[10]++;
	 else if(s[i]=='L')a[11]++;
	 else if(s[i]=='M')a[12]++;
     else if(s[i]=='N')a[13]++;
	 else if(s[i]=='O')a[14]++;
	 else if(s[i]=='P')a[15]++;
	 else if(s[i]=='Q')a[16]++;
	 else if(s[i]=='R')a[17]++;
	 else if(s[i]=='S')a[18]++;
     else if(s[i]=='T')a[19]++;
	 else if(s[i]=='U')a[20]++;
	 else if(s[i]=='V')a[21]++;
	 else if(s[i]=='W')a[22]++;
	 else if(s[i]=='X')a[23]++;
	 else if(s[i]=='Y')a[24]++; 
	 else if(s[i]=='Z')a[25]++;
	 else if(s[i]=='a')a[26]++;
	 else if(s[i]=='b')a[27]++;
	 else if(s[i]=='c')a[28]++;
	 else if(s[i]=='d')a[29]++;
	 else if(s[i]=='e')a[30]++;
     else if(s[i]=='f')a[31]++;
	 else if(s[i]=='g')a[32]++;
	 else if(s[i]=='h')a[33]++;
	 else if(s[i]=='i')a[34]++;
	 else if(s[i]=='j')a[35]++;
	 else if(s[i]=='k')a[36]++; 
	 else if(s[i]=='l')a[37]++;
	 else if(s[i]=='m')a[38]++;
	 else if(s[i]=='n')a[39]++;
	 else if(s[i]=='o')a[40]++;
	 else if(s[i]=='p')a[41]++;
	 else if(s[i]=='q')a[42]++;
     else if(s[i]=='r')a[43]++;
	 else if(s[i]=='s')a[44]++;
	 else if(s[i]=='t')a[45]++;
	 else if(s[i]=='u')a[46]++;
	 else if(s[i]=='v')a[47]++;
	 else if(s[i]=='w')a[48]++; 
	 else if(s[i]=='x')a[49]++;
	 else if(s[i]=='y')a[50]++;
	 else if(s[i]=='z')a[51]++;
	}
	
    for(i=0;i<=25;i++)
		if(a[i]!=0){printf("%c=%d\n",i+'A',a[i]);m++;}
    for(i=26;i<=51;i++)
		if(a[i]!=0){printf("%c=%d\n",i+'a'-26,a[i]);m++;}
	if(m==0)printf("No");
}

