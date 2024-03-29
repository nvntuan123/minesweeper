#pragma once
void matrixCreate(); // taoMang2ChieuDong
void matrixDelete(); // xoaMang2ChieuDong
void init(short SDong, short SCot, short SSoBom); // khoiTao
void randomMineCreate(); // taoBomNgauNhien
void eventProcessing(); // xuLySuKien
void win(); // thang
void lose(); // thua

// design
void drawGameTitle(); // veTieuDeGame
void drawBox(short SX, short SY, short SKieu); // veO
void drawTable(); // veBang
void drawPlayGameStatus(short STrangThai, short SCheDo, short SIndex); // veTrangThaiChoiGame
void drawMainMenu(short SIndex); // veMenuChinh
void drawLevelMenu(short SIndex); // veMenuCapDo
