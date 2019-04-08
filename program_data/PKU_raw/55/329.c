int main ( )
{
	int n1,n2,l,t;long s=0;char number1[40],number2[40],*p;
	scanf("%d %s %d",&n1,number1,&n2);
	l=strlen(number1);
	for(p=number1;p<number1+l;p++)
	{
		if(*p>='0'&&*p<='9')
			t=*p-'0';
		else if(*p>='a'&&*p<='z')
			t=*p-'a'+10;
		else if(*p>='A'&&*p<='Z')
			t=*p-'A'+10;
		s=s*n1+t;
	}
	for(p=number2;1;p++)
	{
		if(s%n2>=0&&s%n2<=9)
			*p=s%n2+48;
		else if(s%n2>9)
			*p=s%n2+55;
		s=s/n2;
		if(s==0)
			break;
	}
	for(;p>=number2;p--)
		printf("%c",*p);
	printf("\n");
	return 0;
}