void main()
{
	int s;
	for(;;)
	{
		char str1[100],str2[5],str3[100]={'\0'},m;
		int i,j,l;
		s=scanf("%s %s",&str1,&str2);
		if(s!=2)
			break;
		else
		{  for(i=0,m=str1[0];i<strlen(str1);i++)
		{if(m<str1[i])
	      m=str1[i];}
	   for(i=0;i<strlen(str1);i++)
     	if(str1[i]==m)
		{l=i;break;}
         for(i=0;i<=l;i++)
					 str3[i]=str1[i];
					 for(i=0;i<3;i++)
					str3[l+1+i]=str2[i];
					 for(i=0;i<(strlen(str1)-l-1);i++)
						 str3[l+4+i]=str1[l+i+1];
					 printf("%s\n",str3);

		}
	}
}