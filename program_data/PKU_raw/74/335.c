int sushu(int a)
{ int i,j=0,m;
  for(i=2;i<=sqrt(a)+1;i++)
  {if(a%i==0)
  {return 1;j++;
  break;}}

  if(j==0)
  {return 0;}
}
int huiwen( int a)
{ int i,j,m,n=0;
char c[100]={0};
	for(i=0;;i++)
	{if(a/10!=0||a%10!=0)
		{c[i]=a%10;
		a=a/10;
		}
	else break;
	}
	for(j=0;j<=i-1;j++)
	{if(c[j]!=c[i-1-j])
	 n++;
	}
	if (n==0)
		return 0;
	else return 1;
}
void main()
{ int a,b,c,d,e[100]={0},i,j;
	scanf("%d %d",&a,&b);
		for(i=a,j=0;i<=b;i++)
		{ d=huiwen(i)+sushu(i);
			if(d==0)
			{e[j]=i;
			j++;}
		}
		
	if(j==0)
		printf("no");
	else 
	{for(i=0;i<=j-2;i++)
	 printf("%d,",e[i]);
	 printf("%d",e[j-1]);
	}
}
