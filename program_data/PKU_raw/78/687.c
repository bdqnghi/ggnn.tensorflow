int main()
{
	int z=0,q=0,s=0,l=0;
	for(z=10;z<=50;z=z+10)
		for(q=10;q<=50;q=q+10)
			for(s=10;s<=50;s=s+10)
				for(l=10;l<=50;l=l+10)
				{
					if((((z+q)==(s+l))+((z+l)>(s+q))+((z+s)<q))==3)
						{int i,j,t,a[5]={0,z,q,s,l};//
						char u,name[5]={'x','z','q','s','l'};
						for(j=1;j<=3;j++)
							for(i=1;i<=4-j;i++)
								if(a[i]>a[i+1])
								{t=a[i];a[i]=a[i+1];a[i+1]=t;
								 u=name[i];name[i]=name[i+1];name[i+1]=u;}//?????????????
								cout<<name[4]<<' '<<a[4]<<'\n';
								cout<<name[3]<<' '<<a[3]<<'\n';
								cout<<name[2]<<' '<<a[2]<<'\n';
								cout<<name[1]<<' '<<a[1]<<'\n';



						}

				}

}
