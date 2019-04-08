/*
 * ???? 
 * ?? 
 * 2011?11?06?
 * ???? 
 */
int main()
{
	int a,b,c,d,e,A,B,C,D,E,i;//????
	int num[3]={1,4,5};
	for(a=1;a<6;a++)
		for(b=1;b<6;b++)//????abcde????
		{
			if(a==b)continue;
			for(c=1;c<6;c++)
			{
				if(c==a||c==b)continue;
				for(d=1;d<6;d++)
				{
					if(d==a||d==b||d==c)continue;
					for(i=0;i<3;i++)
						{
							e=num[i];
							if(e==a||e==b||e==c||e==d)continue;
							else//????????
							{
								A=(e==1);
								B=(b==2);
								C=(a==5);
								D=(c!=1);
								E=(D==1);
								if((A+B+C+D+E==2)&&!((a!=1&&a!=2)&&A==1)&&!((b!=1&&b!=2)&&B==1)&&!((c!=1&&c!=2)&&C==1)&&!(e!=1 &&E==1))
								{
									cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
									break;
								}//?????
							}
					}
				}
			}
		}
	return 0;
}