

int  main()
{
void change (int a[100],int n,int m);
int a[100],n,m,i;

scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}

change (a,n,m);
for(i=0;i<n-1;i++){
printf("%d ",a[i]);
}
printf("%d",a[n-1]);
return 0;
}



void change (int a[100],int n,int m){
    int i,j,temp;
	for(i=0;i<m;i++){
            temp=a[n-1];
		for(j=0;j<n;j++){
		
			a[n-j-1]=a[n-j-2];
		}
	      a[0]=temp;
	}
 
}