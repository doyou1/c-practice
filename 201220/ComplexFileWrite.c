#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;

    FILE * fp=fopen("C:\\Users\\jh\\c_practice\\201220\\friend.txt","wt");
    int i;

    for(i=0;i<3;i++)
    {
        printf("이름 성별 나이순 입력 : ");
        scanf("%s %c %d", name, &sex, &age);
        getchar();  // 버퍼에 남아있는 \n의 소멸을 위해
        fprintf(fp, "%s %c %d ", name,sex,age);
    }
    fclose(fp);
    return 0;
}