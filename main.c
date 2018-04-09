#include "header.h"


int main()
{
    // Lancer allegro et le mode graphique
    allegro_init();
    install_keyboard();
    install_mouse();

    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0)!=0)
    {
        allegro_message("prb gfx mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    //declaration des variables
    BITMAP*buffer;
    buffer=create_bitmap(SCREEN_W,SCREEN_H);

    clear_bitmap(buffer);

    //boucle de jeux
    while (!key[KEY_ESC])
    {
        menu(buffer);
        circlefill(buffer,SCREEN_W/2,SCREEN_H/2,250,makecol(250,250,250));
        blit(buffer,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        readkey();
    }


    return 0;
}
END_OF_MAIN();
