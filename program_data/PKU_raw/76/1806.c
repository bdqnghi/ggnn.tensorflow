int main ()
{
    struct point{
        int a,b;
    }points[50002],tmp;
    int i,j,n;
    int a,b,c=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) 
    {scanf("%d%d",&a,&b);
    points[i].a=a;
    points[i].b=b;}
    for(j=n-1;j>0;j--)    
    {for(i=0;i<j;i++)    
       {if(points[i].a>=points[i+1].a){tmp=points[i+1];
        points[i+1]=points[i];
        points[i]=tmp;}
    }}
     for(j=1;j<n;j++){
      if(points[0].b>=points[j].a){
      if(points[j].b>points[0].b)
      {points[0].b=points[j].b; }
      c++;
      }
     else {c=0;break;}
      }
    if(c!=0)
    {printf("%d %d",points[0].a,points[0].b);} 
     else{printf("no\n");} 
     return 0;
}

