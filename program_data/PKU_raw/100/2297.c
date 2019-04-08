void main()
{
	char a[300]={'\0'};
	int i,b[60]={0},c=0;
	gets(a);
    for(i=0;i<300;i++)
	{
		if(a[i]=='A')b[0]+=1;
		else if(a[i]=='B')b[1]+=1;
		else if(a[i]=='C')b[2]+=1;
		else if(a[i]=='D')b[3]+=1;
		else if(a[i]=='E')b[4]+=1;
		else if(a[i]=='F')b[5]+=1;
		else if(a[i]=='G')b[6]+=1;
		else if(a[i]=='H')b[7]+=1;
		else if(a[i]=='I')b[8]+=1;
		else if(a[i]=='J')b[9]+=1;
		else if(a[i]=='K')b[10]+=1;
		else if(a[i]=='L')b[11]+=1;
		else if(a[i]=='M')b[12]+=1;
		else if(a[i]=='N')b[13]+=1;
		else if(a[i]=='O')b[14]+=1;
		else if(a[i]=='P')b[15]+=1;
		else if(a[i]=='Q')b[16]+=1;
		else if(a[i]=='R')b[17]+=1;
        else if(a[i]=='S')b[18]+=1;
		else if(a[i]=='T')b[19]+=1;
		else if(a[i]=='U')b[20]+=1;
		else if(a[i]=='V')b[21]+=1;
		else if(a[i]=='W')b[22]+=1;
		else if(a[i]=='X')b[23]+=1;
		else if(a[i]=='Y')b[24]+=1;
		else if(a[i]=='Z')b[25]+=1;
		else if(a[i]=='a')b[26]+=1;
		else if(a[i]=='b')b[27]+=1;
		else if(a[i]=='c')b[28]+=1;
		else if(a[i]=='d')b[29]+=1;
		else if(a[i]=='e')b[30]+=1;
		else if(a[i]=='f')b[31]+=1;
		else if(a[i]=='g')b[32]+=1;
		else if(a[i]=='h')b[33]+=1;
		else if(a[i]=='i')b[34]+=1;
		else if(a[i]=='j')b[35]+=1;
		else if(a[i]=='k')b[36]+=1;
		else if(a[i]=='l')b[37]+=1;
		else if(a[i]=='m')b[38]+=1;
		else if(a[i]=='n')b[39]+=1;
		else if(a[i]=='o')b[40]+=1;
		else if(a[i]=='p')b[41]+=1;
		else if(a[i]=='q')b[42]+=1;
        else if(a[i]=='r')b[43]+=1;
		else if(a[i]=='s')b[44]+=1;
		else if(a[i]=='t')b[45]+=1;
		else if(a[i]=='u')b[46]+=1;
		else if(a[i]=='v')b[47]+=1;
		else if(a[i]=='w')b[48]+=1;
		else if(a[i]=='x')b[49]+=1;
		else if(a[i]=='y')b[50]+=1;
		else if(a[i]=='z')b[51]+=1;
	}
	for(i=0;i<26;i++)
		{
			if(b[i]!=0)
			{
				printf("%c=%d\n",i+65,b[i]);
		    	c=1;
			}
		}
		for(i=26;i<52;i++)
		{
			if(b[i]!=0)
			{
				printf("%c=%d\n",i+71,b[i]);
				c=1;
			}
		}
		if(c==0)printf("No");

}