int main()
{
    int k,i,j;
    float a[100][100];
    double n[100],b[100],s1,c;
    scanf("%d",&k);
    for(i=0;i<k;i++){b[i]=0;
    	}
    for(i=0;i<k;i++)
    {
    	scanf("%lf",&n[i]);
    	for(j=0;j<n[i];j++)
    	{scanf("%f",&a[i][j]);
    		b[i]+=a[i][j]; }  	
    }
    for(i=0;i<k;i++){
        s1=0;
        c=0;
    	for(j=0;j<n[i];j++)
       { c=(a[i][j]-b[i]/n[i]);
        s1+=pow(c,2);}
     printf("%.5lf\n",pow(s1/n[i],0.5));
    }
    return 0;
}