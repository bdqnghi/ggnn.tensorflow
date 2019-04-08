struct dian  {   double a;   double b;  }dia[20];  
void main() 
 {   
int n,i,j;   double max,dis;   scanf("%d",&n);   
for(i=0;i<n;i++)    scanf("%lf %lf",&dia[i].a,&dia[i].b);  
 max=0;   
for(i=0;i<n-1;i++)   
{    
for(j=i+1;j<n;j++)    
{     if(((dia[i].a-dia[j].a)*(dia[i].a-dia[j].a)+(dia[i].b-dia[j].b)*(dia[i].b-dia[j].b))>max)     
 max=(dia[i].a-dia[j].a)*(dia[i].a-dia[j].a)+(dia[i].b-dia[j].b)*(dia[i].b-dia[j].b);   
 }   
}     
 dis=sqrt(max);    
printf("%.4lf",dis);  
} 