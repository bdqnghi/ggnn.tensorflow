int main()
{int a=0,b=0,c=0;int d=0,e=0,f=0;char x[4];int i=0;
for(a=1;a<=3;a++)
	for(b=1;b<=3;b++)
		if(b!=a)
			for(c=1;c<=3;c++)
				if(c!=a&&c!=b)
			{d=(b>a)+(c==a);e=(a>b)+(a>c);f=(c>b)+(b>a);
//cout<<d<<e<<f<<endl;}
                 if((a+d)==(b+e)&&(a+d)==(c+f))
					 for(i=1;i<=3;i++)
					 {if(i==a)x[i]='A';if(i==b)x[i]='B';if(i==c)x[i]='C';}}
for(i=1;i<=3;i++)cout<<x[i];
cout<<endl;
					 
                 
cin.get();cin.get();
return 0;
}
