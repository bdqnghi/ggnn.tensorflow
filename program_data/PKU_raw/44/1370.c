char reverse(char a[],int n)
{
     int i,j;
     if(n==1&&a[0]=='0')
     {
        printf("0");              
     }
     if(a[0]=='-')
     {
        printf("-");          
     for(i=n-1;i>0;i--)
     {
        if(a[i]=='0')
        continue;
        else
        {
            j=i;
            break;
        }             
     }
     for(i=j;i>0;i--)
     {
        printf("%c",a[i]);             
     }
     }
     if(a[0]!='-')
     {
        for(i=n-1;i>=0;i--)
     {
        if(a[i]=='0')
        continue;
        else
        {
            j=i;
            break;
        }             
     }
     for(i=j;i>=0;i--)
     {
        printf("%c",a[i]);             
     } 
     }
}
main()
{
     char a[100],i;
     int n;
     for(i=0;i<6;i++)
     {
     gets(a);
     n=strlen(a);                    
     reverse(a,n);
     printf("\n");
     }
     getchar(); getchar();  getchar();  
}
