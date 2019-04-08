int main (){
	int i,j,t=0,max=0,n;
	int xy[100][2];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			scanf ("%d",&xy[i][j]);
		}
	}
	for (j=0;j<n;j++){
		if (xy[j][0]>=90&&xy[j][0]<=140&&xy[j][1]>=60&&xy[j][1]<=90){
			t=t+1;
			for (i=j+1;i<n;i++){
                  if (xy[i][0]>=90&&xy[i][0]<=140&&xy[i][1]>=60&&xy[i][1]<=90){
					  t++;
				  }
				  else break;
			}
			if (t>max)  max=t;
			
		}
		t=0;
	}
	printf ("%d",max);
	return  0;
}


