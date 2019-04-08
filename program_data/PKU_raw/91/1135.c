int main()
{
    int i=1,n;
    char q[100];
	int p[100],t[100];
    char s[100];
    s[0]=getchar();
    t[0]=s[0];
    while ((s[i]=getchar())!='\n')
    {
		   t[i]=s[i];
		   p[i-1] =t[i]+t[i-1];
           i++;
    }
    n=i;
    p[n-1]=t[0]+t[n-1];
    for (int j=0;j<n;j++)
    {
       putchar(p[j]);
    }
    return 0;
} 