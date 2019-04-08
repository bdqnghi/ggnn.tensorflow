

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
        case 'A':
			zhen=10;
		    break;
		case 'b':
		case 'B':
			zhen=11;
			break;
		case 'c':
		case 'C':
			zhen=12;
			break;
		case 'd':
		case 'D':
			zhen=13;
			break;
		case 'e':
		case 'E':
			zhen=14;
			break;
		case 'f':
        case 'F':
			zhen=15;
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
		}
	}
	i=i-1;
	for(;i>=0;i--){
		printf("%c",m[i]);
	}
	printf("\n");
	return 0;
}

 