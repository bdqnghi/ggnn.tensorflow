int main(){
    int n;
    scanf("%d\n",&n);
    int i,a=0,b=0,c=0,d=0;
    int sz[n];
    for(i=0;i<n;i++)
    {scanf("%d",&sz[i]);}
    for(i=0;i<n;i++)
    {if(sz[i]<=18){a=a+1;}
     else if(sz[i]>18&&sz[i]<=35){b=b+1;}
     else if(sz[i]>35&&sz[i]<=60){c=c+1;}
     else if(sz[i]>60) {d=d+1;}
    }
    printf("1-18: %.2lf%%\n",100.0*a/n);
    printf("19-35: %.2lf%%\n",100.0*b/n);
    printf("36-60: %.2lf%%\n",100.0*c/n);
    printf("Over60: %.2lf%%\n",100.0*d/n);
    return 0;
    
}

