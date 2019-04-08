void main()
{
     int n,x,i,j;
     char str[100];
     scanf("%d",&n);
     for(i=1;i<=n+1;i++)
     {gets(str);
      x=strlen(str)-1;
      if(str[x]=='r'||str[x]=='y')
      {str[x-1]='\0'; printf("%s",str);printf("\n");}
      else
      {str[x-2]=0; printf("%s",str);printf("\n");}
     }
}

