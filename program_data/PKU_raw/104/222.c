int main()
{
	int x,y,sx=0,sy=0,an=0;
	cin>>x>>y;
	int jx[10],jy[10];
	jx[0]=x,jy[0]=y;sx++;
	for(int i=1;jx[i-1]>=2;i++){
		jx[i]=jx[i-1]/2;
		sx++;
	}
	for(int i=1;jy[i-1]>=2;i++){
		jy[i]=jy[i-1]/2;
		sy++;
	}
	for(int i=0;i<=sx;i++){
		if(an!=0){cout<<an;
		          break;	}
		for(int j=0;j<=sy;j++){
			if(jx[i]==jy[j]){
				an=jx[i];
				break;	}
		}
	}
	return 0;
}