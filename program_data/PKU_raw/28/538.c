void main()
{  
     int i,j=0,k=0,m,l=0,a[300]={0},b[300]={0};
     char str[300];
     gets(str);
     m=strlen(str);
     for (i=0;i<m+1;i++)
     {
         if (str[i]!=' '&&str[i]!='\0')
         k++;
         else {a[j++]=k;k=0;}
     }
     for(i=0;i<j;i++)
     if(a[i]!=0)  b[l++]=a[i];
     printf("%d",b[0]);
     for (i=1;i<l;i++)
     printf (",%d",b[i]);
     
}