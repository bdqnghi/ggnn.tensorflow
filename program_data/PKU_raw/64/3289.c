void dx(int x, int y);
void ds(double x, double y);
int main()
{
    int n,i,j,q,p,l,k;
    scanf("%d",&n);
    p=0.5*n*(n-1);
    int x[n],y[n],z[n];
    double o;
    double jl[p];
    int xx[p],yy[p],zz[p],xa[p],ya[p],za[p];
    q=0;
    for(i=0;i<n;i++)
    {scanf("%d%d%d",&x[i],&y[i],&z[i]);}
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            xx[q]=x[i];
            yy[q]=y[i];
            zz[q]=z[i];
            xa[q]=x[j];
            ya[q]=y[j];
            za[q]=z[j];
            jl[q]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
            q++;
        }
    }

    for(i=0;i<p;i++)
    {
        for(j=0;j<p-1;j++)
        {
            if(jl[j]<jl[j+1])
            {
                k=xx[j];
                xx[j]=xx[j+1];
                xx[j+1]=k;
                k=yy[j];
                yy[j]=yy[j+1];
                yy[j+1]=k;    
                k=zz[j];
                zz[j]=zz[j+1];
                zz[j+1]=k;
                k=ya[j];
                ya[j]=ya[j+1];
                ya[j+1]=k;
                k=xa[j];
                xa[j]=xa[j+1];
                xa[j+1]=k;
                k=za[j];
                za[j]=za[j+1];
                za[j+1]=k;
                o=jl[j];
                jl[j]=jl[j+1];
                jl[j+1]=o;
                
            }
            
        }
        
    }
    for(i=0;i<p;i++)
    {printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",xx[i],yy[i],zz[i],xa[i],ya[i],za[i],jl[i]);}
    return 0;
    
}

void dx(int *x, int *y)
{
    int e=0;
    e=*x;
    *x=*y;
    *y=e;
    return;
}
void ds(double *x, double *y)
{
    double r=0;
    r=*x;
    *x=*y;
    *y=r;
    return;
  
    
}

