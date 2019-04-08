int main()
{

     int a,i,j=0,k=0,l;
     scanf("%d",&a);
     char b[40][6];
     float c[40];
     float m[40];
     float f[40];
     float temp;
     for(i=0;i<40;i++)
     {
       f[i]=0;
       m[i]=0;
     }
     for(i=0;i<a;i++)
       {scanf("%s",b[i]);
        scanf("%f",&c[i]);}  

     for(i=0;i<a;i++)
     {
       if(b[i][0]=='m')
       {m[j]=c[i];
       j++;}
       else
       if(b[i][0]='f')
       {f[k]=c[i];
       k++;}
     } 
     for(j=0;j<a;j++)
     if(m[j]==0)
     break;
     for(i=0;i<j-1;i++)
     {for(l=i+1;l<j;l++)
     
 
     if(m[l]<m[i])
     {temp=m[i];
     m[i]=m[l];
     m[l]=temp;}}

     for(k=0;k<a;k++)
     if(f[k]==0)
     break;
     for(i=0;i<k-1;i++)
     
     
     for(l=i+1;l<k;l++)
     
     
     if(f[l]>f[i])
     {temp=f[i];
     f[i]=f[l];
     f[l]=temp;}


     for(i=0;i<j;i++)
     
     printf("%.2f ",m[i]);
     for(i=0;i<k-1;i++)
     printf("%.2f ",f[i]);
     printf("%.2f\n",f[i]); 
    return 0;
}
