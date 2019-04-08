char change(char x) 
{
	char a;
	switch (x) {
case 'a':a='A';break;
case 'b':a='B';break;
case 'c':a='C';break;
case 'd':a='D';break;
case 'e':a='E';break;
case 'f':a='F';break;
case 'g':a='G';break;
case 'h':a='H';break;
case 'i':a='I';break;
case 'j':a='J';break;
case 'k':a='K';break;
case 'l':a='L';break;
case 'm':a='M';break;
case 'n':a='N';break;
case 'o':a='O';break;
case 'p':a='P';break;
case 'q':a='Q';break;
case 'r':a='R';break;
case 's':a='S';break;
case 't':a='T';break;
case 'u':a='U';break;
case 'v':a='V';break;
case 'w':a='W';break;
case 'x':a='X';break;
case 'y':a='Y';break;
case 'z':a='Z';break;
	}
	return a;
}
int main(int argc, char* argv[])
{
	char c[80],s[80],p[80],q[80];
	gets(c);
	gets(s);
	int i;
	for(i=0;c[i]!='\0';i++) {
		if (c[i]<='z'&&c[i]>='a') {
		p[i]=change(c[i]);
		}
		else 
			p[i]=c[i];
	}
	p[i]='\0';
	for(i=0;s[i]!='\0';i++) {
		if (s[i]<='z'&&s[i]>='a') {
		q[i]=change(s[i]);
		}
		else 
			q[i]=s[i];
	}
	q[i]='\0';
	if(strcmp(p,q)==0) 
		printf("=");
	if(strcmp(p,q)<0) 
		printf("<");
	if(strcmp(p,q)>0) 
		printf(">");
	return 0;
}