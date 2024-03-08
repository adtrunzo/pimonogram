#include <stdio.h>
#include <unistd.h>
#include "sense.h"

#define WHITE 0xFFFF
#define GREEN 0x07E0
#define BLACK 0x0000
int main(void) {
    // getFrameBuffer should only get called once/program
    pi_framebuffer_t *fb=getFrameBuffer();
    sense_fb_bitmap_t *bm=fb->bitmap;


    // Right side of A
    bm->pixel[1][1]=WHITE;
    bm->pixel[1][2]=WHITE;
    bm->pixel[1][3]=WHITE;
    bm->pixel[1][4]=WHITE;
    bm->pixel[1][5]=WHITE;
    bm->pixel[1][6]=WHITE;

    // Top of A
    bm->pixel[2][0]=WHITE;
    bm->pixel[3][0]=WHITE;
    bm->pixel[4][0]=WHITE;

    // Middle of A
    bm->pixel[2][3]=WHITE;
    bm->pixel[3][3]=WHITE;
    bm->pixel[4][3]=WHITE;

    // left side of A
    bm->pixel[5][1]=WHITE;
    bm->pixel[5][2]=WHITE;
    bm->pixel[5][3]=WHITE;
    bm->pixel[5][4]=WHITE;
    bm->pixel[5][5]=WHITE;
    bm->pixel[5][6]=WHITE;
    
    sleep(1);

    // erase right side of A
    bm->pixel[1][1]=BLACK;
    bm->pixel[1][2]=BLACK;
    bm->pixel[1][3]=BLACK;
    bm->pixel[1][4]=BLACK;
    bm->pixel[1][5]=BLACK;
    bm->pixel[1][6]=BLACK;
    
    // erase top of A
    bm->pixel[2][0]=BLACK;
    bm->pixel[3][0]=BLACK;
    bm->pixel[4][0]=BLACK;
    
    // erase middle of A
    bm->pixel[2][3]=BLACK;
    bm->pixel[3][3]=BLACK;
    bm->pixel[4][3]=BLACK;
    
    // erase left side of A
    bm->pixel[5][1]=BLACK;
    bm->pixel[5][2]=BLACK;
    bm->pixel[5][3]=BLACK;
    bm->pixel[5][4]=BLACK;
    bm->pixel[5][5]=BLACK;
    bm->pixel[5][6]=BLACK;

    //Base of T
    bm->pixel[3][1]=WHITE;
    bm->pixel[3][2]=WHITE;
    bm->pixel[3][3]=WHITE;
    bm->pixel[3][4]=WHITE;
    bm->pixel[3][5]=WHITE;
    bm->pixel[3][6]=WHITE;

    //Top of T
    bm->pixel[1][1]=WHITE;
    bm->pixel[2][1]=WHITE;
    bm->pixel[3][1]=WHITE;
    bm->pixel[4][1]=WHITE;
    bm->pixel[5][1]=WHITE;
    
    sleep(1);

    //clear base of T
    bm->pixel[3][1]=BLACK;
    bm->pixel[3][2]=BLACK;
    bm->pixel[3][3]=BLACK;
    bm->pixel[3][4]=BLACK;
    bm->pixel[3][5]=BLACK;
    bm->pixel[3][6]=BLACK;

    //clear top of T
    bm->pixel[1][1]=BLACK;
    bm->pixel[2][1]=BLACK;
    bm->pixel[3][1]=BLACK;
    bm->pixel[4][1]=BLACK;
    bm->pixel[5][1]=BLACK;


    //stem of clover
    bm->pixel[0][7]=GREEN;
    bm->pixel[1][6]=GREEN;
    bm->pixel[2][5]=GREEN;

    //body of clover
    bm->pixel[1][3]=GREEN;
    bm->pixel[1][4]=GREEN;
    bm->pixel[2][3]=GREEN;
    bm->pixel[2][4]=GREEN;
    bm->pixel[3][1]=GREEN;
    bm->pixel[3][2]=GREEN;
    bm->pixel[3][3]=GREEN;
    bm->pixel[3][4]=GREEN;
    bm->pixel[3][5]=GREEN;
    bm->pixel[3][6]=GREEN;
    bm->pixel[4][1]=GREEN;
    bm->pixel[4][2]=GREEN;
    bm->pixel[4][3]=GREEN;
    bm->pixel[4][4]=GREEN;
    bm->pixel[4][5]=GREEN;
    bm->pixel[4][6]=GREEN;
    bm->pixel[5][3]=GREEN;
    bm->pixel[5][4]=GREEN;
    bm->pixel[6][3]=GREEN;
    bm->pixel[6][4]=GREEN;
    
    sleep(1);

    //clear stem of clover
    bm->pixel[0][7]=BLACK;
    bm->pixel[1][6]=BLACK;
    bm->pixel[2][5]=BLACK;

    //clear body of clover
    bm->pixel[1][3]=BLACK;
    bm->pixel[1][4]=BLACK;
    bm->pixel[2][3]=BLACK;
    bm->pixel[2][4]=BLACK;
    bm->pixel[3][1]=BLACK;
    bm->pixel[3][2]=BLACK;
    bm->pixel[3][3]=BLACK;
    bm->pixel[3][4]=BLACK;
    bm->pixel[3][5]=BLACK;
    bm->pixel[3][6]=BLACK;
    bm->pixel[4][1]=BLACK;
    bm->pixel[4][2]=BLACK;
    bm->pixel[4][3]=BLACK;
    bm->pixel[4][4]=BLACK;
    bm->pixel[4][5]=BLACK;
    bm->pixel[4][6]=BLACK;
    bm->pixel[5][3]=BLACK;
    bm->pixel[5][4]=BLACK;
    bm->pixel[6][3]=BLACK;
    bm->pixel[6][4]=BLACK;
    
    sleep(3);
    freeFrameBuffer(fb);
    return 0;
}
