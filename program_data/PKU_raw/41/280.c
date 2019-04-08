int main()
{
	int A,B,C,D,E;
	for(A=1;A<=5;A++)
	{
		for(B=1;B<=5;B++)
		{
			if(B==A)
            continue;
			for(C=1;C<=5;C++)
			{
				if((C==A)||(C==B))
					continue;
				for(D=1;D<=5;D++)
				{
					if((D==A)||(D==B)||(D==C))
						continue;
					for(E=1;E<=5;E++)
					{
						if((E==A)||(E==B)||(E==C)||(E==D))
							continue;
						{
						if((E!=2)&&(E!=3))
						{  
							int a,b,c,d,e;
							a=(E==1),b=(B==2),c=(A==5),d=(C!=1),e=(D==1);
							if(a+b+c+d+e==2)
							{
								if((a+b==2)+(A+B==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
							    if((a+c==2)+(A+C==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((a+d==2)+(A+D==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((a+e==2)+(A+E==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((b+c==2)+(B+C==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((b+d==2)+(B+D==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((b+e==2)+(B+E==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((c+d==2)+(C+D==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((c+e==2)+(C+E==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
                                if((d+e==2)+(D+E==3)==2)
									cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
							}
						}
							
						}
					}
				}
			}
		}
	}
return 0;
}
	
