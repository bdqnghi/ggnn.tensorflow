int main(void)
{
    int x=0,y=0,z=0;
    scanf("%d",&x);
    int k=0;
    while(scanf(",%d",&z))
    {
    	k++;
    	if(z>x) {y=x;x=z;}
    	if(z<x&&z>y) y=z; 
    }
    if(k==0||y==0)printf("No");
    else printf("%d",y);
    return 0;
}