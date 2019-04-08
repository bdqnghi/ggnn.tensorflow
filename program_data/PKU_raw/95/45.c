
int lwr(char *a)
{
	for(;*a!='\0';a++){
		
		switch(*a){
		case 'A':*a='a';break;
		case 'B':*a='b';break;
		case 'C':*a='c';break;
		case 'D':*a='d';break;
		case 'E':*a='e';break;
		case 'F':*a='f';break;
		case 'G':*a='g';break;
		case 'H':*a='h';break;
		case 'I':*a='i';break;
		case 'J':*a='j';break;
		case 'K':*a='k';break;
		case 'L':*a='l';break;
		case 'M':*a='m';break;
		case 'N':*a='n';break;
		case 'O':*a='o';break;
		case 'P':*a='p';break;
		case 'Q':*a='q';break;
		case 'R':*a='r';break;
		case 'S':*a='s';break;
		case 'T':*a='t';break;
		case 'U':*a='u';break;
		case 'V':*a='v';break;
		case 'W':*a='w';break;
		case 'X':*a='x';break;
	    case 'Y':*a='y';break;
        case 'Z':*a='z';break;
		}
	}
	return 0;
}

int main(int argc, char* argv[])
{
	char str1[82],str2[82],chu;
	int a;
	gets(str1);
	gets(str2);
	lwr(str1);
	lwr(str2);
    a=strcmp(str1,str2);
	if(a>0)chu='>';
	else if(a<0)chu='<';
	else chu='=';		
	printf("%c\n",chu);
	return 0;
}
