int zhuan1(char xx){
	int x;

	switch(xx){
		case '0':x=0;break;
		case '1':x=1;break;
		case '2':x=2;break;
		case '3':x=3;break;
		case '4':x=4;break;
		case '5':x=5;break;
		case '6':x=6;break;
		case '7':x=7;break;
		case '8':x=8;break;
		case '9':x=9;break;
		case 'a':x=10;break;
        case 'b':x=11;break;
		case 'c':x=12;break;
		case 'd':x=13;break;
		case 'e':x=14;break;
		case 'f':x=15;break;
		case 'g':x=16;break;
		case 'h':x=17;break;
		case 'i':x=18;break;
		case 'j':x=19;break;
		case 'k':x=20;break;
		case 'l':x=21;break;
		case 'm':x=22;break;
		case 'n':x=23;break;
		case 'o':x=24;break;
		case 'p':x=25;break;
		case 'q':x=26;break;
		case 'r':x=27;break;
		case 's':x=28;break;
		case 't':x=29;break;
		case 'u':x=30;break;
		case 'v':x=31;break;
		case 'w':x=32;break;
		case 'x':x=33;break;
		case 'y':x=34;break;
		case 'z':x=35;break;
        case 'A':x=10;break;
        case 'B':x=11;break;
		case 'C':x=12;break;
		case 'D':x=13;break;
		case 'E':x=14;break;
		case 'F':x=15;break;
		case 'G':x=16;break;
		case 'H':x=17;break;
		case 'I':x=18;break;
		case 'J':x=19;break;
		case 'K':x=20;break;
		case 'L':x=21;break;
		case 'M':x=22;break;
		case 'N':x=23;break;
		case 'O':x=24;break;
		case 'P':x=25;break;
		case 'Q':x=26;break;
		case 'R':x=27;break;
		case 'S':x=28;break;
		case 'T':x=29;break;
		case 'U':x=30;break;
		case 'V':x=31;break;
		case 'W':x=32;break;
		case 'X':x=33;break;
		case 'Y':x=34;break;
		case 'Z':x=35;break;
} 
	return x;
}
char zhuan2(int yy){
	char tt;
switch(yy){
        case 0:tt='0';break;
		case 1:tt='1';break;
		case 2:tt='2';break;
		case 3:tt='3';break;
		case 4:tt='4';break;
		case 5:tt='5';break;
		case 6:tt='6';break;
		case 7:tt='7';break;
		case 8:tt='8';break;
		case 9:tt='9';break;
        case 10:tt='A';break;
        case 11:tt='B';break;
		case 12:tt='C';break;
		case 13:tt='D';break;
		case 14:tt='E';break;
		case 15:tt='F';break;
		case 16:tt='G';break;
		case 17:tt='H';break;
		case 18:tt='I';break;
		case 19:tt='J';break;
		case 20:tt='K';break;
		case 21:tt='L';break;
		case 22:tt='M';break;
		case 23:tt='N';break;
		case 24:tt='O';break;
		case 25:tt='P';break;
		case 26:tt='Q';break;
		case 27:tt='R';break;
		case 28:tt='S';break;
		case 29:tt='T';break;
		case 30:tt='U';break;
		case 31:tt='V';break;
		case 32:tt='W';break;
		case 33:tt='X';break;
		case 34:tt='Y';break;
		case 35:tt='Z';break;
		}
return tt;
}
int main(int argc, char* argv[])
{
	int n,m,x,k,i,j,count,y=0;
	char str[10];
		
	char str1[100];
	
	scanf("%d",&n);
	scanf("%s",str);
	scanf("%d",&m);
	count=strlen(str);

	
	for(i=0;i<=count-1;i++){
	x=zhuan1(str[i]);
		y=y+(x*(int)pow(n,count-1-i));

	}
	if(y==0){
		printf("0");
	return 0;
	}
	
	int count1=0;
	for(k=0,j=0;y!=0;k++,j++){
		
	str1[j]=zhuan2(y%m);
		y=y/m;
		count1++;
	}
	for(j=count1-1;j>=0;j--){
		
	
		printf("%c",str1[j]);
	}

	return 0;
}