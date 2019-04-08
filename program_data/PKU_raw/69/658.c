int main()
{
    char a[251],b[251],c[251];
    int d,x,y,i;
    scanf("%s",a);
    scanf("%s",b);
    x=strlen(a);
    y=strlen(b);
    if(x>=y)             //dui qi, qian jia 0
    {
          for(i=y;i!=-1 ;i--)
              b[i+x-y+1]=b[i];
          for(i=x-y;i!=-1;i--)
              b[i]=48;
          for(i=x;i!=-1;i--)
              a[i+1]=a[i]; 
          a[0]=48;
          d=x;
    }
    //printf("%s,%s",a,b);
	else if(y>x)
    {
          for(i=x;i!=-1 ;i--)
              a[i+y-x+1]=a[i];
          for(i=y-x;i!=-1;i--)
              a[i]=48; 
          for(i=y;i!=-1;i--)
              b[i+1]=b[i]; 
          b[0]=48;
          d=y;              
    }
	c[d+1]='\0';
    for(i=d;i!=-1 ;i--)
    {
          c[i]=a[i]+b[i]-96;
          if(c[i]>=10)
          {
                      c[i]=c[i]-10;
                      a[i-1]++;
          }
          c[i]=c[i]+48;    
    }

    for(;c[0]==48;)
    {     
         for(i=0;;i++)
         {
                      c[i]=c[i+1];
                      if(c[i]=='\0')
                      break;
         }
    }
   	if(c[0]=='\0')
   		c[0]='0';
    printf("%s",c);
    
}                
