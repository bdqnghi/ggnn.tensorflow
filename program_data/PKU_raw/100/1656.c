int main()
{
	int b[60]={0};
	char a[300];
	char *p=a;
	scanf("%s",a);
	for(;*p!='\0';p++)
	{
		if(*p=='A') b[0]++;
		if(*p=='B')b[1]++;
		if(*p=='C')b[2]++;
		if(*p=='D')b[3]++;
		if(*p=='E')b[4]++;
		if(*p=='F')b[5]++;
		if(*p=='G')b[6]++;
		if(*p=='H')b[7]++;
		if(*p=='I')b[8]++;
		if(*p=='J')b[9]++;
		if(*p=='K')b[10]++;
		if(*p=='L')b[11]++;
		if(*p=='M')b[12]++;
		if(*p=='N')b[13]++;
		if(*p=='O')b[14]++;
		if(*p=='P')b[15]++;
		if(*p=='Q')b[16]++;
		if(*p=='R')b[17]++;
		if(*p=='S')b[18]++;
		if(*p=='T')b[19]++;
		if(*p=='U')b[20]++;
		if(*p=='V')b[21]++;
		if(*p=='W')b[22]++;
		if(*p=='X')b[23]++;
		if(*p=='Y')b[24]++;
		if(*p=='Z')b[25]++;
		if(*p=='a')b[26]++;
		if(*p=='b')b[27]++;
		if(*p=='c')b[28]++;
		if(*p=='d')b[29]++;
		if(*p=='e')b[30]++;
		if(*p=='f')b[31]++;
		if(*p=='g')b[32]++;
		if(*p=='h')b[33]++;
	        if(*p=='i')b[34]++;
		if(*p=='j')b[35]++;
		if(*p=='k')b[36]++;
		if(*p=='l')b[37]++;
		if(*p=='m')b[38]++;
		if(*p=='n')b[39]++;
		if(*p=='o')b[40]++;
		if(*p=='p')b[41]++;
		if(*p=='q')b[42]++;
		if(*p=='r')b[43]++;
		if(*p=='s')b[44]++;
		if(*p=='t')b[45]++;
		if(*p=='u')b[46]++;
     	        if(*p=='v')b[47]++;
		if(*p=='w')b[48]++;
		if(*p=='x')b[49]++;
		if(*p=='y')b[50]++;
		if(*p=='z')b[51]++;
	}
	int i,n=0;
	char g[60]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",*s;
	s=g;
	for(i=0;i<52;i++,s++)
	{
		char v;
		v=*s;
		if(b[i]!=0)
		{
			printf("%c=%d\n",v,b[i]);
			n++;
		}

	}
	if(n==0)
        printf("No\n");
	return 0;
}
 