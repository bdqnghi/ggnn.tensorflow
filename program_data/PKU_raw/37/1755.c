int main()
{    char a[1000000];
     int b[50000];
	 int t,i,j,k,n,l;
	 scanf("%d",&t);
	 for(i=0;i<t;i++)
	 {
       for (j=0;j<50000;j++)
       {b[j]=0;
       a[j]=0;}
        scanf("%s",a);
        l=strlen(a);
        
       for (k=0;k<l;k++)
       {
           for(n=0;n<l;n++)
           {
            if(a[k]==a[n])
            b[k]++;
           }
         if(b[k]==1)
         {printf("%c\n",a[k]);
         break;}
        if( k==l-1)
        printf("no\n");
     }
     }

    return 0;
}