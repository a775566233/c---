#include<stdio.h>
#include<ctype.h>
#define end '|'
#define SIZE 60
int main(void)
{
    char c;//�û��������ĸ
    int alphabet,word,Alphabet,line,blank,num,comma,period,other;//��Щ��Ҫͳ�Ƶ�����
    int i;//��Щ�����Ǽ���������ʵ������
    alphabet=word=Alphabet=line=blank=num=comma=period=other=0;
    printf("���������ɸ����ӡ����ŵȣ�������ͳ��\n�û�����ĵ��ʡ���Сд��ĸ�����������š���š��ո����ֺ������ַ���\n");
    printf("�������ʱ�������롰|���Խ���ͳ�ơ�\n");
    for(i=0;i<SIZE;i++)
    {
        printf("*");
        if(i==29)
            printf("��ֻ�Ǹ��ָ���");
    }
    printf("\n");
    i=0;
    while((c = getchar())!=end)
    {
        if(isdigit(c))//ͳ������
            num++;
        if(islower(c))//ͳ��Сд��ĸ
        {
            alphabet++;
            i++;
        }
        else if(isupper(c))//ͳ�ƴ�д��ĸ
        {
            Alphabet++;
            i++;
        }
        if(c==',')
            comma++;
        if(c=='.')
            period++;
        if(c=='\a')//ͳ�ƿո�
            blank++;
        if(c=='\n')//ͳ����
            line++;
        if(ispunct(c)&&c!=','&&c!='.')
            other++;
        if(ispunct(c)||isspace(c)||isdigit(c))
        {
            i=0;
            continue;
        }
        if(i==1)//ͳ�Ƶ���
            word++;
    }
    for(i=0;i<SIZE;i++)
    {
        printf("*");
        if(i==29)
            printf("��ֻ�Ǹ��ָ���");
    }
    printf("\n");
    printf("�����������Ϊ��ͳ������\n");
    printf("��������%d����д��ĸ��%d��Сд��ĸ��%d����,����%d����.����%d�������ַ���%d�����ʣ���%d��������(�Ծ�Ž�β)��������%d�С�\n",Alphabet,alphabet,comma,period,other,word,period,line);
    getchar();
    getchar();
return 0;
}
