
int main(int argc, char* argv[])
{   int n,i,max1=0,max,max2=0;
    int*p;
   scanf("%d",&n);
   p=(int*)malloc(sizeof(int)*n);
   for(i=0;i<n;i++){
	   scanf("%d",&p[i]);}
   for(i=0;i<n;i++){
	   if (p[i]>max1) {max1=p[i];}
   }
    max=max1;max1=0;
	for(i=0;i<n;i++){
		if(p[i]>max2&&p[i]!=max){max2=p[i];}
	}
	printf("%d\n%d\n",max,max2);
    free(p);
  
	return 0;
}