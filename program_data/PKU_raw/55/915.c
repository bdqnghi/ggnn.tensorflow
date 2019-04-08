int main()
{
      long a,b,i,j,length,result=0;
      char c[100];
      long final[100];
	  long temp;
      scanf("%d %s %d",&a,c,&b);
      int decimal[100];
      length=strlen(c);
	  char finalString[1000];
      for(i=0;i<length;i++)
      {
                 if(c[i]>='A'&&c[i]<='Z')
                 {
                      decimal[i]=c[i]-'A'+10;
                  }
                 else if(c[i]>='a'&&c[i]<='z')
                 {
                      decimal[i]=c[i]-'a'+10;
                  }
                else if(c[i]>='0'&&c[i]<='9')
                 {
                      decimal[i]=c[i]-'0';
                 }
          }
      for(i=0;i<length;i++)
      {
            result=result+decimal[length-i-1]*(int)(pow((double)a,i));      
      }
      if(result==0)
      {
          printf("0");
      }
else
{	
      for(i=0;result!=0;i++)
      {
           final[i]=result%b;
           result=result/b;
       }
	  for(j=0;j<i/2;j++)
	  {
		  temp=final[j];
		  final[j]=final[i-j-1];
		  final[i-j-1]=temp;
	  }
      for(j=0;j<i;j++)
      {
            if(final[j]<10)
            {
                finalString[j]=final[j]+'0';
            }
            else
            {
                finalString[j]=final[j]+'A'-10;
            }
      }
	  finalString[i]='\0';
	  puts(finalString);
	  

     printf("\n");
}   
}


