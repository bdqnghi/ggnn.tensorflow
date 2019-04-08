
int digui(int x,int y)

{

       int z;

       if(x==1||x==0)
        z=1;
       else if(y==1) z=1;
       else if(x>=y) z=digui(x-y,y)+digui(x,y-1);
       else z=digui(x,x);
       return z;

}

int main()

{

       int t,n,m;

       scanf("%d",&t);

       while(t--)

       {

              scanf("%d %d",&m,&n);

              printf("%d\n",digui(m,n));

       }

       return 0;

}
