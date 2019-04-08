
int main()
{
	struct st
	{int id;
	int yu;
	int ma;
	};
	int n,i;
	struct st st1={0,0,0},st2={0,0,0},st3={0,0,0},stn;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&stn.id,&stn.yu,&stn.ma);
		if(stn.yu+stn.ma>st1.yu+st1.ma){
			st3=st2;
			st2=st1;
			st1=stn;
		}else{
			if(stn.yu+stn.ma>st2.yu+st2.ma){
				st3=st2;
				st2=stn;
			}else{
				if(stn.yu+stn.ma>st3.yu+st3.ma){
					st3=stn;
				}
			}
		}
	}
	printf("%d %d\n%d %d\n%d %d",st1.id,st1.yu+st1.ma,st2.id,st2.yu+st2.ma,st3.id,st3.yu+st3.ma);
}