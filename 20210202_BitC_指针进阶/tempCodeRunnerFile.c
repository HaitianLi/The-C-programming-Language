void _swap(char * buf1, char * buf2, int width) {
    for (int i = 0; i < width; i++) {
        char temp = *buf1;
        *buf1 = *buf2;
        *buf2 = temp;
        buf1++;
        buf2++;
    }
}

int compare_int(const void* e1, const void* e2) {
    //void* pt 可以接收地址, 但是不能解应用进去, 因为他不是具体的类型
    //void* pt 可以接收任意类型的地址.这里可以用强制类型转换
    return (*(int*)e1  - *(int*)e2);
}