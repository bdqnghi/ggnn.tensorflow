int main()
{
	int r,c,a[100][100],b[10000]={0},i=0,j=0,p=0,q=0;
	int z1,z2,z3,z4;
	scanf("%d",&r);
    scanf("%d",&c);
	z1=z2=0,z3=r-1,z4=c-1;
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
	scanf("%d",&a[i][j]);}}
	if(c==1||r==1){
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d\n",a[i][j]);}}}
	else{
	b[0]=a[0][0];
	i=0,j=1;
    for(p=1;p<(c*r);p++){
		switch(q){
		case 0:b[p]=a[i][j];j++;break;
			case 1:b[p]=a[i][j];i++;break;
				case 2:b[p]=a[i][j];j--;break;
					case 3:b[p]=a[i][j];i--;break;
					default:break;}
		if(j==z4&&i==z1&&q==0){q=1;z1++;}
		else if(i==z3&&j==z4&&q==1){q=2;z4--;}//??????
		else if(j==z2&&i==z3&&q==2){q=3;z3--;}
		else if(i==z1&&j==z2&&q==3){q=0;z2++;}
	}
	for(q=0;q<(c*r);q++){
		printf("%d\n",b[q]);}}
		
		
}