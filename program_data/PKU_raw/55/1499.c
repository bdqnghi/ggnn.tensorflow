


char Change(int x);
int change(char x);
int main()
{
	int a,b,i,length,Length;
	char num[30],NUM[100];
	long number=0;
	cin>>a>>num>>b;
	for(i=0;i<30;i++)
	{
		if(num[i]!='\0') ;
		else break;
	}
	length=i;
	for(i=0;i<length;i++)
	{
          number+=change(num[length-i-1])*pow((double)a,(double)i);
	}
	for(i=0;i<100&&number>=b;i++)
	{
		NUM[i]=Change(number-(number/b)*b);
		number=number/b;
	}
	Length=i+1;
	NUM[i]=Change(number);
	for(i=0;i<Length;i++)
	{
		cout<<NUM[Length-1-i];
	}
    return 0;
}
 int change(char x)
 {
	if(x>=48&&x<=57) return(x-48);
	if(x>=65&&x<=90) return(x-55);
    if(x>=97&&x<=122) return(x-87);
 }
 char Change(int x)
 {
	 if(x<=9) return(x+48);
	 if(x>=10) return(x+55);
 }
