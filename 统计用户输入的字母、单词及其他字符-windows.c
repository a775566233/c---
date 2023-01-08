#include<stdio.h>
#include<ctype.h>
#define end '|'
#define SIZE 60
int main(void)
{
    char c;//用户输入的字母
    int alphabet,word,Alphabet,line,blank,num,comma,period,other;//这些是要统计的数据
    int i;//这些变量是计数器，无实际意义
    alphabet=word=Alphabet=line=blank=num=comma=period=other=0;
    printf("请输入若干个句子、符号等，本程序将统计\n用户输入的单词、大小写字母、行数、逗号、句号、空格、数字和其他字符。\n");
    printf("输入结束时，请输入“|”以结束统计。\n");
    for(i=0;i<SIZE;i++)
    {
        printf("*");
        if(i==29)
            printf("我只是个分割线");
    }
    printf("\n");
    i=0;
    while((c = getchar())!=end)
    {
        if(isdigit(c))//统计数字
            num++;
        if(islower(c))//统计小写字母
        {
            alphabet++;
            i++;
        }
        else if(isupper(c))//统计大写字母
        {
            Alphabet++;
            i++;
        }
        if(c==',')
            comma++;
        if(c=='.')
            period++;
        if(c=='\a')//统计空格
            blank++;
        if(c=='\n')//统计行
            line++;
        if(ispunct(c)&&c!=','&&c!='.')
            other++;
        if(ispunct(c)||isspace(c)||isdigit(c))
        {
            i=0;
            continue;
        }
        if(i==1)//统计单词
            word++;
    }
    for(i=0;i<SIZE;i++)
    {
        printf("*");
        if(i==29)
            printf("我只是个分割线");
    }
    printf("\n");
    printf("输入结束，将为您统计数据\n");
    printf("您输入了%d个大写字母、%d个小写字母、%d个“,”、%d个“.”、%d个其他字符、%d个单词，在%d个句子中(以句号结尾)，共分了%d行。\n",Alphabet,alphabet,comma,period,other,word,period,line);
    getchar();
    getchar();
return 0;
}
