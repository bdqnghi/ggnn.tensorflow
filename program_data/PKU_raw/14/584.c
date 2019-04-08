struct student
	{
		int num;
		int chinese;
		int math;
		int sum;
	}work[100001];
void qsort(int left,int right)
{
	if (left>=right) return;
	int pindex=left,rindex=right;
   work[0]=work[left];
   while (pindex<rindex)
   {
	while ((pindex<rindex)&&(work[rindex].sum>=work[0].sum))
	 rindex--;
	if (pindex<rindex){work[pindex]=work[rindex];pindex++;}
	while ((pindex<rindex)&&(work[pindex].sum<work[0].sum))
		 pindex++;
	if (pindex<rindex){work[rindex]=work[pindex];rindex--;}
   }
   work[pindex]=work[0];
   qsort(left,pindex-1);
   qsort(pindex+1,right);
}
int main()
{
	int n,i;
	cin>>n;
	for (i=1;i<=n;i++)
	{
      cin>>work[i].num>>work[i].chinese>>work[i].math;
      work[i].sum=work[i].chinese+work[i].math;
	}
	qsort(1,n);
	for (i=0;i<=2;i++)
	cout<<work[n-i].num<<" "<<work[n-i].sum<<endl;
	return 0;
}