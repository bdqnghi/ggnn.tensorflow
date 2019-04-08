int main (){
	int i=0,j=0,k=0;
	char name[4]={'z','q','s','l'};
	int mz=1,mq=1,ms=1,ml=1;//?????????????????????????????????
	int m[4]={1,1,1,1};
	for(mz=1;mz<=5;++mz)
		for(mq=1;mq<=5;++mq)
			for(ms=1;ms<=5;++ms)
				for(ml=1;ml<=5;++ml)
				{
					if((mz+mq==ms+ml)&&(mz+ml>ms+mq)&&(mz+ms<mq))
					{
						m[0]=mz;m[1]=mq;m[2]=ms;m[3]=ml;
						for(i=0;i<=2;i++)
							for(j=3;j>=i+1;j--)
							{
								if(m[j]>m[j-1])
								{
									k=m[j];m[j]=m[j-1];m[j-1]=k;
									k=name[j];name[j]=name[j-1];name[j-1]=k;
								}
							}
					}

						//cout<<"l "<<ml*10<<endl<<"q "<<mq*10<<endl<<"z "<<mz*10<<endl<<"s "<<ms*10<<endl;
				}
    for(k=0;k<=3;k++)
    	cout<<name[k]<<" "<<m[k]*10<<endl;
	return 0;
}