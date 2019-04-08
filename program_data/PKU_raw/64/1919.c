struct distants
{double d;
int x;
int y;
}b[45],mid;

int main()
{int n,i,j,num=0;
int a[10][3];
struct distants b[45],mid;

scanf("%d",&n);
if(n<=10){
	for(i=0;i<n;i++){
		for(j=0;j<3;j++)
		{scanf("%d",&a[i][j]);}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
		b[num].d=sqrt((double)((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2])));
		b[num].x=i;
		b[num].y=j;
		num++;
		}
	}//????num????b[num-1].d

	for(i=1;i<num;i++)
		{  
			for(j=1;j<=num-i;j++)
			{  
				if((b[j-1].d<b[j].d)||((b[j-1].d-b[j].d<1e-6)&&(b[j-1].x>b[j].x))||((b[j-1].d-b[j].d<1e-6)&&(b[j-1].x==b[j].x)&&(b[j-1].y>b[j].y)))
				{
					
					mid=b[j-1];
					b[j-1]=b[j];
					b[j]=mid;
				}
			}
		}
	
			for(i=0;i<num;i++){

		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[b[i].x][0],a[b[i].x][1],a[b[i].x][2],a[b[i].y][0],a[b[i].y][1],a[b[i].y][2],b[i].d);

			}
}
return 0;
}


	

