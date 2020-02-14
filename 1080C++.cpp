#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
1080 MOOC���ճɼ�
*/

typedef struct{
  char szID[21];
  int iPro;
  int iMid;
  int iFin;
  int iSum;
} Student;//����ṹ�壬����ID����̳ɼ������гɼ�����ĩ�ɼ����ܳɼ�

int cmp1(const void *a, const void *b)//����ID����ıȽϺ���
{
  Student *p=(Student *)a;
  Student *q=(Student *)b;
  return strcmp(p->szID,q->szID);
}

int cmp2(const void *a, const void *b)//�����ܳɼ���ID����ıȽϺ���
{
  Student *p=(Student *)a;
  Student *q=(Student *)b;
  int flag=0;
  if(p->iSum<q->iSum)
  {
    flag=1;
  }
  else if(p->iSum==q->iSum)
  {
    flag=strcmp(p->szID,q->szID);
  }
  return flag;
}

int cmp_bsearch(const void *str, const void *stu)//bsearch�ıȽϺ���
{
  Student *s=(Student *)stu;
  char *c=(char *)str;
  return strcmp(c,s->szID);
}

int main()
{
  int iP=0,iM=0,iN=0;
  scanf("%d%d%d",&iP,&iM,&iN);
  Student student[iP],pass[iP];//�������ͨ����̿��Ե���Ա������ͨ������Ա
  Student *s;//���ڴ��bsearch����ֵ����ʱ����
  char szTempID[21]={0};
  int iTempScore=0,iCnt=0,iCntPass=0;
  //����ͨ����̿��Ե����ݲ���ʼ��
  for(int i=0;i<iP;i++)
  {
    getchar();
    scanf("%s %d",szTempID,&iTempScore);
    if(iTempScore>=200)
    {
      strcpy(student[iCnt].szID,szTempID);
      student[iCnt].iPro=iTempScore;
      student[iCnt].iMid=-1;
      student[iCnt].iFin=-1;
      student[iCnt].iSum=0;
      iCnt++;
    }
  }
  qsort(student,iCnt,sizeof(Student),cmp1);//����ID����
  for(int i=0;i<iM;i++)
  {
    getchar();
    scanf("%s %d",szTempID,&iTempScore);
    // for(int j=0;j<iCnt;j++)
    // {
    //   if(strcmp(student[j].szID,szTempID)==0)
    //   {
    //     student[j].iMid=iTempScore;
    //     break;
    //   }
    // }
    //�����۰����
    s=(Student *)bsearch(szTempID,student,iCnt,sizeof(student[0]),cmp_bsearch);
    if(s!=NULL)
    {
      s->iMid=iTempScore;
    }
  }
  for(int i=0;i<iN;i++)
  {
    getchar();
    scanf("%s %d",szTempID,&iTempScore);
    //�۰����
    s=(Student *)bsearch(szTempID,student,iCnt,sizeof(student[0]),cmp_bsearch);
    if(s!=NULL)
    {
      s->iFin=iTempScore;
      if(s->iFin!=-1)
      {
        if(s->iFin>=s->iMid)
        {
          s->iSum=s->iFin;
        }
        else
        {
          s->iSum=(int)(0.4*s->iMid+0.6*s->iFin+0.5);
        }
      }
      if(s->iSum>=60)
      {
        pass[iCntPass++]=*s;//���������Ժϸ�����
      }
    }
    // for(int j=0;j<iCnt;j++)
    // {
      
    //   if(strcmp(student[j].szID,szTempID)==0)
    //   {
    //     student[j].iFin=iTempScore;
    //     if(student[j].iMid==-1&&student[j].iFin==-1)
    //     {
    //       fTemp=0;
    //     }
    //     else if(student[j].iMid>student[j].iFin)
    //     {
    //       if(student[j].iFin==-1)
    //       {
    //         fTemp=0.4*student[j].iMid;
    //       }
    //       else
    //       {
    //         fTemp=0.4*student[j].iMid+0.6*student[j].iFin;
    //       }
    //     }
    //     else
    //     {
    //       fTemp=student[j].iFin;
    //     }
    //     student[j].iSum=(int)(fTemp+0.5);
    //     if(student[j].iSum>=60)
    //     {
    //       pass[iCntPass++]=student[j];
    //     }
    //     break;
    //   }
    // }
  }
  qsort(pass,iCntPass,sizeof(pass[0]),cmp2);//��������
  //���
  for(int i=0;i<iCntPass;i++)
  {
    if(i==0)
    {
      printf("%s %d %d %d %d",pass[i].szID,pass[i].iPro,pass[i].iMid,pass[i].iFin,pass[i].iSum);
    }
    else
    {
      printf("\n%s %d %d %d %d",pass[i].szID,pass[i].iPro,pass[i].iMid,pass[i].iFin,pass[i].iSum);
    }
  }
  return 0;
}
