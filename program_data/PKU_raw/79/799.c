void main()
{
	int n[20],m[20];
	int k,z;
	int a[1000];
    int i,now; //i?r??,now????“??"?????????-

    int j;
	for(k=0;;k++)
	{
	 scanf("%d%d",&n[k],&m[k]);
	 if(n[k]==0&&m[k]==0)
		 break;
	}
	for(z=0;z<k+1;z++)
	{
    
    for(j=1;j<=n[z];j++) //???????a[1]??

        a[j]=j;
    now=1;
    for(j=1;j<n[z];j++)
	{                           //??n-1????????????

        i=0;
        while(i<m[z])
		{
            if (a[now]==0) 
			{
                ++now; //?????0?????????????

                if (now>n[z])
                    now=1;
                //continue;

            }
            else 
			{ //??????

                i++; //i??????????

                if(i==m[z])
                    a[now]=0;
                ++now;
                if (now>n[z])
                    now=1;
            }
        }
    }

    for(j=1;j<=n[z];j++)
	{
		if (a[j]!=0)
			printf("%d\n",a[j]);
	}
	}
}

