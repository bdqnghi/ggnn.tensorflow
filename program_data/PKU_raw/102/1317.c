int main()
{   	
    int n,i,p;
	double y;
	double c[40],d[40];
	int j=0,k=0;
	char t[10]={"male"};
	struct student 
	{ 
	   char a[10];
	   double b;
	};
	struct student x[100];
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s%lf",x[i].a,&x[i].b);
	for(i=0;i<n;i++)                            
           {if (strcmp(x[i].a,t)==0)
              {
                c[j]=x[i].b;
                j++;
              }
            else
              {
              	d[k]=x[i].b;
              	k++;
              }
           }
	for(i=0;i<=j-1;i++)                             
           {for(p=i;p<=j-1;p++)
             {if(c[i]<c[p])
                {y=c[i];
                c[i]=c[p];
                c[p]=y;}
             }
           }
    for(i=0;i<=k-1;i++)                             
           {for(p=i;p<=k-1;p++)
             {if(d[i]<d[p])
                {y=d[i];
                d[i]=d[p];
                d[p]=y;}
             }
           }
     for(i=j-1;i>=0;i--)
     printf("%.2f ",c[i]);
     for(i=0;i<k-1;i++)
     printf("%.2f ",d[i]);
     printf("%.2f",d[k-1]);
     return 0;
} 