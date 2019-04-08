int main(){
    int n,a[10],i,k,s=0;
    double b[10],m,l=0;
    scanf("%d/n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&(a[i]));
        s+=a[i];
    }
    for(i=0;i<n;i++){
        scanf("%lf ",&(b[i]));
        if(b[i]>=90)b[i]=4.0;
        else{
            if(b[i]>=85)b[i]=3.7;
            else{
                if(b[i]>=82)b[i]=3.3;
                else{
                    if(b[i]>=78)b[i]=3.0;
                    else{
                        if(b[i]>=75)b[i]=2.7;
                        else{
                            if(b[i]>=72)b[i]=2.3;
                            else{
                                if(b[i]>=68)b[i]=2.0;
                                else{
                                    if(b[i]>=64)b[i]=1.5;
                                    else{
                                        if(b[i]>=60)b[i]=1.0;
                                        else b[i]=0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        b[i]=b[i]*a[i];
        l+=b[i];
    }
    m=l/s;
    printf("%.2lf",m);
    return 0;
}
