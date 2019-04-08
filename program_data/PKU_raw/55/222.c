int main()
{
	long int a,b,i,m,j=0,c=0,d=0,k=0;
	char s[100];
	scanf("%d %s %d",&a,s,&b);
	char x[100];
	if(s[0]!=0)
	{
        for(i=0;s[i]!='\0';i++)
		{
		    if(s[i]=='9')
			s[i]=9;
		else if(s[i]=='8')
			s[i]=8;
		else if(s[i]=='7')
			s[i]=7;
		else if(s[i]=='6')
			s[i]=6;
		else if(s[i]=='5')
			s[i]=5;
		else if(s[i]=='4')
			s[i]=4;
		else if(s[i]=='3')
			s[i]=3;
		else if(s[i]=='2')
			s[i]=2;
		else if(s[i]=='1')
			s[i]=1;
		else if(s[i]=='0')
			s[i]=0;
		else if(s[i]=='A'||s[i]=='a')
			s[i]=10;
		else if(s[i]=='B'||s[i]=='b')
			s[i]=11;
		else if(s[i]=='C'||s[i]=='c')
			s[i]=12;
		else if(s[i]=='D'||s[i]=='d')
			s[i]=13;
		else if(s[i]=='E'||s[i]=='e')
			s[i]=14;
		else if(s[i]=='F'||s[i]=='f')
			s[i]=15;
		else if(s[i]=='G'||s[i]=='g')
			s[i]=16;
		else if(s[i]=='H'||s[i]=='h')
			s[i]=17;
		else if(s[i]=='I'||s[i]=='i')
			s[i]=18;
		else if(s[i]=='J'||s[i]=='j')
			s[i]=19;
		else if(s[i]=='K'||s[i]=='k')
			s[i]=20;
		else if(s[i]=='L'||s[i]=='l')
			s[i]=21;
		else if(s[i]=='M'||s[i]=='m')
			s[i]=22;
		else if(s[i]=='N'||s[i]=='n')
			s[i]=23;
		else if(s[i]=='O'||s[i]=='o')
			s[i]=24;
		else if(s[i]=='P'||s[i]=='p')
			s[i]=25;
		else if(s[i]=='Q'||s[i]=='q')
			s[i]=26;
		else if(s[i]=='R'||s[i]=='r')
			s[i]=27;
		else if(s[i]=='S'||s[i]=='s')
			s[i]=28;
		else if(s[i]=='T'||s[i]=='t')
			s[i]=29;
		else if(s[i]=='U'||s[i]=='u')
			s[i]=30;
		else if(s[i]=='V'||s[i]=='v')
			s[i]=31;
		else if(s[i]=='W'||s[i]=='w')
			s[i]=32;
		else if(s[i]=='X'||s[i]=='w')
			s[i]=33;
		else if(s[i]=='Y'||s[i]=='y')
			s[i]=34;
		else if(s[i]=='Z'||s[i]=='z')
			s[i]=35;
		j++;
	}
	for(i=0;i<j;i++)
	{
		m=pow(a,j-i-1);
		c=s[i]*m;
		d=d+c;
	}
	for(i=0;d!=0;i++)
	{
		x[i]=d%b;
		d=d/b;
		k++;
	}
	for(i=0;i<k;i++)
	{
        if(x[i]==35)
			x[i]='Z';
		else if(x[i]==34)
			x[i]='Y';
		else if(x[i]==33)
			x[i]='X';
		else if(x[i]==32)
			x[i]='W';
		else if(x[i]==31)
			x[i]='V';
		else if(x[i]==30)
			x[i]='U';
		else if(x[i]==29)
			x[i]='T';
		else if(x[i]==28)
			x[i]='S';
		else if(x[i]==27)
			x[i]='R';
		else if(x[i]==26)
			x[i]='Q';
		else if(x[i]==25)
			x[i]='P';
		else if(x[i]==24)
			x[i]='O';
		else if(x[i]==23)
			x[i]='N';
		else if(x[i]==22)
			x[i]='M';
		else if(x[i]==21)
			x[i]='L';
		else if(x[i]==20)
			x[i]='K';
		else if(x[i]==19)
			x[i]='J';
		else if(x[i]==18)
			x[i]='I';
		else if(x[i]==17)
			x[i]='H';
		else if(x[i]==16)
			x[i]='G';
		else if(x[i]==15)
			x[i]='F';
		else if(x[i]==14)
			x[i]='E';
		else if(x[i]==13)
			x[i]='D';
		else if(x[i]==12)
			x[i]='C';
		else if(x[i]==11)
			x[i]='B';
		else if(x[i]==10)
			x[i]='A';
		else if(x[i]==9)
			x[i]='9';
		else if(x[i]==8)
			x[i]='8';
		else if(x[i]==7)
			x[i]='7';
		else if(x[i]==6)
			x[i]='6';
		else if(x[i]==5)
			x[i]='5';
		else if(x[i]==4)
			x[i]='4';
		else if(x[i]==3)
			x[i]='3';
		else if(x[i]==2)
			x[i]='2';
		else if(x[i]==1)
			x[i]='1';
		else if(x[i]==0)
			x[i]='0';
	}
	for(i=k-1;i>=0;i--)
	{
		printf("%c",x[i]);
	}
	}
	if(s[0]==0)
		printf("0\n");
	return 0;
}
