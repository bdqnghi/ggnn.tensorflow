int main()
{
int row, line, l, r, t=9, s=9, q=9;
	int a[8][8], max=0, min=100;
	scanf("%d,%d", &row, &line);
	for(r=0;r<row;r++){
		for(l=0;l<line;l++){
			scanf("%d", &a[r][l]);
		}
	}
	for(r=0;r<row;r++){
		for(l=0;l<line;l++){
            if(max<a[r][l]){
				max=a[r][l];
				t=l;
			}
		}
		for(s=0;s<row;s++){
			if(min>a[s][t]){
				min=a[s][t];
				q=s;
			}
		}
		if(max==min){
			break;
		}
		else{
			q=9;
		    t=9;
		}
	}
	if(q!=9&&t!=9)
		printf("%d+%d", q, t);
	else 
		printf("No");
	return 0;
}