int main(void)
{
     int n,h,l,i,j=0,k=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
           scanf("%d %d",&h,&l);
           if((h<90)||(h>140)||(l<60)||(l>90)) j=0;
           if((h<=140)&&(h>=90)&&(l<=90)&&(l>=60)) 
           {j++;
            if(j>=k) k=j;}         
                      
     }
     printf("%d",k);
return 0;
}
