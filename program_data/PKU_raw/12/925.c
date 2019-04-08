int main()
{
    int l1,l2;
    int pair(int n[15]);
    int num[15]={0};
    for (l1=0;(num[0]!=-1);l1++){
        scanf("%d",&num[0]);
        for (l2=1;(num[l2-1]!=0)&&(num[0]!=-1);l2++){
            scanf("%d",&num[l2]);
            }
        if (num[0]!=-1) printf("%d\n",pair(num));
        }
	return (0);	
}
int pair(int n[15])
{
    int sum,i,j,k,x;
    sum=0;
    for (i=1;(n[i]!=0);i++){
        if (n[i]==(n[0]+n[0])) sum=sum+1;
        }
    for (j=1;(n[j-1]!=0);j++){
        for (k=0;(n[k]!=0);k++){
            if (n[k]==n[j]*2) sum=sum+1;
            }
        }
    return(sum);
    }