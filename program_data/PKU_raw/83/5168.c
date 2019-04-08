int main(){
int xf[10],cj[10],n,j,i;
double dkjd[10],m=0,q=0,x;
scanf("%d",&n);
 for(i=0;i<n;i++)
       scanf("%d",&(xf[i]));
for(i=0;i<n;i++)
         scanf("%d",&(cj[i]));
for(i=0;i<n;i++){
    if(cj[i]>=90&&cj[i]<=100){
        dkjd[i]=4.0;
    }else  if(cj[i]>=85&&cj[i]<=89){
        dkjd[i]=3.7;
    }else  if(cj[i]>=82&&cj[i]<=84){
        dkjd[i]=3.3;
    }else  if(cj[i]>=78&&cj[i]<=81){
        dkjd[i]=3.0;
    }else  if(cj[i]>=75&&cj[i]<=77){
        dkjd[i]=2.7;
    }else  if(cj[i]>=72&&cj[i]<=74){
        dkjd[i]=2.3;
    }else  if(cj[i]>=68&&cj[i]<=71){
        dkjd[i]=2.0;
    }else  if(cj[i]>=64&&cj[i]<=67){
        dkjd[i]=1.5;
    }else  if(cj[i]>=60&&cj[i]<=63){
        dkjd[i]=1.0;
    }else  if(cj[i]>=0&&cj[i]<=60){
        dkjd[i]=0.0;
    }
x=dkjd[i]*xf[i];
         m+=x;
         q+=xf[i];
     }  
     m=m/q;
    printf("%.2lf",m);
    return 0;
}




