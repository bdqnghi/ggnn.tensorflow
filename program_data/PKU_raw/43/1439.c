int main()
{  int m,a=3,b,i,j;
scanf("%d",&m);
loop:while(a<=m/2)
{i=2;
	 j=2;
	while(i<=a-1)
	{   if(a%i==0) 
	{a++;
	goto loop;
	}
	else  i++;
	}
b=m-a;
    while(j<=b-1)
		{   if(b%j==0) 
	{a++;
	goto loop;
	}
	else  j++;
	}
printf("%d %d\n",a,b);
a++;
	}
return 0;
}