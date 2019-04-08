int main()
{
    int n, m, p;
    scanf("%d",&n);
    double a[100][6];
    p = 1;
    m = 1;
    while(m <= n)
    {
        scanf("%lf %lf %lf", &a[m][1],&a[m][2],&a[m][3]);
        m++;
    }
    while(p <= n)
    {
        a[p][4] = a[p][2] * a[p][2] - 4 * a[p][1] * a[p][3];
        if(0 == a[p][4])
        {
            a[p][5] = -a[p][2] / (2 * a[p][1]);
            printf("x1=x2=%.5f\n",a[p][5]);
        }
       else if(a[p][4] > 0)
        {
             if (a[p][2] != 0)
             {
            a[p][5] = (-a[p][2] + sqrt(a[p][4])) / (2 * a[p][1]);
            a[p][6] = (-a[p][2] - sqrt(a[p][4])) / (2 * a[p][1]);
            printf("x1=%.5f;x2=%.5f\n",a[p][5],a[p][6]);
            }
			if (a[p][2] == 0)
			{
			a[p][5] = +sqrt(a[p][4]) / (2 * a[p][1]);
			a[p][6] = -sqrt(a[p][4]) / (2 * a[p][1]);
		 printf("x1=%.5f;x2=%.5f\n",a[p][5],a[p][6]);}
		}
		else
		{
			a[p][5] = -a[p][2] / (2 * a[p][1]);
			a[p][6] = sqrt(-a[p][4]) / (2 * a[p][1]);
			if (a[p][5]!=0)
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",a[p][5],a[p][6],a[p][5],a[p][6]);
			else
			printf("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n",a[p][6],a[p][6]);
		}
		p++;
	}
	getchar();getchar();getchar();getchar();
}
