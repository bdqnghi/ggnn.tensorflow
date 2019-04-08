
int main(int argc, char* argv[])
{
	int a[101][101],i,j,p,n=0,row,col;
	scanf("%d %d",&row,&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
		    scanf("%d",&a[i][j]);
		}
	}


	for(p=1;p<=50;p++){
		for(i=p;i<=col+1-p;i++){
		    printf("%d\n",a[p][i]);
			n++;
		}
		if(n==row*col){
			    break;
		}
		for(i=p+1;i<=row+1-p;i++){
		    printf("%d\n",a[i][col+1-p]);
			n++;
			}
		if(n==row*col){
			    break;
		}
		for(i=col-p;i>=p;i--){
		    printf("%d\n",a[row+1-p][i]);
			n++;
		}		
		if(n==row*col){
			    break;
		}
		for(i=row-p;i>=p+1;i--){
		    printf("%d\n",a[i][p]);
			n++;
		}
		if(n==row*col){
			    break;
			}
	}
	return 0;
}