
int main()
{
        int i,n,s1,x[10],f[10];
   
        double s2,G[10];
        float GPA;
        scanf("%d",&n);
        s1=0;
        s2=0;

        for(i=0;i<n;i++)
        {
                scanf("%d",&x[i]);
                s1+=x[i];
        }
        for(i=0;i<n;i++)
    {
                scanf("%d",&f[i]);
                if(f[i]>=90){G[i]=4.0;}
        else if(f[i]>=85){G[i]=3.7;}
        else if(f[i]>=82){G[i]=3.3;}
        else if(f[i]>=78){G[i]=3.0;}
    else if(f[i]>=75){G[i]=2.7;}
    else if(f[i]>=72){G[i]=2.3;}
    else if(f[i]>=68){G[i]=2.0;}
    else if(f[i]>=64){G[i]=1.5;}
    else if(f[i]>=60){G[i]=1.0;}
        else if(f[i]<60)G[i]=0.0;
                s2+=(G[i])*(x[i]);
    }



        GPA=1.0*s2/s1;

        printf("%.2f",GPA);
        return 0;
}