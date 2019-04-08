 

 int f(int n)

{
     int m=0;
while(n!=0){
       m=m*10+n%10;
       n=n/10;
}
return m;
}

 

int main()
{
   int a;
    for(int i=0;i<6;i++){
            scanf("%d",&a);
            printf("%d\n",f(a));
            }
    
    

    return 0;
    }
