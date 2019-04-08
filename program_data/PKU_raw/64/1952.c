float f(int a,int b,int c,int d,int e,int f);
int main()
{
    int x[11],y[11],z[11],i,j,n,num=0;
    scanf("%d",&n);
    //scanf("%d %d %d",&x[0],&y[0],&z[0]);
    for(i=0;i<n;i++)
    scanf("%d %d %d",&x[i],&y[i],&z[i]);
    struct POINT
    {
          int point1x;
          int point1y;
          int point1z;
          int point2x;
          int point2y;
          int point2z;
		  int mark;
          float l;
    };
    struct POINT temp;
    struct POINT d[55];
    for(i=0;i<n;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                                      d[num].mark=num;
                                      d[num].point1x=x[i];d[num].point1y=y[i];d[num].point1z=z[i];
                                      d[num].point2x=x[j];d[num].point2y=y[j];d[num].point2z=z[j];
                                      d[num].l=f(x[i],y[i],z[i],x[j],y[j],z[j]);
                                      num=num+1;            //printf("%.2f\n",d[num].l);printf("%d %d %d %d %d %d\n",x[i],y[i],z[i],x[j],y[j],z[j]);
                    }
    }                         //for(i=num-1;i>=0;i--)printf("%.2f\n",d[i].l);//printf("%d\n",num);
    for(i=1;i<num;i++)
    {
                      for(j=0;j<num-i;j++)
                      {
                                        if(d[j].l>d[j+1].l)
                                        {
                                                           temp=d[j];
                                                           d[j]=d[j+1];
                                                           d[j+1]=temp;
                                        }
                      }
    } 
	for(i=1;i<num;i++)
    {
                      for(j=0;j<num-i;j++)
                      {
                                        if(d[j].l==d[j+1].l&&d[j].mark<d[j+1].mark)
                                        {
                                                           temp=d[j];
                                                           d[j]=d[j+1];
                                                           d[j+1]=temp;
                                        }
                      }
    }                                                                                                                //printf("%.2f\n",d[3].l);
    for(i=num-1;i>=0;i--)
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",d[i].point1x,d[i].point1y,d[i].point1z,d[i].point2x,d[i].point2y,d[i].point2z,d[i].l);

    return 0;
}
float f(int a,int b,int c,int d,int e,int f)
{
      float length;
      length=sqrt((a-d)*(a-d)+(b-e)*(b-e)+(c-f)*(c-f));
      return(length);
}