char change(char a)
{
	char x;
	switch(a) {
	case 'A':x='a';break;
    case 'B':x='b';break;
	case 'C':x='c';break;
    case 'D':x='d';break;
	case 'E':x='e';break;
    case 'F':x='f';break;
	case 'G':x='g';break;
    case 'H':x='h';break;
    case 'I':x='i';break;
	case 'J':x='j';break;
    case 'K':x='k';break;
	case 'L':x='l';break;
    case 'M':x='m';break;
	case 'N':x='n';break;
    case 'O':x='o';break;
	case 'P':x='p';break;
    case 'Q':x='q';break;
	case 'R':x='r';break;
    case 'S':x='s';break;
    case 'T':x='t';break;
	case 'U':x='u';break;
    case 'V':x='v';break;
	case 'W':x='w';break;
    case 'X':x='x';break;
	case 'Y':x='y';break;
    case 'Z':x='z';break;
    }
	return x;
}
int main(int argc, char* argv[])
{
    char s[100],t[100],p[100],q[100];
	int i;
	gets(s);
	gets(t);
	for (i=0;s[i]!='\0';i++) {
		p[i]=change(s[i]);
	}
	p[i-1]='\0';
	for (i=0;t[i]!='\0';i++) {
		q[i]=change(t[i]);
	}
	q[i-1]='\0';
	if(strcmp(p,q)<0) 
		printf("<");
	if(strcmp(p,q)>0) 
		printf(">");
	if(strcmp(p,q)==0) 
		printf("=");
	return 0;
}



