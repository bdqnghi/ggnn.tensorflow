

int mm(int i)
{ 
	int j;
	if(i%7==0)
{ return 0;
}for(j=i;j>0;j/=10)
{if(j%10==7){
return 0;}
}return 1;
}
int main(int argc, char* argv[])
{ 
     int i,n,sum;	
	scanf("%d",&n);
for(i=1,sum=0;i<=n;i++)
{if (mm(i)==1)
{ sum+=i*i;
}
}
	printf("%d",sum);
	return 0;
}