#include<iostream>
#include<algorithm>
#include<map>

/*
1085 PAT��λ����
*/

using namespace std;
struct sch{
    string name;
    float score=0;
    int stu=0;
}arr[100005];//����������С�㣬ѧУ��ô������ô��
bool cmp(sch A,sch B){
    if((int)A.score!=(int)B.score) return (int)A.score>(int)B.score;//������ͬ��˭��˭��ǰ
    else if(A.stu!=B.stu) return A.stu<B.stu;       //������ͬ��ѧ������ͬ��ѧ����С����ǰ
    else return A.name<B.name;          //����ֻ�����ֵ����ˣ�˭С˭���ֵ�����ǰ
}
int main(){
    int N;scanf("%d",&N);           //ѧ�����Ķ��������
    int num=0;//ѧУ��
    map<string,int> mp;                         //mp�������ѧУ���ַ������ṹ�������ӳ��
    for(int i=0;i<N;i++){
        string id,school;float score;
        cin>>id;scanf("%f",&score);cin>>school;
        for(int j=0;j<school.length();j++){         //���ֱ�Сд
            school[j]=tolower(school[j]);
        }
        if(id[0]=='B') score/=1.5;          //���㵱ǰѧ�����Ը�ѧУ�������ٷ�
        if(id[0]=='T') score*=1.5;
        if(mp.count(school)==0){            //�����ѧУ��һ�γ���
            mp[school]=num++;
            arr[num-1].name=school;
        }
        arr[mp[school]].score+=score;           //�����ѧУ�������ѧ���ķ�
        arr[mp[school]].stu++;          //ѧУ��ѧ�����Ӽ�
    }
    sort(arr,arr+num,cmp);              //�Խṹ�������������
    int mingci=1;
    printf("%d\n1 ",num);               //�������ѧУ���͵�һ����ѧУ
    cout<<arr[0].name;
    printf(" %d %d",(int)arr[0].score,arr[0].stu);
    for(int i=1;i<num;i++){                     //�ӵڶ���ѧУ��ʼ��
        if((int)arr[i].score!=(int)arr[i-1].score)  //���������ǰһ��ѧУ��ͬ����Ȼmingci����ͬ��
            mingci=i+1;             //���������ͬ����ô�������õ���i+1
        printf("\n%d ",mingci);             //�����ǰѧУ����Ϣ
        cout<<arr[i].name;
        printf(" %d %d",(int)arr[i].score,arr[i].stu);
    }
    return 0;
}
