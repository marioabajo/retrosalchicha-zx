// Mapa.h 
// Generado por MapCnv de la churrera
// Copyleft 2010 The Mojon Twins
 
unsigned char mapa [] = {
    17, 17, 17, 17, 17, 17, 17, 17, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 64, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 32, 0, 16, 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 48, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 8, 
    17, 17, 17, 17, 17, 17, 17, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 9, 0, 0, 16, 0, 0, 0, 0, 160, 0, 1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 12, 0, 0, 14, 0, 1, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 1, 
    
    16, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 85, 85, 85, 80, 0, 16, 0, 0, 0, 240, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 1, 17, 17, 17, 17, 17, 17, 17, 
    128, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 7, 109, 0, 1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 176, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 17, 17, 17, 17, 17, 17, 17, 17
};
 
#define MAX_CERROJOS 1
 
typedef struct {
    unsigned char np, x, y, st;
} CERROJOS;
 
CERROJOS cerrojos [MAX_CERROJOS] = {
    {2, 8, 4, 0}
};
 