void main()
{
	int a,b;
	char n[100];
	scanf("%d %s %d",&a,n,&b);
	int i,j=0;
	int ten[100];
	for(i=0;n[i]!='\0';i++)
	{
		j++;
		switch(n[i])
		{
		case '0':
			ten[i]=0;
			break;
		case '1':
			ten[i]=1;
			break;
		case '2':
			ten[i]=2;
			break;
		case '3':
			ten[i]=3;
			break;
		case '4':
			ten[i]=4;
			break;
		case '5':
			ten[i]=5;
			break;
		case '6':
			ten[i]=6;
			break;
		case '7':
			ten[i]=7;
			break;
		case '8':
			ten[i]=8;
			break;
		case '9':
			ten[i]=9;
			break;				
		case 'A':
		case 'a':
			ten[i]=10;
			break;
		case 'B':
		case 'b':
			ten[i]=11;
			break;
		case 'C':
		case 'c':
			ten[i]=12;
			break;
		case 'D':
		case 'd':
			ten[i]=13;
			break;
		case 'E':
		case 'e':
			ten[i]=14;
			break;	
		case 'F':
		case 'f':
			ten[i]=15;
			break;
		case 'G':
		case 'g':
			ten[i]=16;
			break;
		case 'H':
		case 'h':
			ten[i]=17;
			break;
		case 'I':
		case 'i':
			ten[i]=18;
			break;
		case 'J':
		case 'j':
			ten[i]=19;
			break;
		case 'K':
		case 'k':
			ten[i]=20;
			break;
		case 'L':
		case 'l':
			ten[i]=21;
			break;
		case 'M':
		case 'm':
			ten[i]=22;
			break;
		case 'N':
		case 'n':
			ten[i]=23;
			break;
		case 'O':
		case 'o':
			ten[i]=24;
			break;
		case 'P':
		case 'p':
			ten[i]=25;
			break;
		case 'Q':
		case 'q':
			ten[i]=26;
			break;
		case 'R':
		case 'r':
			ten[i]=27;
			break;
		case 'S':
		case 's':
			ten[i]=28;
			break;
		case 'T':
		case 't':
			ten[i]=29;
			break;
		case 'U':
		case 'u':
			ten[i]=30;
			break;
		case 'V':
		case 'v':
			ten[i]=31;
			break;
		case 'W':
		case 'w':
			ten[i]=32;
			break;
		case 'X':
		case 'x':
			ten[i]=33;
			break;
		case 'Y':
		case 'y':
			ten[i]=34;
			break;
		case 'Z':
		case 'z':
			ten[i]=35;
			break;
		}
	}
	int te[100];
	te[0]=1;
	for(i=0;i<j;i++)
	{
		te[i+1]=te[i]*a;
	}
	int t=0;
	for(i=0;i<j;i++)
	{
		t+=te[i]*ten[j-i-1];
	}
	char m[100];
	int ben[100];
	j=0;
	if(t==0)
		printf("0\n");
	else
	{
	for(i=0;t!=0;i++)
	{
		j++;
		ben[i]=t%b;
		t=t/b;
	}
	for(i=0;i<j;i++)
	{
		switch(ben[j-1-i])
		{
		case 0:
			m[i]='0';
			break;
		case 1:
			m[i]='1';
			break;
		case 2:
			m[i]='2';
			break;
		case 3:
			m[i]='3';
			break;
		case 4:
			m[i]='4';
			break;
		case 5:
			m[i]='5';
			break;
		case 6:
			m[i]='6';
			break;
		case 7:
			m[i]='7';
			break;
		case 8:
			m[i]='8';
			break;
		case 9:
			m[i]='9';
			break;				
		case 10:
			m[i]='A';
			break;
		case 11:
			m[i]='B';
			break;
		case 12:
			m[i]='C';
			break;
		case 13:
			m[i]='D';
			break;
		case 14:
			m[i]='E';
			break;	
		case 15:
			m[i]='F';
			break;
		case 16:
			m[i]='G';
			break;
		case 17:
			m[i]='H';
			break;
		case 18:
			m[i]='I';
			break;
		case 19:
			m[i]='J';
			break;
		case 20:
			m[i]='K';
			break;
		case 21:
			m[i]='L';
			break;
		case 22:
			m[i]='M';
			break;
		case 23:
			m[i]='N';
			break;
		case 24:
			m[i]='O';
			break;
		case 25:
			m[i]='P';
			break;
		case 26:
			m[i]='Q';
			break;
		case 27:
			m[i]='R';
			break;
		case 28:
			m[i]='S';
			break;
		case 29:
			m[i]='T';
			break;
		case 30:
			m[i]='U';
			break;
		case 31:
			m[i]='V';
			break;
		case 32:
			m[i]='W';
			break;
		case 33:
			m[i]='X';
			break;
		case 34:
			m[i]='Y';
			break;
		case 35:
			m[i]='Z';
			break;
		}
	}
	for(i=0;i<j;i++)
		printf("%c",m[i]);
	printf("\n");
	}
}