void main()
{
	int a1,a2,b1,b2,c1,c2;
	int num,i;

	scanf("%d %d %d",&a1,&b1,&c1);
	scanf("%d %d %d",&a2,&b2,&c2);

	int pdrun(int);
	int tohead(int,int,int);
	int toend(int,int,int);

	if(a1==a2)num=tohead(a2,b2,c2)-tohead(a1,b1,c1);
	if(a1!=a2){num=tohead(a2,b2,c2)+toend(a1,b1,c1);
	          for(i=a1+1;i<a2;i=i+1)
			  {
				  if(pdrun(i)==1)num=num+366;
				  else num=num+365;
			  }
		
	}

	printf("%d",num);
}

int pdrun(int i)
{
	int n;
	if(i%4==0&&i%100!=0||i%400==0)n=1;
	 else n=0;
	 return(n);
}

tohead(int x,int y,int z)
{
	int sum;
    int	pdrun(int);
	sum=0;
	switch(y)
	{	case 12:sum=sum+30;
	case 11:sum=sum+31;
	case 10:sum=sum+30;
	case 9:sum=sum+31;
	case 8:sum=sum+31;
	case 7:sum=sum+30;
	case 6:sum=sum+31;
	case 5:sum=sum+30;
	case 4:sum=sum+31;
	case 3:if(pdrun(x)==1)sum=sum+29;else sum=sum+28;
	case 2:sum=sum+31;
	case 1:sum=sum+z;

	}
	return(sum);

}
int toend(int x,int y,int z)
{
	int sum;


	if(pdrun(x)==1)sum=366-tohead(x,y,z);
	else sum=365-tohead(x,y,z);

	return(sum);

}