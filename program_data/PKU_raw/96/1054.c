
int main()
{
	int a[100]={0},c[100]={0},b,d=0,i=0,j;
	char str[100]={0};
	scanf("%s",str);
	b=strlen(str);
    if(b==1)
    printf("0\n%c",str[0]);
    else
    {
       a[0]=(str[0]-'0')*10+str[1]-'0';
       if(a[0]<13 && b==2)
       printf("%d",0);
       
	   c[0]=a[0]/13;
	   d=a[0]%13;
	   for(i=1;i<=b-2;i++)
       {
	      a[i]=d*10+str[i+1]-'0';
	      c[i]=a[i]/13;
          d=a[i]%13;
   	   }
	   
       if(c[0]!=0)
	     printf("%d",c[0]);
       for(i=1;i<=b-2;i++)
	     printf("%d",c[i]);
       printf("\n");
	   printf("%d",d);
	  
   }
	
}