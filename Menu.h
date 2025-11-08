#indef SENECA_MENU_H
#define SENECA_MENU_H

namespace seneca {


    class MenuItem{
          char* MenuItemContent;
          size_t indentations;
          size_t size;
          int numbers;
     }
public:
    MenuItem(const char* MenuItemContent, int numIndent, int indentSize, int rowNum);
    
};
    
