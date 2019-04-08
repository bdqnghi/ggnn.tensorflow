int main()
{
	int n,i,a,b,av,bv;
	av=0;
	bv=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
	scanf("%d%d", &a, &b);
	switch (a){
	case 0:
		if(b==1){
		av++;}
		if(b==2){
		bv++;}
		break;
	case 1:
		if(b==2){
		av++;}
		if(b==0){
		bv++;}
		break;
	case 2:
		if(b==0){
		av++;}
		if(b==1){
		bv++;}
		break;
	}
	}
	if(av>bv){
	printf("A");}
	if(av==bv){
	printf("Tie");}
	if(av<bv){
	printf("B");}
	return 0;
}
