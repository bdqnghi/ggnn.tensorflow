
void main()
{
     void change(int *p,int n,int m);
     int a[100],n,m,i,*p=a;
     scanf("%d%d",&n,&m);
     printf("\n");
     for(i=0;i<n;i++,p++)
         scanf("%d",p);
	 p=a;
     change(p,n,m);
}
    

void change(int *p,int n,int m)
{   
     int *i,*j,b[100];
     j=b;
     i=p;
     for(j=b,i=p;i<p+n;i++,j++)
     {
        
         if(i<p+n-m)
         *(j+m)=*i;
         else
          *(j-n+m)=*i;
     }
     for(j=b;j<b+n-1;j++)
	 { printf("%d ",*j);}
         printf("%d",*(b+n-1));

}