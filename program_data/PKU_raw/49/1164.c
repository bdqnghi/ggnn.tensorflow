int main()
{
	char a[500];
	int i,j,k,q,m;
	gets(a);

	for(i=0;;i++)
	{if(a[i]==0)
	 {q=i;break;}
    }

	char b[500],c[500];
	for(i=0;i<500;i++)
	{b[i]=0;
	 c[i]=0;
    }

	for(i=2;i<=q;i++)//??????
	{
		for(j=0;j<=q-i;j++)//?j??
		{
			for(m=0;m<i;m++)
			b[m]=a[j+i-m-1];

			for(m=0;m<i;m++)
			c[m]=a[j+m];

			if(strcmp(b,c)==0)
			{puts(c);
			
            }


        }
    }

}