int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d\n%d%d%d",&a,&b,&c,&d,&e,&f);
	int i,j,k,l,m,n;
	i=1; 
	m=0;
	while(i<a)
	{if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) m=m+366;
	else m=m+365;
	i=i+1;
	}
	j=1;
	while(j<b)
	{if ((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)) m=m+31;
	else if((j==4)||(j==6)||(j==9)||(j==11)) m=m+30;
		else if((j==2)&&(a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) m=m+29;
		else m=m+28;
		j=j+1;
	}
	m=m+c;
	k=1; 
	n=0;
	while(k<d)
	{if ((k % 4 == 0 && k % 100 != 0) || (k % 400 == 0)) n=n+366;
	else n=n+365;
	k=k+1;
	}
	l=1;
	while(l<e)
	{if ((l==1)||(l==3)||(l==5)||(l==7)||(l==8)||(l==10)) n=n+31;
	else if((l==4)||(l==6)||(l==9)||(l==11)) n=n+30;
		else if((l==2)&&(d % 4 == 0 && d % 100 != 0) || (d % 400 == 0)) n=n+29;
		else n=n+28;
		l=l+1;
	}
	n=n+f;
	printf("%d",n-m);
	return 0;
}