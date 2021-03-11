/*
 * @Author: Haitian Li
 * @Date: 2021-03-09 18:52:46
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-09 20:20:28
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */

#include "contact.h"


void InitContact(struct Contact* pc) {
    pc ->size = 0;
    //memset 设置内存
    memset(pc ->data, 0, sizeof(pc->data));
}

void AddContact(struct Contact * pc) {
    if (pc ->size == CONTACT_MAX) {
        printf("通讯录满");
    } else {
        printf("name: ");
        scanf("%s", pc->data[pc->size].name);
        printf("age: ");
        scanf("%d", &(pc->data[pc->size].age));
        printf("Gendar: ");
        scanf("%s", pc->data[pc->size].gendar);
        printf("tele: ");
        scanf("%s", pc->data[pc->size].tele);
        printf("Address: ");
        scanf("%s", pc->data[pc->size].addr);
        pc->size++;          
    }
}

void ShowContact(const struct Contact * pc) {
    int i = 0;
    printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "name", "age", "gendar","tele", "Address");
    if (pc->size == 0) {
        printf("Empty\n");
    } else {
        for (i = 0; i < pc->size; i++) {
            printf("%15s\t%5d\t%5s\t%12d\t%20s\n", pc->data[i].name,pc->data[i].age,pc->data[i].gendar,pc->data[i].tele,pc->data[i].addr);
        }
        
    }
    
}
int FindByname(struct Contact* pc, char name) {
    for (int i = 0; i < pc->size; i++) {
        if (strcmp(pc->data[i].name, name) == 0) {
            return i;
        }
    }
    return -1;

}

void DelContact(struct Contact* pc) {
    char name[NAME_MAX];
    
    if (pc->size == 0) {
        printf("Empty\n");
    } else {
        printf("Enter the name to delete: ");
        scanf("%s", name);
        int index = FindByname(pc, name);
        
        if (index == -1) {
            printf("No such person.\n");
        } else {
            for (int i = 0; i < pc->size - 1; i++) {
                pc->data[i] = pc->data[i + 1];
            }
            pc->size--;
            printf("Deleted.\n");
        }
    }
    

}

void SearchContact(struct Contact* pc) {
    
    char name[NAME_MAX];
    printf("search by name: ");
    scanf("%s", name);
    int index = FindByname(pc, name);

    if (index == -1) {
        printf("No such person.\n");
    } else {
        printf("%15s\n", pc->data[index].name);
        printf("%15d\n", pc->data[index].age);
        printf("%15d\n", pc->data[index].tele);
    }

}