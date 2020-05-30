// word count.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<stdio.h>  
#include<string.h>  
int n, count;
char arr[100];
char temp[100][100];
void word()
{
    char* p = arr;
    int j = 0;
    while (*p)
    {
        if (*p == ' ' && *(p + 1) != ' ')
        {
            temp[n][j] = '\0';
            j = 0;
            n++;
        }
        if (*p != ' ')
        {
            temp[n][j++] = *p;
        }
        p++;
    }
}
void different()
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            if (strcmp(temp[i], temp[j]) == 0)
            {
                strcpy_s(temp[j], "");
            }
        }
        if (strcmp(temp[i], "") != 0)
            count++;
    }
    printf("%d\n", count);
}
void countword()
{
    int i, w;
    i = w = 0;
    for (i = 0; i < 100; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            w++;
        }

    }
    printf("%d", w);
}
int main()
{
    while (gets_s(arr))
    {
        n = 0;
        count = 0;
        word();
        different();
        countword();
    }

    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
