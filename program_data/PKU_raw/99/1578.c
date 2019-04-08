int main(int argc, char* argv[])
{  int sz[100];
   int n;
   int a=0;
   int b=0;
   int c=0;
   int d=0;
   double e,f,g,h;
   scanf("%d",&n);
   for (int i=0;i<n;i++){
        scanf("%d",&sz[i]);
        if(sz[i]<=18){
			a=a+1;
		}
		if(sz[i]>18&&sz[i]<36){
			b=b+1;
		}
		if(sz[i]>=36&&sz[i]<61){
			c=c+1;
		}
		if(sz[i]>=61){
			d=d+1;
		}
   }
   e=(double)a/n*100;
   f=(double)b/n*100;
   g=(double)c/n*100;
   h=(double)d/n*100;
   printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",e,f,g,h);
	return 0;
}
