/*
 * @Author: Haitian Li
 * @Date: 2021-03-09 18:52:41
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-09 20:16:40
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define NAME_MAX 20
#define GENDER_MAX 5
#define TELE_MAX 12
#define ADDR_MAX
#define CONTACT_MAX 1000

//个人信息结构体
struct PeopleInfo {
    char name[NAME_MAX];
    int age;
    char gendar[GENDER_MAX];
    char tele[TELE_MAX];
    char addr[ADDR_MAX];
};

//通讯录结构体--
struct Contact {
    struct PeopleInfo data[CONTACT_MAX];
    int size; //当前存放的数量
};

//初始化通讯录的函数
void InitContact(struct Contact * pc);

void AddContact(struct Contact * pc);

//打印通讯录中的信息
void ShowContact(const struct Contact * pc);

void DelContact(struct Contact* pc);

void SearchContact(struct Contact* pc);