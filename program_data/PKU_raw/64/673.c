struct point{             //?????point?????
	int x;
	int y;
	int z;
}pt[50];
struct data{              //?????data????????
	int num;
	struct point a;       //?1
	struct point b;       //?2
	double distance;      //??
}dt[10000],temp;
int main(){
	int n,i,j;            //????n????i?j
	cin>>n;
	for(i=0;i<n;i++)      //???????
	{
		cin>>pt[i].x;
		cin>>pt[i].y;
		cin>>pt[i].z;
	}
	int t=0;              //??dt??
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			dt[t].num=t;
			dt[t].a=pt[i];
			dt[t].b=pt[j];
			dt[t].distance=sqrt((pt[i].x-pt[j].x)*(pt[i].x-pt[j].x)+(pt[i].y-pt[j].y)*(pt[i].y-pt[j].y)+(pt[i].z-pt[j].z)*(pt[i].z-pt[j].z)); //????
			t++;
		}
	int k;               //??dt??
	k=t;
	for(i=0;i<k;i++)     //??
		for(j=i+1;j<k;j++)
		{
			if(dt[i].distance<dt[j].distance||(dt[i].distance==dt[j].distance&&dt[i].num>dt[j].num))
			{
				temp=dt[i];
				dt[i]=dt[j];
				dt[j]=temp;
			}
		}
	for(i=0;i<k;i++)     //??
	{
		cout<<"("<<dt[i].a.x<<","<<dt[i].a.y<<","<<dt[i].a.z<<")-("<<dt[i].b.x<<","<<dt[i].b.y<<","<<dt[i].b.z<<")=";
		printf("%.2lf\n",dt[i].distance);
	}
	return 0;
}

