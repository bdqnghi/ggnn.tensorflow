void main() 
{ 
	int a,temp,p,q; 
	scanf("%d",&a); 
	temp=a; 
	if(a!=0)
	{while(temp%10-temp!=0||(temp%10-temp==0&&q>=10)) 
	{ 
		p=temp%10; 
		printf("%d",p); 
		q=temp;
		temp=temp/10; 
	}
	}
	else
		printf("0");
	printf("\n");
}