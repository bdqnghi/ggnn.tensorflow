struct statistics
{int num;  int chinese;  int math;  int sum;}
 form[100000],temp;
int main()
{ int n;
scanf("%d",&n);
int i,j;
for(i=0;i<n;i++)
{scanf("%d %d %d",&form[i].num,&form[i].chinese,&form[i].math);
form[i].sum=form[i].chinese+form[i].math;}for(i=0;
i<3&&i<n-1;i++){int k=i;for(j=i+1;j<n;j++){if(form[j].sum>form[k].sum){k=j;}
}
if (k!=i){temp=form[i];
form[i]=form[k];
form[k]=temp; }}
for(i=0;i
<3&&i<n;i++)printf("%d %d\n",form[i].num,form[i].sum);
return 0;}