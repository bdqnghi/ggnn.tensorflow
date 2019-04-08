

int main(){
	int a,b,i,zhen,chu,result;
	long x=0;
	char n[32],m[32];
	scanf("%d%s%d",&a,n,&b);
	result=strlen(n);
	 
	for(i=0;i<result;i++){
		switch(n[i]){
		case '0':zhen=0;break;
		case '1':zhen=1;break;
		case '2':zhen=2;break;
        case '3':zhen=3;break;
		case '4':zhen=4;break;
		case '5':zhen=5;break;
		case '6':zhen=6;break;
		case '7':zhen=7;break;
		case '8':zhen=8;break;
		case '9':zhen=9;break;
		case 'a':
        case 'A':zhen=10;
		    break;
		case 'b':
		case 'B':zhen=11;
			break;
		case 'c':
		case 'C':zhen=12;
			break;
		case 'd':
		case 'D':zhen=13;
			break;
		case 'e':
		case 'E':zhen=14;
			break;
		case 'f':
        case 'F':zhen=15;
			break;
		case 'g':
		case 'G':zhen=16;
			break;
		case 'h':
		case 'H':zhen=17;
			break;
		case 'i':
		case 'I':zhen=18;
			break;
		case 'j':
		case 'J':zhen=19;
			break;
		case 'k':
		case 'K':zhen=20;
			break;
		case 'l':
		case 'L':zhen=21;
			break;
		case 'm':
		case 'M':zhen=22;
			break;
		case 'n':
		case 'N':zhen=23;
			break;
		case 'o':
		case 'O':zhen=24;
			break;
		case 'p':
		case 'P':zhen=25;
			break;
		case 'q':
		case 'Q':zhen=26;
			break;
		case 'r':
		case 'R':zhen=27;
			break;
		case 's':
		case 'S':zhen=28;
			break;
		case 't':
		case 'T':zhen=29;
			break;
		case 'u':
		case 'U':zhen=30;
			break;
		case 'v':
		case 'V':zhen=31;
			break;
		case 'w':
		case 'W':zhen=32;
			break;
		case 'x':
		case 'X':zhen=33;
			break;
		case 'y':
		case 'Y':zhen=34;
			break;
		case 'z':
		case 'Z':zhen=35;
			break;

		}
		x+=zhen*pow(a,result-1-i);
	}
	for(i=0;x>0;i++){
		chu=x%b;
		x=x/b;
		switch(chu){
        case 0:m[i]='0';break;
		case 1:m[i]='1';break;
        case 2:m[i]='2';break;
		case 3:m[i]='3';break;
        case 4:m[i]='4';break;
		case 5:m[i]='5';break;
		case 6:m[i]='6';break;
		case 7:m[i]='7';break;
		case 8:m[i]='8';break;
		case 9:m[i]='9';break;
		case 10:m[i]='A';break;
		case 11:m[i]='B';break;
		case 12:m[i]='C';break;
		case 13:m[i]='D';break;
		case 14:m[i]='E';break;
		case 15:m[i]='F';break;
		case 16:m[i]='G';break;
		case 17:m[i]='H';break;
		case 18:m[i]='I';break;
		case 19:m[i]='J';break;
		case 20:m[i]='K';break;
		case 21:m[i]='L';break;
		case 22:m[i]='M';break;
		case 23:m[i]='N';break;
		case 24:m[i]='O';break;
		case 25:m[i]='P';break;
		case 26:m[i]='Q';break;
		case 27:m[i]='R';break;
		case 28:m[i]='S';break;
		case 29:m[i]='T';break;
		case 30:m[i]='U';break;
		case 31:m[i]='V';break;
		case 32:m[i]='W';break;
		case 33:m[i]='X';break;
		case 34:m[i]='Y';break;
		case 35:m[i]='Z';break;
		}
	}
	i=i-1;
	for(;i>=0;i--){
		printf("%c",m[i]);
	}
	printf("\n");
	return 0;
}