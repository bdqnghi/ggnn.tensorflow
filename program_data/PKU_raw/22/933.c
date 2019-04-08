int main()
{
	int a,A=0,B=0;
	char c;
	
	
    for(;;)
    {
       scanf("%d",&a);
       if(A<a)
	   {  B=A;
		   A=a;
	   }
	   if(a<A&&a>B)
		   B=a;
	   scanf("%c",&c);
	   if(c!=',')
		   break;  
	}

	if(B<A&&B!=0)
	printf("%d\n",B);
	else if(B==A||B==0)
		printf("No\n");
	return 0;
}