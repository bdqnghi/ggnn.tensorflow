int zheng(char x);
char fan(int x);


int main(int argc, char* argv[])
{
	int n,m,f,sum,i;
	char zhuan[50];
	scanf("%d",&n);
	char x[10];
	scanf("%s",x);
	scanf("%d",&m);
	f=strlen(x);
 

	sum=0;
	int wei=0;
	for(i=0;i<f;i++){
		sum=sum+zheng(x[i])*pow(n,f-i-1);
	}
	for(i=49;i>=0;i--){
		zhuan[i]=fan(sum%m);
		wei++;
		sum=sum/m;
		if(sum==0)
			break;
	}
	for(i=50-wei;i<50;i++){
		printf("%c",zhuan[i]);
	}
  return 0;
}
int zheng(char x){
	int m;
   switch(x){
     case '1':m=1;break;
     case '2':m=2;break;
     case '3':m=3;break;
     case '4':m=4;break;
	 case '5':m=5;break;
	case '6':m=6;break;
	case '7':m=7;break;
	case '8':m=8;break;
	 case '9':m=9;break;
	 case '0':m=0;break;
	 case 'a':m=10;break;
	case 'A':m=10;break;
	case 'b':m=11;break;
	case 'B':m=11;break;
    case 'c':m=12;break;
    case 'd':m=13;break;
	case 'e':m=14;break;
	case 'f':m=15;break;
	case 'g':m=16;break;
	case 'h':m=17;break;
    case 'i':m=18;break;
	case 'j':m=19;break;
	case 'k':m=20;break;
	case 'l':m=21;break;
	case 'm':m=22;break;
	case 'n':m=23;break;
	case 'o':m=24;break;
	case 'p':m=25;break;
	case 'q':m=26;break;
	case 'r':m=27;break;
	case 's':m=28;break;
	case 't':m=29;break;
	case 'u':m=30;break;
	case 'v':m=31;break;
	case 'w':m=32;break;
	case 'x':m=33;break;
	case 'y':m=34;break;
	case 'z':m=35;break;
	case 'C':m=12;break;
	case 'D':m=13;break;
	case 'E':m=14;break;
	case 'F':m=15;break;
	case 'G':m=16;break;
	case 'H':m=17;break;
	case 'I':m=18;break;
	case 'J':m=19;break;
	case 'K':m=20;break;
	case 'L':m=21;break;
	case 'M':m=22;break;
	case 'N':m=23;break;
	case 'O':m=24;break;
	case 'P':m=25;break;
	case 'Q':m=26;break;
	case 'R':m=27;break;
	case 'S':m=28;break;
	case 'T':m=29;break;
	case 'U':m=30;break;
	case 'V':m=31;break;
    case 'W':m=32;break;
	case 'X':m=33;break;
	case 'Y':m=34;break;
	case 'Z':m=35;break;
	 
   }
   return m;
}

char fan(int x){
	char m;
	switch(x){
	case 0:m='0';break;
	case 1:m='1';break;
	case 2:m='2';break;
	case 3:m='3';break;
	case 4:m='4';break;
	case 5:m='5';break;
	case 6:m='6';break;
	case 7:m='7';break;
	case 8:m='8';break;
	case 9:m='9';break;
	case 10:m='A';break;
	case 11:m='B';break;
	case 12:m='C';break;
	case 13:m='D';break;
	case 14:m='E';break;
	case 15:m='F';break;
	case 16:m='G';break;
	case 17:m='H';break;
	case 18:m='I';break;
	case 19:m='J';break;
	case 20:m='K';break;
	case 21:m='L';break;
	case 22:m='M';break;
	case 23:m='N';break;
	case 24:m='O';break;
	case 25:m='P';break;
	case 26:m='Q';break;
	case 27:m='R';break;
	case 28:m='S';break;
	case 29:m='T';break;
	case 30:m='U';break;
	case 31:m='V';break;
	case 32:m='W';break;
	case 33:m='X';break;
	case 34:m='Y';break;
	case 35:m='Z';break;
	
	}
	return m;
}






	

		
		


	
 
