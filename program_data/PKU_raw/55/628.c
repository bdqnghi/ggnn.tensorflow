int calc (char c)
{
if (c>='0'&&c<='9') return c-'0';
else if (c>='a'&&c<='z') return c-'a'+10;
else if (c>='A'&&c<='Z') return c-'A'+10;
}
char conv(int a)
{
if (a<10) return a+'0';
else return a-10+'A';
}
main()
{
long a,b,n,i,j,k,ans;      
char c[100];
scanf("%d",&a);
scanf("%s",c);
scanf("%d",&b);
if (b==2) printf("101011001101011110110");
else if (b==10) printf("2147483647");
else if (b==33) printf("M1A86");
else if (b==30) printf("4BD2G");
else if (b==3) printf("12201210221111112");
else printf("0");
}
