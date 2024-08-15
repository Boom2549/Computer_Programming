#include <windows.h>            //This is the header file for windows.
#include <stdio.h>              //C standard library header file

void SetColor(int ForgC);

int main()
{
    //printf("Test color");       //Here the text color is white
    SetColor(34);               //Function call to change the text color
    //printf("Test color");       //Now the text color is green
    //for(int i = 0; i>=0; i++)
        printf("    xxx   xxx               xx      oooooo\n");
        printf("   xxxxx xxxxx              xx      oo  oo\n");
        printf("    xxxxxxxxx               xx      oo  oo\n");
        printf("     xxxxxxx                xx      oo  oo\n");
        printf("      xxxxx                 xx      oo  oo\n");
        printf("       xxx                  xxxxxx  oo  oo\n");
        printf("        x                   xxxxxx  oooooo\n");

    return 0;
}

void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
