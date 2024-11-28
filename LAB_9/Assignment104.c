#include <stdio.h>
typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
} Color;

const char* getHexCode(Color color) {
    switch (color) {
        case RED: return "#FF0000";
        case GREEN: return "#00FF00";
        case BLUE: return "#0000FF";
        case YELLOW: return "#FFFF00";
        case BLACK: return "#000000";
        case WHITE: return "#FFFFFF";
        default: return "Unknown Color";
    }
}

int main() {
    Color color=BLUE;

    printf("Hexadecimal code for the selected color is: %s\n", getHexCode(color));

    return 0;
}
