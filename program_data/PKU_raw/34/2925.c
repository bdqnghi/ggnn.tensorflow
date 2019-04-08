int main()
{
int n,sum,i,t;

scanf("%d",&n);

sum=n;

for(i=0;sum!=1;i++)
{
	if(sum%2!=0){t=sum;sum=sum*3+1;printf("%d*3+1=%d\n",t,sum);}

	else if(sum%2==0){t=sum;sum=sum/2;printf("%d/2=%d\n",t,sum);}
}

printf("End");
return 0;
}
