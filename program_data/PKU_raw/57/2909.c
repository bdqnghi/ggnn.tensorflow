main ()
{
     int n,i,a[50];
     char str[50][32];
     scanf ("%d",&n);
     i=n;
     for (;i>0;i--)
     {
         scanf ("%s",str[n-i]);
         a[n-i]=strlen(str[n-i]);
         if (str[n-i][a[n-i]-1]=='r') {str[n-i][a[n-i]-2]='\0';}
         else if (str[n-i][a[n-i]-1]=='y') {str[n-i][a[n-i]-2]='\0';}
         else if (str[n-i][a[n-i]-1]=='g') {str[n-i][a[n-i]-3]='\0';}
     }
     for (i=0;i<n;i++)
     {
         printf ("%s\n",str[i]);
     }
} 