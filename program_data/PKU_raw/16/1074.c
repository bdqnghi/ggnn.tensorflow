
int main(int argc, char* argv[])
{
int a;
scanf("%d",&a);
if(a==0) printf("0");
while(a>0){
printf("%d",a%10);
a/=10;
}
	return 0;
}
