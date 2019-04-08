
int main(){
    
    float a,b,c,d,e,f;
    int n,i,j;
    float sum;
    float sz[1000],zs[1000],fs[1000];
    scanf("%d",&n);
    int num;
    for(i=0;i<n;i++){
                     scanf("%d",&num);
                      sum=0;
                      
                        for(j=3;j<=num;j++)
                        {sz[1]=1;
                        sz[2]=2;
                        sz[j]=sz[j-1]+sz[j-2];
                        zs[1]=2;
                        zs[2]=3;
                        zs[j]=zs[j-1]+zs[j-2];
                        fs[j]=zs[j]/sz[j];
                        sum=sum+fs[j];
                        
                        }
                        
                        if(num==1){printf("2.000\n");}
                        if(num==2){printf("3.500\n");}
                        if(num>=3){sum=sum+3.5;
                        printf("%.3f\n",sum);}
}                                     
return 0;   
}
