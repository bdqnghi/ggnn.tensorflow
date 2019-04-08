int main()
{
    int runnian(int year);
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int b[]={31,29,31,30,31,30,31,31,30,31,30,31};
    int n,i,j,year,x,y,boolean,sum,temp;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {scanf("%d %d %d",&year,&x,&y);
     boolean=runnian(year);
     if (x>y) {temp=x;x=y;y=temp;}
     sum=0;
     if (boolean!=0)
       for (j=x;j<y;j++) sum=sum+a[j-1];
     if (boolean==0)
       for (j=x;j<y;j++) sum=sum+b[j-1]; 
          
     if (sum%7==0) printf("YES\n");
     else printf("NO\n");               
                            
    }
    return 0;
       
}
int runnian(int year)
{int b;
 if (year%400==0) return(0);
 if (year%4==0 && year%100!=0) return(0);
 return(1);
    
    
}
