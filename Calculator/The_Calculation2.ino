void The_Calculation2() {
    display.clearDisplay();
    display.setCursor(h, v);
  if ( cal == 0) {
    //display.clearDisplay();
    display.println("w    x    y    z  ans");

    display.print("0    0    0    0   ");
    display.println(b[0]);

    display.print("0    0    0    1   ");
    display.println(b[1]);

    display.print("0    0    1    0   ");
    display.println(b[2]);

    display.display();
  }


  else if (cal == 1) {
    //display.clearDisplay();
    display.println("w    x    y    z  ans");

    display.print("0    0    1    1   ");
    display.println(b[3]);

    display.print("0    1    0    0   ");
    display.println(b[4]);

    display.print("0    1    0    1   ");
    display.println(b[5]);

    display.display();

  }

  else if (cal == 2) {
    //display.clearDisplay();
    display.println("w    x    y    z  ans");

    display.print("0    1    1    0   ");
    display.println(b[6]);

    display.print("0    1    1    1   ");
    display.println(b[7]);

    display.print("1    0    0    0   ");
    display.println(b[8]);

    display.display();

  }

 else if (cal == 3) {
    //display.clearDisplay();
    display.println("w    x    y    z  ans");

    display.print("1    0    0    1   ");
    display.println(b[9]);

    display.print("1    0    1    0   ");
    display.println(b[10]);

    display.print("1    0    1    1   ");
    display.println(b[11]);


    display.display();

  }

  else if (cal == 4) {
    //display.clearDisplay();
    display.println("w    x    y    z  ans");

    display.print("1    1    0    0   ");
    display.println(b[12]);

    display.print("1    1    0    1   ");
    display.println(b[13]);

    display.print("1    1    1    0   ");
    display.println(b[14]);

    display.display();

  }

  else if (cal == 5) {
    //display.clearDisplay();
    display.println("w    x    y    z  ans");

    display.print("1    1    1    1   ");
    display.println(b[15]);

    display.println("");

    display.println("Press 'ac' to close..");

    display.display();

  }
}
//  display.println("'x'= previous...'z'=next");
//  display.println("Press 'x' for pre. page");
//  display.println("Press 'w' to see credit");
//  display.println("..Press 'ac' to close..");
