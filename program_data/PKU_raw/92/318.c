int com(const void *ele1,const void *ele2)
{
    int *p1,*p2;
    p1=(int*)ele1;
    p2=(int*)ele2;
    return *p2-*p1;
}


int main(int argc, char *argv[])
{
    int a[1000],b[1000],num,win=0,shu=0,i;
    while(1)
    {
		
		cin>>num;
		if(num==0)
			break;
		win=0;
		int tt=num-1;
		int tq=num-1;
		int ht=0;
		int hq=0;
		shu=0;
		for(i=0;i<num;i++)
			cin>>a[i];
		for(i=0;i<num;i++)
			cin>>b[i];
		qsort(a,num,sizeof(int),com);
		qsort(b,num,sizeof(int),com);
		while(ht<=tt)
		{
			if(b[tq]>a[tt])
			{
				hq++;
				tt--;
				shu++;
			}
			else if(b[tq]<a[tt])
			{
				win++;
				tt--;
				tq--;
			}
			else
			{
				if(a[ht]>b[hq])
				{
					win++;
					ht++;
					hq++;
				}
				else
				{
					if(a[tt]<b[hq])
						shu++;
					hq++;
					tt--;
			    }
				
			}
		}
		cout<<200*(win-shu)<<endl;
	}
    return EXIT_SUCCESS;
}