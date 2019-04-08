int main(int argc, char* argv[])
{
	int n,sum[100],i,j;
	scanf("%d",&n);
		struct{
		char name[20];
		int average;
		int clas;
		char gan;
		char xi;
		int lun;
	}a[100];
		for(i=0;i<n;i++){
	    sum[i]=0;
		scanf("%s %d %d %c %c %d",a[i].name,&a[i].average,&a[i].clas,&a[i].gan,&a[i].xi,&a[i].lun);
		}
		for(i=0;i<n;i++)
		{
			if(a[i].average > 80 && a[i].lun >= 1)
				sum[i]+=8000;
			if(a[i].average > 85 &&   a[i].clas > 80 )
				sum[i]+=4000;
			if(a[i].average > 90)
				sum[i]+=2000;
			if(a[i].average > 85 && a[i].xi=='Y' )
				sum[i]+=1000;
			if(a[i].clas > 80 && a[i].gan=='Y')
				sum[i]+=850;
		}
		int s=sum[0],d=sum[0];
		for(i=1;i<n;i++)
		{	d+=sum[i];
			if(sum[i]>s)
		{s=sum[i];
		j=i;}
		}
		printf("%s\n",a[j].name);
		printf("%d\n",sum[j]);
		printf("%d\n",d);

	
	return 0;
}

