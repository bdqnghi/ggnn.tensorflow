void main()
{
	char str1[100],str2[100],*p1,*p2;
	int i,t;
	gets(str1);p1=str1;
	gets(str2);p2=str2;
	for(i=0;i<100;i++)
	{
		if( *(p1+i)<='Z'&&*(p1+i)>='A')
			*(p1+i)+=32;
		
		if( *(p2+i)<='Z'&&*(p2+i)>='A')
			*(p2+i)+=32;


	}

     t=strcmp(p1,p2);
	 if(t>0)printf(">"); if(t<0)printf("<"); if(t==0)printf("=");


}