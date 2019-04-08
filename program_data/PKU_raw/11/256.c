int main()
{
    int year[6],month[6],day[6],s[6]={0};
	int i=1,n;
    int m[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    n=1;
	while (n<=5)
	{
    scanf("%d %d %d",&year[n],&month[n],&day[n]);
    if ((year[n]%4==0 && year[n] % 100 !=0 ) || year[n] % 400 == 0)  
    m[2]=29;else m[2]=28;
    while (i<month[n]) 
	{
    s[n]=s[n]+m[i];
    i=i+1;
	}
    s[n]=s[n]+day[n];
	n=n+1;
	i=1;
	}
    for(n=1;n<=5;n=n+1)  printf("%d\n",s[n]);
    return 0;
}
