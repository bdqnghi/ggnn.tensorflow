
int main ()
{
    int n,f,w=0;
    int m[300];
    int a[300][300];
    cin >>n;
    getchar ();
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=299;j++)
        {
            *(*(a+i)+j)=getchar ();
            if (*(*(a+i)+j)==32||*(*(a+i)+j)==10)
            {
                *(m+i)=j-1;
                break;
            }
        }
    }
    while (w<n)//w???????????
    {
		f=0;
		while (1)
        {
			f=f+*(m+w+1);
			w++;
			for (int i=1;i<=*(m+w);i++)
			putchar (*(*(a+w)+i));
			if (w<n&&f+1+*(m+w+1)<=80)
            {
				putchar (32);
                f=f+1;
            }
			else
			break;
        }
		putchar (10);
	}
    return 0;
}
