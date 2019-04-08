int main(int argc, char* argv[])

{
     int n,i;
     double a[1000],b[1000],c[1000];
     double x1,x2,d,e;
     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
        if((b[i]*b[i]-4*a[i]*c[i])>0){
        x1 =(-b[i]+sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);
        x2 =(-b[i]-sqrt(b[i]*b[i]-4*a[i]*c[i]))/(2*a[i]);

        printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
        }
        else if((b[i]*b[i]-4*a[i]*c[i])==0){
        x1=-b[i]/(2*a[i]);
        printf("x1=x2=%.5lf\n",x1);
        }
        else{
        d=-b[i]/(2*a[i]);
        e=sqrt(4*a[i]*c[i]-b[i]*b[i])/(2*a[i]);
        if(d==0){printf("x1=-0.00000+%.5lfi;x2=-0.00000-%.5lfi\n",e,e);}
        else{printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",d,e,d,e);}
        }
     }	
        return 0;
}
        
        
        
