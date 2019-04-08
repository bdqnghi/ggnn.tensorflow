struct Student {
        int ID;
        int chinese;
        int maths;
        int sum;
};
int main() {
        struct Student stu[3],t;        //????????
        stu[0].sum =stu[1].sum =stu[2].sum =0;  //???????0
        int i, n;
        cin >> n;
        for (i = 0; i < n; i++) {
                cin >> t.ID >> t.chinese >> t.maths;
                t.sum = t.chinese + t.maths;
                // ????????????
                if(t.sum>stu[0].sum){
                        stu[2] = stu[1];        //????????????????
                        stu[1] = stu[0];
                        stu[0] = t;
                } else if(t.sum>stu[1].sum){    //???????????
                        stu[2] = stu[1];                //???????????????
                        stu[1] = t;
                } else if(t.sum>stu[2].sum){    //???????????
                        stu[2] = t;                     //??????????
                }
        }
        //?????????????
        for (i = 0; i < 3; i++) {
                cout << stu[i].ID << " " << stu[i].sum << endl;
        }
        return 0;
}
