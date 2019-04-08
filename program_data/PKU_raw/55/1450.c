void main()
{
   int a,b,l,i,t,j;
   long s=0;
   char str1[100],str2[100];
   scanf("%d%s%d",&a,str1,&b);
   l=strlen(str1);
   for(i=0;i<l;i++)
   {if(str1[i]>96) str1[i]=str1[i]-32;}
   for(i=0;i<l;i++)
   {if(str1[i]>64) s=s*a+(str1[i]-55);
   	else s=s*a+(str1[i]-48);
   }
   if(s==0) printf("0");
   else{
	for(i=0;s>0;i++)
	{t=s%b;
	s=s/b;
	if(t>9) str2[i]=t+55;
	else str2[i]=t+48;
	}
	for(j=1;j<=i;j++)
	{printf("%c",str2[i-j]);}
   }
}