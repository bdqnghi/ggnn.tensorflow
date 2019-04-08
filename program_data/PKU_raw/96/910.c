
char a[1000]={0},b[1000]={0},c[1000]={0};
int la,lb,lc;

void zl()
{
	for (int i=lb;i>=1;i--)
	{
		if (b[i]<48)
		{
			b[i]=b[i]+10;
			b[i-1]=b[i-1]-1;
		}
	}
}

int main ()
{
    while (1)
    {
        b[1]=getchar();
        if (b[1]==-1)
        break;
        /*for (int i=2;i<=999;i++)
        {
            a[i]=getchar ();
            if (a[i]==10)
            {
                la=i-1;
                break;
            }
        }*/
        for (int i=2;i<=999;i++)
        {
            b[i]=getchar ();
            if (b[i]==10)
            {
                lb=i-1;
                break;
            }
        }
		b[0]=48;
        if (b[1]==49&&b[2]<=50)
        {
            lc=lb-2;
            for (int i=1;i<=lc;i++)
            {
                int f=100*(b[i]-48)+10*(b[i+1]-48)+(b[i+2]-48);
                switch (f/13)
                {
                    case 0 :c[i]=0+48;break;
                    case 1 :c[i]=1+48;b[i+1]=b[i+1]-1;b[i+2]=b[i+2]-3;break;
                    case 2 :c[i]=2+48;b[i+1]=b[i+1]-2;b[i+2]=b[i+2]-6;break;
                    case 3 :c[i]=3+48;b[i+1]=b[i+1]-3;b[i+2]=b[i+2]-9;break;
                    case 4 :c[i]=4+48;b[i+1]=b[i+1]-5;b[i+2]=b[i+2]-2;break;
                    case 5 :c[i]=5+48;b[i+1]=b[i+1]-6;b[i+2]=b[i+2]-5;break;
                    case 6 :c[i]=6+48;b[i+1]=b[i+1]-7;b[i+2]=b[i+2]-8;break;
                    case 7 :c[i]=7+48;b[i+1]=b[i+1]-9;b[i+2]=b[i+2]-1;break;
                    case 8 :c[i]=8+48;b[i]=b[i]-1;b[i+1]=b[i+1]-0;b[i+2]=b[i+2]-4;break;
                    case 9 :c[i]=9+48;b[i]=b[i]-1;b[i+1]=b[i+1]-1;b[i+2]=b[i+2]-7;break;
                }
				zl ();
            }
        }
        else
        {
            lc=lb-1;
            for (int i=0;i<=lc-1;i++)
            {
				int f;
				f=100*(b[i]-48)+10*(b[i+1]-48)+(b[i+2]-48);
                switch (f/13)
                {
					case 0 :c[i+1]=0+48;break;
					case 1 :c[i+1]=1+48;b[i+1]=b[i+1]-1;b[i+2]=b[i+2]-3;break;
                    case 2 :c[i+1]=2+48;b[i+1]=b[i+1]-2;b[i+2]=b[i+2]-6;break;
                    case 3 :c[i+1]=3+48;b[i+1]=b[i+1]-3;b[i+2]=b[i+2]-9;break;
                    case 4 :c[i+1]=4+48;b[i+1]=b[i+1]-5;b[i+2]=b[i+2]-2;break;
                    case 5 :c[i+1]=5+48;b[i+1]=b[i+1]-6;b[i+2]=b[i+2]-5;break;
                    case 6 :c[i+1]=6+48;b[i+1]=b[i+1]-7;b[i+2]=b[i+2]-8;break;
                    case 7 :c[i+1]=7+48;b[i+1]=b[i+1]-9;b[i+2]=b[i+2]-1;break;
                    case 8 :c[i+1]=8+48;b[i]=b[i]-1;b[i+1]=b[i+1]-0;b[i+2]=b[i+2]-4;break;
                    case 9 :c[i+1]=9+48;b[i]=b[i]-1;b[i+1]=b[i+1]-1;b[i+2]=b[i+2]-7;break;
                }
				zl ();
            }
        }
        /*for (int i=1;i<=la+1;i++)
        putchar (a[i]);*/
        for (int i=1;i<=lc;i++)
        putchar (c[i]);
		if (lc==0)
		cout <<"0"<<endl;
        putchar (10);
        cout <<(10*(b[lb-1]-48)+(b[lb]-48))<<endl;
    }
    return 0;
}
