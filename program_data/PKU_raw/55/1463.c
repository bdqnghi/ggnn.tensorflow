main()
{
  int i,j,d,b,s;
  int a[10000];
  char c[10000];
  scanf("%d %s %d",&d,c,&b);
  //d=15;
  //b=7;
  s=0;
  if(c[0]-'0'==0){printf("0");}
  else
  {for(i=0;c[i]!='\0';i++)
  {
      if(c[i]>='a'&&c[i]<='z'){c[i]=c[i]-32;}                   
      if(c[i]>=65&&c[i]<=90){a[i]=c[i]-55;}
      //if(c[i]>='A'&&c[i]<='Z'){a[i]=c[i]-'0'+10;printf("%d\n",a[i]);}
      else                   
      {a[i]=c[i]-'0';}
      //printf("%d\n",a[i]);                   
  }
  //printf("%d\n",i);
  for(j=0;j<i;j++)
  {
   s=d*s+a[j];               
                  
  }
  for(i=0;s!=0;i++)
  {
     a[i]=s%b;              
     s=s/b;
     
   // printf("%d\n",a[i]); 
     if(a[i]>=10)
     {
       c[i]='A'+a[i]-10;          
     }
     else
     {c[i]=a[i]+'0';}
     // printf("%c\n",c[i]);
       //printf("%d\n",i);            
  }
  
  for(j=i-1;j>=0;j--)   
  {
   printf("%c",c[j]);                   
  }
}    
getchar();
getchar();
 getchar();     
}