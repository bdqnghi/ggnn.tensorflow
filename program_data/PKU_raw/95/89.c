int main(){
	char a[40];
	char b[40];
	int k,t;
	gets(a);
	gets(b);
    for(k=0;a[k]!='\0';k++){
		switch(a[k]){
		        case 'A':a[k]='a';break;
		        case 'B':a[k]='b';break;
                case 'C':a[k]='c';break;
		        case 'D':a[k]='d';break;
		        case 'E':a[k]='e';break;
		        case 'F':a[k]='f';break;
                case 'G':a[k]='g';break;
		        case 'H':a[k]='h';break;
                case 'I':a[k]='i';break;
		        case 'J':a[k]='j';break;
		        case 'K':a[k]='k';break;
		        case 'L':a[k]='l';break;
			    case 'M':a[k]='m';break;
		        case 'N':a[k]='n';break;
                case 'O':a[k]='o';break;
		        case 'P':a[k]='p';break;
		        case 'Q':a[k]='q';break;
		        case 'R':a[k]='r';break;
			    case 'S':a[k]='s';break;
		        case 'T':a[k]='t';break;
                case 'U':a[k]='u';break;
		        case 'V':a[k]='v';break;
		        case 'W':a[k]='w';break;
		        case 'X':a[k]='x';break;
 		        case 'Y':a[k]='y';break;
                case 'Z':a[k]='z';break;
		}
	}
    for(t=0;b[t]!='\0';t++){
		switch(b[t]){
                case 'A':b[t]='a';break;
				case 'B':b[t]='b';break;
                case 'C':b[t]='c';break;
		        case 'D':b[t]='d';break;
		        case 'E':b[t]='e';break;
		        case 'F':b[t]='f';break;
                case 'G':b[t]='g';break;
		        case 'H':b[t]='h';break;
                case 'I':b[t]='i';break;
		        case 'J':b[t]='j';break;
		        case 'K':b[t]='k';break;
		        case 'L':a[t]='l';break;
			    case 'M':b[t]='m';break;
		        case 'N':b[t]='n';break;
                case 'O':b[t]='o';break;
		        case 'P':b[t]='p';break;
		        case 'Q':b[t]='q';break;
		        case 'R':b[t]='r';break;
			    case 'S':b[t]='s';break;
		        case 'T':b[t]='t';break;
                case 'U':b[t]='u';break;
		        case 'V':b[t]='v';break;
		        case 'W':b[t]='w';break;
		        case 'X':b[t]='x';break;
 		        case 'Y':b[t]='y';break;
                case 'Z':b[t]='z';break;
		}
	}
	if(strcmp(a,b)<0){
		puts("<");
	}
	else if(strcmp(a,b)==0){
		puts("=");
	}
	else if(strcmp(a,b)>0){
		puts(">");
	}
	return 0;
}
