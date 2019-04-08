int main()
{int a,b,c,i,j,k;
scanf("%d",&a);
if(a==1)
printf("End"); 
else
{while(a!=1)
{	if(a%2==0)
	{	printf("%d/2=%d\n",a,a/2);
		a=a/2;
	}
	else
	{	printf("%d*3+1=%d\n",a,(a*3+1));
		a=a*3+1;
	}
}
printf("End");
}
return 0;
}