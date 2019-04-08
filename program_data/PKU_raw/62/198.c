main()
{  int i,j;
   char a[1000];
   gets(a);
   for(i=1;;i++)
{  
      if(a[i]==' '&&a[i-1]==' ')
{     for(j=i;;j++)
   {  a[j]=a[j+1];
      if(a[j+1]=='\0')
      break;    }
      i=i-1;        
}
    if(a[i]=='\0')    
    break;
}
  printf("%s",a);
   getchar();
    getchar();

     
}
