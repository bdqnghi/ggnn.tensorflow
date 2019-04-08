int main()
{
	double a;
	int i,n,m,t=0,k=0;
	char x[501],y[501];
	scanf("%lf\n",&a);
	gets(x);
	gets(y);
	n=strlen(x);
	m=strlen(y);
	if(n!=m)
		printf("error\n");
	else
	{
	 for(i=0;i<n;i++)
	 {  
		 if((x[i]!='A'&&x[i]!='G'&&x[i]!='T'&&x[i]!='C')||(y[i]!='A'&&y[i]!='G'&&y[i]!='T'&&y[i]!='C'))
		 {   
			 k=1;
			 printf("error\n");
			 break;
		 }
		else if(x[i]==y[i])
		{
			t++;
		} 
	 }
	 if(k!=1)
	 {
	  if((double)((double)t/(double)n)>a)
		  printf("yes\n");
	   else printf("no\n");
	 }
	}
	return 0;
}
