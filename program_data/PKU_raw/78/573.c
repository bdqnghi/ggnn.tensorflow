int main()
{
	int year[4],f=0,s=0,t=0,fo=5;
	char p[4]={'z','q','s','l'};                                                    //???????
	for (int a=1;a<=5;a++)
	{
		for (int b=1;b<=5;b++) 
		{
			for (int c=1;c<=5;c++)
			{
				for (int d=1;d<=5;d++)
				{
					{
					if (a+b==c+d && a+d>b+c && a+c<b)
					{year[0]=a;year[1]=b;year[2]=c;year[3]=d;}
					}
				}
			}
	    }
	}
	for (int i=0;i<=3;i++)                                                     //????
	{
		if (f<year[i]) f=year[i];
	}
	for (int i=0;i<=3;i++)
	{
		if (s<year[i] && year[i]!=f) s=year[i];
	}
	for (int i=0;i<=3;i++)
	{
		if (t<year[i] && year[i]!=s && year[i]!=f) t=year[i];
	}
	for (int i=0;i<=3;i++)
	{
		if (fo>year[i]) fo=year[i];
	}
	for (int i=0;i<=3;i++)                                                      //??
	{
		if (year[i]==f) cout <<p[i] <<" " <<year[i]*10 <<endl;
	}
	for (int i=0;i<=3;i++)
	{
		if (year[i]==s) cout <<p[i] <<" " <<year[i]*10 <<endl;
	}
	for (int i=0;i<=3;i++)
	{
		if (year[i]==t) cout <<p[i] <<" " <<year[i]*10 <<endl;
	}
	for (int i=0;i<=3;i++)
	{
		if (year[i]==fo) cout <<p[i] <<" " <<year[i]*10 <<endl;
	}
	
	return 0;
}