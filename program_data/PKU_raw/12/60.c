int main()
{
	int i=0,j=0,k=0,x=0,y=1,a=0;
	float n[20];
	do{
		i=0;
		j=0;
		k=0;
		x=0;
		y=1;
		do{
		    scanf("%d",&n[j]);
		    if(n[j]==0||n[j]==-1)break;
		    j++;
		}while(j<20);
		if(n[j]==-1)return 0;
		do{
		    do{
			    if(n[x]==n[y]*2||n[x]==n[y]/2)i++;
			    y++;
			}while(y<j);
		    x++;
		    y=x+1;
		}while(x<j);
	    printf("%d\n",i);
	}while(a<1);
	return 0;
}