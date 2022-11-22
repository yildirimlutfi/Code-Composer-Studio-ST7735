#include <pictures.h>
#include <ST7735.h>
uint64_t x=0;
const uint64_t maxCount=100000;
char temp[]="      ";


int i =0;
int j =sizeof(temp);
void text1()
{

//    char temp[]="ARLENTUS";
//    ST7735_DrawString(1,1,temp,ST7735_BLACK);
//    sprintf(temp, "%d", x);
//    //strcpy("CONTROL");
//    ST7735_DrawString(1,2,temp,ST7735_BLACK);
//    ST7735_SetRotation(2);

    //filledRectangle(50,128,50,160,ST7735_BLACK);

//    ST7735_DrawBitmap(0,160,cal,120,160);
//    ST7735_DrawBitmap(0,160,parrot,120,120);

//    char temp[]="ARLENTUS";
//    sprintf(temp, "%d", x);
//    ST7735_FillRect(0,0,30,8,ST7735_WHITE);
//    ST7735_DrawString(0,0,temp,ST7735_BLACK);


    for(i=0;i<j;i++)
    {
        temp[i]=' ';
    }
    sprintf(temp, "%d", x);
 //   ST7735_DrawString2(0,0,*temp,ST7735_BLACK,ST7735_YELLOW,1);

//    ST7735_SetCursor(0,4);
//    ST7735_OutUDec(x,5);

    for(i=0;i<j;i++)
    {

        if(temp[i]==' ' && i<5)
        {
            temp[i]='k';
            temp[i+1]='g';
            break;
        }

    }



    ST7735_DrawCharS(0 ,30,temp[0],ST7735_BLACK,ST7735_WHITE,1);
    ST7735_DrawCharS(6,30,temp[1],ST7735_BLACK,ST7735_WHITE,1);
    ST7735_DrawCharS(12,30,temp[2],ST7735_BLACK,ST7735_WHITE,1);
    ST7735_DrawCharS(18,30,temp[3],ST7735_BLACK,ST7735_WHITE,1);
    ST7735_DrawCharS(24,30,temp[4],ST7735_BLACK,ST7735_WHITE,1);
    ST7735_DrawCharS(30,30,temp[5],ST7735_BLACK,ST7735_WHITE,1);
    ST7735_DrawCharS(36,30,temp[6],ST7735_BLACK,ST7735_WHITE,1);
    ST7735_DrawBitmap(140,15,batteryLevel4,20,20);


    ST7735_DrawCharS(0 ,40,temp[0],ST7735_BLACK,ST7735_WHITE,2);
    ST7735_DrawCharS(12,40,temp[1],ST7735_BLACK,ST7735_WHITE,2);
    ST7735_DrawCharS(24,40,temp[2],ST7735_BLACK,ST7735_WHITE,2);
    ST7735_DrawCharS(36,40,temp[3],ST7735_BLACK,ST7735_WHITE,2);
    ST7735_DrawCharS(48,40,temp[4],ST7735_BLACK,ST7735_WHITE,2);
    ST7735_DrawCharS(60,40,temp[5],ST7735_BLACK,ST7735_WHITE,2);
    ST7735_DrawCharS(72,40,temp[6],ST7735_BLACK,ST7735_WHITE,2);
    ST7735_DrawBitmap(140,15,batteryLevel3,20,20);

    ST7735_DrawCharS(0 ,60,temp[0],ST7735_BLACK,ST7735_WHITE,3);
    ST7735_DrawCharS(17,60,temp[1],ST7735_BLACK,ST7735_WHITE,3);
    ST7735_DrawCharS(34,60,temp[2],ST7735_BLACK,ST7735_WHITE,3);
    ST7735_DrawCharS(51,60,temp[3],ST7735_BLACK,ST7735_WHITE,3);
    ST7735_DrawCharS(68,60,temp[4],ST7735_BLACK,ST7735_WHITE,3);
    ST7735_DrawCharS(85,60,temp[5],ST7735_BLACK,ST7735_WHITE,3);
    ST7735_DrawCharS(102,60,temp[6],ST7735_BLACK,ST7735_WHITE,3);
    ST7735_DrawBitmap(140,15,batteryLevel2,20,20);

    ST7735_DrawCharS(0 ,90,temp[0],ST7735_BLACK,ST7735_WHITE,4);
    ST7735_DrawCharS(25,90,temp[1],ST7735_BLACK,ST7735_WHITE,4);
    ST7735_DrawCharS(50,90,temp[2],ST7735_BLACK,ST7735_WHITE,4);
    ST7735_DrawCharS(75,90,temp[3],ST7735_BLACK,ST7735_WHITE,4);
    ST7735_DrawCharS(100,90,temp[4],ST7735_BLACK,ST7735_WHITE,4);
    ST7735_DrawCharS(125,90,temp[5],ST7735_BLACK,ST7735_WHITE,4);
    ST7735_DrawCharS(150,90,temp[6],ST7735_BLACK,ST7735_WHITE,4);
    ST7735_DrawBitmap(140,15,batteryLevel1,20,20);

    ST7735_DrawCharS(0 ,90,temp[0],ST7735_WHITE,ST7735_BLACK,4);
    ST7735_DrawCharS(25,90,temp[1],ST7735_WHITE,ST7735_BLACK,4);
    ST7735_DrawCharS(50,90,temp[2],ST7735_WHITE,ST7735_BLACK,4);
    ST7735_DrawCharS(75,90,temp[3],ST7735_WHITE,ST7735_BLACK,4);
    ST7735_DrawCharS(100,90,temp[4],ST7735_WHITE,ST7735_BLACK,4);
    ST7735_DrawCharS(125,90,temp[5],ST7735_WHITE,ST7735_BLACK,4);
    ST7735_DrawCharS(150,90,temp[6],ST7735_WHITE,ST7735_BLACK,4);
    ST7735_DrawBitmap(140,15,batteryLevel0,20,20);




}

int main(void)
{
    Board_init();

    initTftPin();
    ST7735S_WF18F();
    ST7735_FillScreen(ST7735_WHITE);
//    filledRectangle(0,128,0,160,ST7735_WHITE);
//    writeTxt(60, 68, 60, 68, 65535, 0);
    ST7735_SetRotation(1);

    ST7735_DrawBitmap(0,23,arlentusLogo,120,23);
    while(1)
    {
        if(x<maxCount)
        {
            text1();

            delay(1000);
            x=x+1;
        }
        else
        {
            //displayOff();
            x++;
            delay(10000);
//            ST7735_FillRect(20,20,100,100,ST7735_BLACK);
        }

        if(x>maxCount)
        {
            //displayOn();
            delay(10000);
            x=0;
        }
        delay(1000);
    }

}
