int main()
{
	char s[20],q[20];
	char a,b;
	int k,m,n,p,i,amount,max,sum;
         max=0;
	 sum=0;
    scanf("%d",&k);
	for(i=0;i<k;i++)

	{
		
		scanf("%s",s);
		scanf("%d%d ",&m,&n);
		scanf("%c %c",&a,&b);
		scanf("%d",&p);
		amount=0;
                if((m>80) && (p>=1))
			amount+=8000;
		if((m>85) && (n>80))
			amount+=4000;
		if(m>90)
			amount+=2000;
		if((m>85) && (b=='Y'))
			amount+=1000;
		if((n>80) && (a=='Y'))
			amount+=850;
 	     sum+=amount;

		if(amount>max)
		{
			strcpy(q,s);
			max=amount;
                 }
	
			
	}
	
	
		printf("%s\n",q);
		printf("%d\n",max);
			printf("%d\n",sum);
	return 0;
}


