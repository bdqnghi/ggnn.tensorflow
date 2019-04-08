	void main()
{
		char str[100][11]={0},substr[100][4]={0},a[100][20]={0},*p,*q,*i;
		int n,t=1,max,x;
		while(scanf("%s %s",str[t],substr[t])!=EOF)
			t++;
		for(n=1;n<=t;n++)
		{
			p=str[n];
			max=str[n][0];
			for(;*p!=0;p++)
				if(*p>max){max=*p;q=p;}
				p=str[n];
				for(x=0;p<=q;x++)
					a[n][x]=*p++;
				a[n][x]=substr[n][0];
				a[n][x+1]=substr[n][1];
				a[n][x+2]=substr[n][2];
                 i=a[n]+x+3;
				 strcpy(i,p);
				 printf("%s\n",a[n]);
		}
	}




