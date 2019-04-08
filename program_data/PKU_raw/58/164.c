int main()
{
    int n,i,j,l;
    int x=0,y=1;
    char a[100];
    char str[100];
    gets (str);
    n=atoi(str);
    for (i=0;i<n;i++)
    {
        gets (a);
        l=strlen (a);
        if (a[0]=='_' ||(a[0]<123 && a[0]>96) || (a[0]>64 && a[0]<91) ) 
        {
           for (j=0;j<l; )
           {
               if (a[j]=='_' ||(a[j]<123 && a[j]>96) || (a[j]>64 && a[j]<91) || (a[j]>47 &&a[j]<58))  
               j++;
               else 
               break;
           } 
           if (j==l)
           printf ("%d\n",y);
           else
           printf ("%d\n",x);       
        }
        else
        printf ("%d\n",x);
    }
    getchar ();
    getchar ();
}
