
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	if((n+12)%7==5)printf("1\n");
    if((n+12+31)%7==5)printf("2\n");
    if((n+12+59)%7==5)printf("3\n");
    if((n+12+90)%7==5)printf("4\n");
    if((n+12+120)%7==5)printf("5\n");
    if((n+12+151)%7==5)printf("6\n");
    if((n+12+181)%7==5)printf("7\n");
    if((n+12+212)%7==5)printf("8\n");
    if((n+12+243)%7==5)printf("9\n");
    if((n+12+273)%7==5)printf("10\n");
    if((n+12+304)%7==5)printf("11\n");
    if((n+12+334)%7==5)printf("12\n");
	return 0;
}
