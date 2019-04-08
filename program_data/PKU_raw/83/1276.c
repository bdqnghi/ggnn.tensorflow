void main()
{
	int n,i,j;
    double b,c,d,e,GPA;d=0;e=0;
	scanf("%d\n",&n);
	int a[3][11];
    for(j=1;j<=n;j++)   
	{scanf("%d ",&a[1][j]); e=e+a[1][j] ;}
	for(i=1;i<=n;i++)
	{scanf("%d ",&a[2][i]);
	if(a[2][i]>=90&&a[2][i]<=100) b=4.0;
	else if(a[2][i]>=85&&a[2][i]<=89) b=3.7;
	else if(a[2][i]>=82&&a[2][i]<=84) b=3.3;
	else if(a[2][i]>=78&&a[2][i]<=81) b=3.0;
	else if(a[2][i]>=75&&a[2][i]<=77) b=2.7;
	else if(a[2][i]>=72&&a[2][i]<=74) b=2.3;
	else if(a[2][i]>=68&&a[2][i]<=71) b=2.0;
	else if(a[2][i]>=64&&a[2][i]<=67) b=1.5;
	else if(a[2][i]>=60&&a[2][i]<=63) b=1.0;
	else b=0;
    c=b*a[1][i];d=d+c;}
    GPA=d/e;
	printf("%.2f",GPA) ;    
	}