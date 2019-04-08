int main()
{   
	int count(int,int);
	int a,b,len1,len2,i,m=0,x=0;
	long int t=0,r;
	char n[20],s[50]={'\0'};
	scanf("%d %s %d",&a,n,&b);
    len1=strlen(n);
	for(i=len1-1;i>=0;i--)
	{
		switch(n[i])
		{
		case '0':t=t;break;
		case '1':t=t+count(a,len1-1-i);break;
		case '2':t=t+2*(count(a,len1-1-i));break;
		case '3':t=t+3*(count(a,len1-1-i));break;
		case '4':t=t+4*(count(a,len1-1-i));break;
		case '5':t=t+5*(count(a,len1-1-i));break;
		case '6':t=t+6*(count(a,len1-1-i));break;
		case '7':t=t+7*(count(a,len1-1-i));break;
		case '8':t=t+8*(count(a,len1-1-i));break;
		case '9':t=t+9*(count(a,len1-1-i));break;
		case 'a':t=t+10*(count(a,len1-1-i));break;
		case 'A':t=t+10*(count(a,len1-1-i));break;
		case 'b':t=t+11*(count(a,len1-1-i));break;
		case 'B':t=t+11*(count(a,len1-1-i));break;
		case 'c':t=t+12*(count(a,len1-1-i));break;
		case 'C':t=t+12*(count(a,len1-1-i));break;
		case 'd':t=t+13*(count(a,len1-1-i));break;
	    case 'D':t=t+13*(count(a,len1-1-i));break;
		case 'e':t=t+14*(count(a,len1-1-i));break;
		case 'E':t=t+14*(count(a,len1-1-i));break;
		case 'f':t=t+15*(count(a,len1-1-i));break;
		case 'F':t=t+15*(count(a,len1-1-i));break;
		case 'g':t=t+16*(count(a,len1-1-i));break;
		case 'G':t=t+16*(count(a,len1-1-i));break;
		case 'h':t=t+17*(count(a,len1-1-i));break;
		case 'H':t=t+17*(count(a,len1-1-i));break;
		case 'i':t=t+18*(count(a,len1-1-i));break;
		case 'I':t=t+18*(count(a,len1-1-i));break;
		case 'j':t=t+19*(count(a,len1-1-i));break;
		case 'J':t=t+19*(count(a,len1-1-i));break;
		case 'k':t=t+20*(count(a,len1-1-i));break;
		case 'K':t=t+20*(count(a,len1-1-i));break;
		case 'l':t=t+21*(count(a,len1-1-i));break;
		case 'L':t=t+21*(count(a,len1-1-i));break;
		case 'm':t=t+22*(count(a,len1-1-i));break;
		case 'M':t=t+22*(count(a,len1-1-i));break;
		case 'n':t=t+23*(count(a,len1-1-i));break;
		case 'N':t=t+23*(count(a,len1-1-i));break;
		case 'o':t=t+24*(count(a,len1-1-i));break;
		case 'O':t=t+24*(count(a,len1-1-i));break;
		case 'p':t=t+25*(count(a,len1-1-i));break;
		case 'P':t=t+25*(count(a,len1-1-i));break;
		case 'q':t=t+26*(count(a,len1-1-i));break;
		case 'Q':t=t+26*(count(a,len1-1-i));break;
		case 'r':t=t+27*(count(a,len1-1-i));break;
		case 'R':t=t+27*(count(a,len1-1-i));break;
		case 's':t=t+28*(count(a,len1-1-i));break;
		case 'S':t=t+28*(count(a,len1-1-i));break;
		case 't':t=t+29*(count(a,len1-1-i));break;
		case 'T':t=t+29*(count(a,len1-1-i));break;
		case 'u':t=t+30*(count(a,len1-1-i));break;
			case 'U':t=t+30*(count(a,len1-1-i));break;
			case 'v':t=t+31*(count(a,len1-1-i));break;
			case 'V':t=t+31*(count(a,len1-1-i));break;
			case 'w':t=t+32*(count(a,len1-1-i));break;
			case 'W':t=t+32*(count(a,len1-1-i));break;
			case 'x':t=t+33*(count(a,len1-1-i));break;
			case 'X':t=t+33*(count(a,len1-1-i));break;
			case 'y':t=t+34*(count(a,len1-1-i));break;
			case 'Y':t=t+34*(count(a,len1-1-i));break;
			case 'z':t=t+20*(count(a,len1-1-i));break;
			case 'Z':t=t+20*(count(a,len1-1-i));break;
		}
	}
	r=t; 
	do
	{   
		t=r;
		x=t%b;
		if(x>=0&&x<=9)
		{
		 s[m]=x+48;m++;
		}
		if(x>9)
		{
		 s[m]=x+55;m++;
		}
		r=t/b;
	}while(r>=b);
	if(r>0&&r<=9)
		{
		 s[m]=r+48;
		}
	if(r>9)
		{
			s[m]=r+55;
		}
	len2=strlen(s);
	for(i=len2-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	return 0;
}
int count(int a,int h)
{
	int y,s=1;
	if(h==0) s=1;
	else
	{
		for(y=0;y<h;y++)
		{
		s=s*a;
		}
	}
	return s;

}