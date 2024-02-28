//Falt shomuho....... 
//1....kichu equation solve korte parbe na. example: xyx' solve korte parbe but x'yx solve parbe na
//2.... 0 ar 1 , ei duita just show er jonno.......... kono kaji korte parena sohoje. example.... 0' = 0...... y1' = y
//3....bracket close er pore or mane plus bade onno kichu likhle ar solve korte parbe na....example: (x+y)y = x+y
//4... 



#include<EEPROM.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);


//.........................************................//
#define button_x 2
#define button_y 3
#define button_z 4
#define button_w 5

#define button_inverse 6
#define button_plus 7
#define button_equal 9

#define button_ac 12
#define button_bracket 8

//.........................

int red_light  = 13;
int green_light = 10;
int yollow_light = 11;

//........................


int no_veriable = 0;
int something = 0;

int x = 0, y = 0, z = 0, w = 0;
int prime = 0, plus = 0, equal = 0, ac = 0, bracket = 0;

int pp = 0;

int flag  = 0;
int flag_x = 0, flag_y = 0, flag_z = 0, flag_w = 0;

int a[4] = { -1, -1, -1, -1};
int b[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//int b2[16]= {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int c = 0;
int d[4] = { -1, -1, -1, -1};

int h = 0, v = 0;

int b_opening = 0;

int sTop = 0;

//.........................


int a1[4], a2[4], a3[4], a4[4], a5[4], a6[4], a7[4], a8[4];
int a9[4], a10[4], a11[4], a12[4], a13[4], a14[4],  a15[4], a16[4];

//.......................

int cal = 0;

void setup() {


  //................................Adafruit.......................

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  //  display.setTextColor(WHITE);
  display.setTextSize(1);
  //  display.display();

  //.............................................................

  pinMode(button_x, INPUT_PULLUP);
  pinMode(button_y, INPUT_PULLUP);
  pinMode(button_z, INPUT_PULLUP);
  pinMode(button_inverse, INPUT_PULLUP);
  pinMode(button_plus, INPUT_PULLUP);
  pinMode(button_equal, INPUT_PULLUP);
  pinMode(button_w, INPUT_PULLUP);
  pinMode(button_ac, INPUT_PULLUP);
  pinMode(button_bracket, INPUT_PULLUP);

  pinMode(red_light, OUTPUT);
  pinMode(green_light, OUTPUT);
  pinMode(yollow_light, OUTPUT);

}


int    ghorar_dim = 0;
int    flagp = 0, flagpn = 0;
int    sTop2 = 0;
int    pp2 = 0;
int    flag2 = 0;
int    flag_x2 = 0;
int    flag_y2 = 0;
int    flag_z2 = 0;
int    flag_w2 = 0;
int    flagp2 = 0, flagpn2 = 0;
int    ghorar_dim2 = 0;
int ay =0;

void loop() {

  //........................................First Show............

  if (no_veriable == 0) {
    display.setTextColor(WHITE);
    digitalWrite(red_light, HIGH);
    digitalWrite(green_light, HIGH);
    digitalWrite(yollow_light, HIGH);
    display.setTextSize(1);
    display.setCursor(h + 45, v + 5);
    display.print("BOOLEAN");
    display.setCursor(h + 36, v + 20);
    display.print("CALCULATOR");
    display.display();
    delay(1000);
    display.clearDisplay();
    display.display();
    digitalWrite(red_light, LOW);
    digitalWrite(green_light, LOW);
    digitalWrite(yollow_light, LOW);
    no_veriable = 1;
    display.setTextSize(1);
    display.setCursor(h, v);
  }

  //..........................................Pressing Button............

  if (digitalRead(button_x) == 0)
    b_x();
  if (digitalRead(button_y) == 0)
    b_y();
  if (digitalRead(button_z) == 0)
    b_z();
  if (digitalRead(button_inverse) == 0)
    b_inverse();
  if (digitalRead(button_plus) == 0)
    b_plus();
  if (digitalRead(button_equal) == 0)
    b_equal();
  if (digitalRead(button_w) == 0)
    b_w();
  if (digitalRead(button_ac) == 0)
    b_ac();
  if (digitalRead(button_bracket) == 0)
    b_bracket();




  //...............................*.*.*.*.**.*.*.*.*NOW THE GAME IS ON.*.*.*.*.*.*.*.*.*.*.*.*.*.............//


  if (w == 1) {
    if (flag_w == 4)
      pp = 4;
    a[3] = 1;
    if (ghorar_dim == 1 && flag == pp) {
      // a[3] = a[2] = a[1] = a[0] = 2;
      sTop = 1;
    }
    flag = 4;
    flag_w = 4;
    flagp = 0;
    w = 0;
    display.print("w");
    display.display();
  }

  if (x == 1) {
    //..........................................
    if (equal == 4 && cal > 0) {
      cal--;
      The_Calculation2();
    }
    //........................................

    if (flag_x == 1)
      pp = 1;
    a[0] = 1;
    if (ghorar_dim == 1 && flag == pp) {
      // a[3] = a[2] = a[1] = a[0] = 2;
      sTop = 1;
    }
    flag = 1;
    flag_x = 1;
    flagp = 0;
    x = 0;
    display.print("x");
    display.display();
  }

  if (y == 1) {
    if (flag_y == 1)
      pp = 2;
    a[1] = 1;
    if (ghorar_dim == 1 && flag == pp) {
      // a[3] = a[2] = a[1] = a[0] = 2;
      sTop = 1;
    }
    flag = 2;
    flag_y = 1;
    flagp = 0;
    y = 0;
    display.print("y");
    display.display();
  }
  if (z == 1) {
    //......................................
    if (equal == 4 && cal < 5) {
      cal++;
      The_Calculation2();
    }
    //...................................

    if (flag_z == 1)
      pp = 3;
    a[2] = 1;
    if (ghorar_dim == 1 && flag == pp) {
      // a[3] = a[2] = a[1] = a[0] = 2;
      sTop = 1;
    }
    flag = 3;
    flag_z = 1;
    flagp = 0;
    z = 0;
    display.print("z");
    display.display();
  }
  if (x == 2) {
    a[3] = a[2] = a[1] = a[0] = 0;
   flag = 0;
    sTop = 1;
    flagp = 1;
    display.print("0");
    display.display();
    while (digitalRead(button_x) == 0) {
    }
    x = 0;
  }
  if (z == 2) {

    display.print("1");
    flag = 0;
    display.display();
    while (digitalRead(button_z) == 0) {
    }
    z = 0;
  }

  if (prime == 1) {
    if (flag == pp ) {
      //  a[3] = a[2] = a[1] = a[0] = 2;
      sTop = 1;
    }

    if (flagpn == 1 && sTop == 1)
      sTop = 0;


    if (sTop != 1) {
      a[flag - 1] = 0;
      // pp = 0;.......???????????????????
    }//.................................................Problem hobve.......... mone hocche if(flagp == 1) er condition ta sTop != 0 er moddhe rakha uchit chilo
    if (flagp == 1) {
      a[flag - 1] = 1;
      flagp = 0;
    }
    else
      flagp = 1;
    ghorar_dim = 1;
    prime = 0;
    flagpn = 1;
    if(ay != flag) flagpn = 0; 
    ay = flag;
    display.print("'");
    display.display();
  }

  if (plus == 1 ) {

    take_it_in_memory();

    display.print(" + ");
    display.display();
    plus = 0;
  }

  if (equal == 1) {  //.......... As user didn't press 'pluss' button but we need that data in memory

    take_it_in_memory();

    //    for (int i = 0; i <= 7; i++) {
    //      b[i] = 0;
    //    }

    display.setCursor(h , v + 15);
    display.print("Ans:  ");
    display.setCursor(h + 27 , v + 15);
    The_Calculation();
    display.display();
    equal = 3;

  }

  else if ( equal == 2) {
    display.clearDisplay();
    display.setCursor(h, v);
    display.setTextSize(2);
    display.print("TruthTable");
    display.setCursor(h, v + 20);
    display.setTextSize(1);
    display.print("w   x   y   z   eqv");
    display.display();
    for (int i = 0; i <= 1500; i++) {
      delay(1);
      if (digitalRead(button_ac) == 0)
        break;
    }
    display.clearDisplay();
    display.setCursor(h, v);
    display.setTextSize(1);
    The_Calculation2();

    equal = 4;
  }

  if ( bracket == 1) {


    d[3] = a[3];
    d[2] = a[2];
    d[1] = a[1];
    d[0] = a[0];
    sTop2 = sTop;
    pp2 = pp;
    flag2 = flag;
    flag_x2 = flag_x;
    flag_y2 = flag_y;
    flag_z2 = flag_z ;
    flag_w2 = flag_w;
    flagp2 = flagp ;
    flagpn2 = flagpn2;
    ghorar_dim2 = ghorar_dim;

    display.print("(");
    display.display();
    b_opening = 1;
    bracket = 3;
  }

  if ( bracket == 2) {
    display.print(")");
    display.display();
    b_opening = 0;
    bracket = 0;
  }

  if (ac == 1) {
    a[3] = a[2] = a[1] = a[0] = -1;
    c = 0;
    plus = 0;
    sTop = 0;
    pp = 0;
    flag = 0;
    flag_w = flag_x = flag_y = flag_z = 0;
    equal = 0;
    for (int i = 0; i <= 15; i++) {
      b[i] = 0;
    }
    cal = 0;
    something = 0;
    display.clearDisplay();
    display.setCursor(h, v);
    display.display();
    ac = 0;
    b_opening = 0;
    bracket = 0;
  }
}

