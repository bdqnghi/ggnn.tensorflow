int flag(char a[])
{
    int i,k=1;
    if (a[0]<65||(a[0]>90&&a[0]<95)||(a[0]>95&&a[0]<97)||a[0]>122) {return 0;}
    else 
    {
         for (i=1;i<strlen(a);i++)
         if(a[i]<48||(a[i]>57&&a[i]<65)||(a[i]>90&&a[i]<95)||(a[i]>95&&a[i]<97)||a[i]>122) {return 0;}
    }
    return 1;
}
void main ()
{
     int i,j,n;
     char a[21];
     scanf ("%d",&n);
     for (i=0;i<n;i++)
     {   scanf(" ");
         gets(a);
         if (flag(a)) printf ("yes\n");
         else printf ("no\n");
     }
     
}
         