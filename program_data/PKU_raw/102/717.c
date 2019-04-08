
int n;
double male[50],female[50];
int cntm,cntf;
char sex[10];

int main()
{
    cin>>n;
    cntm=cntf=0;
    for(int i=0;i<n;i++)
    {
            scanf("%s",sex);
            if(strcmp(sex,"male")==0)
                  cin>>male[cntm++];
            else
                cin>>female[cntf++];
    }
    sort(male,male+cntm);
    sort(female,female+cntf);
    for(int i=0;i<cntm;i++)
            printf("%.2f ",male[i]);
    for(int i=cntf-1;i>0;i--)
            printf("%.2f ",female[i]);
    printf("%.2f\n",female[0]);
    return 0;
}
