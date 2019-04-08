int main()
{
	
char a[100001];
int  length,i,j,len,check,t;
scanf("%s",&a);
len=strlen(a);
    for(length=2;length<=len;length++)
	{
	      for(i=0;i<len;i++)
		  {     
			  check=0;
		       for(j=0;j<=length/2;j++)
			   {
			           if(a[i+j]!=a[i+length-1-j])
					   {
					     check=1;
						 break;
					   }
			   
			   }
			   if(check==0)
			   {
			      for(t=0;t<length;t++)
                      printf("%c",a[i+t]);
			   }
          printf("\n");
		  }
	
	}
return 0; 
}
