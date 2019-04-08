main()
{
	int a[100][100];
	int row,col,i,j,temp[4]={1,0,1,0},flag=0,t;
	scanf("%d%d",&row,&col);
	temp[1]=row-2;
	temp[3]=col-2;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}

	
	if(row!=1&&col!=1){

	
		
	i=0;j=0;p(a[0][0]);
	while((temp[0]-temp[1])*(int)pow(-1,flag)<0 && (temp[2]-temp[3])*(int)pow(-1,flag)<0){

		if(col<=3) {break;}

		for(j=temp[2];(j-temp[3])*(int)pow(-1,flag)<=0;j+=(int)pow(-1,flag)){
			p(a[i][j]);
		}
		p(a[i][j]);

		for(i=temp[0];(i-temp[1])*(int)pow(-1,flag)<=0;i+=(int)pow(-1,flag)){
			p(a[i][j]);
		}
		p(a[i][j]);

		t=temp[0];temp[0]=temp[1];temp[1]=t;
		t=temp[2];temp[2]=temp[3];temp[3]=t;
		flag++;

		for(j=temp[2];(j-temp[3])*(int)pow(-1,flag)<=0;j+=(int)pow(-1,flag)){
			p(a[i][j]);
		}
		p(a[i][j]);

		for(i=temp[0];(i-temp[1])*(int)pow(-1,flag)<=0;i+=(int)pow(-1,flag)){
			p(a[i][j]);
		}
		p(a[i+1][j+1]);


		t=temp[0];temp[0]=temp[1];temp[1]=t;
		t=temp[2];temp[2]=temp[3];temp[3]=t;

		temp[0]++;temp[2]++;temp[1]--;temp[3]--;
		i++;

		flag++;
	}

	if(col==3) j--;
	if(temp[0]==temp[1]){
		i=i+1;
		for(j=temp[2];j<=temp[3];j++) p(a[i-1][j]);j--;
		p(a[i-1][j+1]);p(a[i][j+1]);p(a[i+1][j+1]);
		for(j=temp[3];j>=temp[2];j--) p(a[i+1][j]);j++;
		p(a[i+1][j-1]);p(a[i][j-1]);
		for(j=temp[2];j<=temp[3];j++) p(a[i][j]);
	}

	else if(temp[2]==temp[3]){
		j=j+2;
		p(a[temp[0]-1][j]);p(a[temp[0]-1][j+1]);
		for(i=temp[0];i<=temp[1]+1;i++) p(a[i][j+1]);i--;
		p(a[i][j]);
		for(i=temp[1]+1;i>=temp[0];i--) p(a[i][j-1]);i++;
		for(i=temp[0];i<=temp[1];i++) p(a[i][j]);
	}
	
	else if(abs(temp[2]-temp[3])==1 && abs(temp[0]-temp[1])!=1){
		for(j=temp[2]+1;j<=temp[3];j++) p(a[i][j]);i++;
		for(j=temp[3];j>=temp[2];j--) p(a[i][j]);
	}

	else{
		p(a[i][j+2]);p(a[i+1][j+2]);p(a[i+1][j+1]);
	}

	if(row==2){
		for(i=1;i<col;i++) p(a[0][i]);
		for(i=col-1;i>=0;i--) p(a[1][i]);
	}

	if(col==2){
		for(i=0;i<row;i++) p(a[i][1]);
		for(i=row-1;i>0;i--) p(a[i][0]);
	}


	}

	else if(row==1&&col==1) p(a[0][0]);
	else if(row==1||col==1){
		p(a[0][0]);
		if(row==1) for(i=1;i<col;i++) p(a[0][i]);
		if(col==1) for(i=1;i<row;i++) p(a[i][0]);
	}

}
