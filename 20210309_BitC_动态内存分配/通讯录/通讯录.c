/*
 * @Author: Haitian Li
 * @Date: 2021-03-09 18:47:00
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-09 19:35:20
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
//一个通讯录可以保存1000个人的信息
/*个人信息:
    名字:
    年龄:
    性别:
    电话:
    住址:

    功能:
        1. 增加一个人的信息
        2. 删除一个指定的联系人
        3. 查找一个指定的联系人
        4. 修改一个指定的联系人
    文件:
        test.c 测试整个通讯录的逻辑
        contact.h 通讯录相关的头文件
        contact.c 通讯录相关的函数文件
*/

#include "contact.h"

void menu() {
    printf("1.add\n");
    printf("2.del\n");
    printf("3.search\n");
    printf("4.modify\n");
    printf("5.show\n");
    printf("6.sort\n");
    printf("0.exit\n");
}

enum Option {
    EXIT,
    ADD,
    DEL,
    SEARCH,
    MODIFY,
    SHOW,
    SORT
};

void test() {
    int input = 0;
    
    struct Contact con; 
    // 初始化通讯录
    InitContact(&con);
    
    do {
        menu();
        printf("please choose: ");
        scanf("%d", &input);
        
        switch (input)
        {
        case ADD:
            AddContact(&con);
            break;
        case DEL:
            /* code */
            break;
        case SEARCH:
            /* code */
            break;
        case MODIFY:
            /* code */
            break;
        case SHOW:
            ShowContact(&con);
            break;
        case SORT:
            /* code */
            break;
        case EXIT:
            printf("Exit\n");
            break;
    
        }

    } while (input);
}

int main() {

    test();
    return 0;
}