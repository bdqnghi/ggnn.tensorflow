int main()
{
     void move(int array[],int x,int y);
     int n,m,i,*p,a[100]={0};
     scanf("%d %d",&n,&m);
     for(p=a;p<=a+n-1;p++)
     scanf("%d",p);
     move(a,n,m);
     for(p=a;p<=a+n-2;p++)
     printf("%d ",*p);
     printf("%d",*(a+n-1));
     return 0;
}
void move(int array[100],int x,int y)
{ 
     int *p,arrayend=*(array+x-1);//?arrayend????????????????
     
       for(p=array+x-1;p>=array+1;p--)
       *p=*(p-1);
       *array=arrayend;
       y--;
       if(y>0) move(array,x,y);
}
       
     

     
     