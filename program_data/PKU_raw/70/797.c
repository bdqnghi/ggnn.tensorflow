int main() {
       int n,N,i,j,s=0;
       cin>>n;

       N=n*(n-1)/2;
       
       float a[n],b[n];
       double dis[N],max=0;

       for(i=0; i<n; i++){
                cin>>a[i]>>b[i];
       }
       
       for(i=0; i<n; i++){
                for(j=i+1; j<n; j++){
                dis[s]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));                s=s+1;
                }
       }
       
       for(s=0; s<N; s++){
                if(dis[s]>max) max=dis[s];
                }
       
       
       printf("%.4f\n",max);

       return 0;
       

}
