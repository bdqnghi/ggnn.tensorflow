int main()
{
	int a[5][5],m,n;
	int i,j,num1=0,num2=0,temp;
	for(i=0;i<5;i++)
	{  
		for(j=0;j<5;j++)
		{  scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(n>=0 && n<=4)  num1++;
	if(m>=0 && m<=4)  num2++;
   if(num1==0||num2==0)
	   printf("error");
   else if(num1!=0 && num2!=0)
   {   
	   for(i=0;i<5;i++)
	   {    temp=a[n][i];
	         a[n][i]=a[m][i];
			 a[m][i]=temp;
	   }
       for(i=0;i<5;i++)
	   {  
	     for(j=0;j<4;j++)
		 {    printf("%d ",a[i][j]);
		 }
	   printf("%d\n",a[i][4]);
	   }
   }
   return 0;
}