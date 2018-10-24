#ifndef MENU_H_
#define MENU_H_

#include <stdint.h>

typedef struct Menu_element{
    char* name;
    uint8_t line;
    struct Menu_element* up;
    struct Menu_element* down;
    struct Menu_element* choose;
    struct Menu_element* back;
    //void (*function_peker) (int,char);
}menu_element;

void menu_driver(void);
menu_element* create_menu();
#endif
