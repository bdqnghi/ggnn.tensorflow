

int main(int argc, char* argv[])
{
	int a,b;
	int i,j;
	int c=0;//c????n???
	char n[20];
	int num=0;//10????????

    scanf("%d%s%d",&a,n,&b);

	int k;//k??????(??a????????)

	//????n???
	for(i=0;n[i]!='\0';i++)
	{c++;}

	//???n???10???
	for(i=0;n[i]!='\0';i++)
	{
		k=1;
		for(j=c-i-1;j>0;j--)
		{
	        k*=a;
		}

		switch (n[i])
		{
		case 'a': num+=10*k;break;
		case 'A': num+=10*k;break;
		case 'b': num+=11*k;break;
		case 'B': num+=11*k;break;
		case 'c': num+=k*12;break;
		case 'C': num+=k*12;break;
		case 'd': num+=k*13;break;
		case 'D': num+=k*13;break;
		case 'e': num+=k*14;break;
		case 'E': num+=k*14;break;
		case 'f': num+=k*15;break;
		case 'F': num+=k*15;break;
		case 'g': num+=k*16;break;
		case 'G': num+=k*16;break;
		case 'h': num+=k*17;break;
		case 'H': num+=k* 17;break;
		case 'i': num+=k* 18;break;
		case 'I': num+=k* 18;break;
		case 'j': num+=k* 19;break;
		case 'J': num+=k* 19;break;
		case 'k': num+=k* 20;break;
		case 'K': num+=k* 20;break;
		case 'l': num+=k* 21;break;
		case 'L': num+=k* 21;break;
		case 'm': num+=k* 22;break;
		case 'M': num+=k* 22;break;
		case 'n': num+=k* 23;break;
		case 'N':num+=k* 23;break;
		case 'o':num+=k* 24;break;
		case 'O':num+=k* 24;break;
		case 'p':num+=k* 25;break;
		case 'P':num+=k* 25;break;
		case 'q':num+=k* 26;break;
		case 'Q':num+=k* 26;break;
		case 'r':num+=k* 27;break;
		case 'R':num+=k* 27;break;
		case 's':num+=k* 28;break;
		case 'S':num+=k* 28;break;
		case 't':num+=k* 29;break;
		case 'T':num+=k* 29;break;
		case 'u':num+=k* 30;break;
		case 'U':num+=k* 30;break;
		case 'v':num+=k* 31;break;
		case 'V':num+=k* 31;break;
		case 'w':num+=k* 32;break;
		case 'W':num+=k* 32;break;
		case 'x':num+=k* 33;break;
		case 'X':num+=k* 33;break;
		case 'y':num+=k* 34;break;
		case 'Y':num+=k* 34;break;
		case 'z':num+=k* 35;break;
		case 'Z':num+=k* 35;break;
		case '0':num+=k* 0;break;
		case '1':num+=k* 1;break;
        case '2':num+=k* 2;break;
        case '3':num+=k* 3;break;
        case '4':num+=k* 4;break;
        case '5':num+=k* 5;break;
        case '6':num+=k* 6;break;
        case '7':num+=k* 7;break;
        case '8':num+=k* 8;break;
        case '9':num+=k* 9;break;

		}
	}
	

	int p[20];
	int q,count=0;
	for(i=0;(num/b)>0;i++)
	{
		q=num%b;
		p[i]=q;
		count++;
		num=num/b;
	}
		switch (num)
		{
		case 10:printf("A");break;
		case 11:printf("B");break;
		case 12:printf("C");break;
		case 13:printf("D");break;
		case 14:printf("E");break;
		case 15:printf("F");break;
		case 16:printf("G");break;
		case 17:printf("H");break;
		case 18:printf("I");break;
		case 19:printf("J");break;
		case 20:printf("K");break;
		case 21:printf("L");break;
		case 22:printf("M");break;
		case 23:printf("N");break;
		case 24:printf("O");break;
		case 25:printf("P");break;
		case 26:printf("Q");break;
		case 27:printf("R");break;
		case 28:printf("S");break;
		case 29:printf("T");break;
		case 30:printf("U");break;
		case 31:printf("V");break;
		case 32:printf("W");break;
		case 33:printf("X");break;
		case 34:printf("Y");break;
		case 35:printf("Z");break;
		default:printf("%d",num);break;
		}
    
    for(i=count-1;i>=0;i--)
	{
		switch (p[i])
		{
		case 10:printf("A");break;
		case 11:printf("B");break;
		case 12:printf("C");break;
		case 13:printf("D");break;
		case 14:printf("E");break;
		case 15:printf("F");break;
		case 16:printf("G");break;
		case 17:printf("H");break;
		case 18:printf("I");break;
		case 19:printf("J");break;
		case 20:printf("K");break;
		case 21:printf("L");break;
		case 22:printf("M");break;
		case 23:printf("N");break;
		case 24:printf("O");break;
		case 25:printf("P");break;
		case 26:printf("Q");break;
		case 27:printf("R");break;
		case 28:printf("S");break;
		case 29:printf("T");break;
		case 30:printf("U");break;
		case 31:printf("V");break;
		case 32:printf("W");break;
		case 33:printf("X");break;
		case 34:printf("Y");break;
		case 35:printf("Z");break;
		default:printf("%d",p[i]);break;
		}
	}

	return 0;
}

