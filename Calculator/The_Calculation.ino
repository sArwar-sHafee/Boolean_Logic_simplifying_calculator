void The_Calculation() {

  if ( something == 0) {
    for (int i = 0; i < 16; i++) {
      b[i] = EEPROM.read(i + 7);
    }
  }
//   int u[0] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
//   int v[6] = {0, 0, 0, 0, 0, 0};
  int u[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int s_flag = 0;

  if ( b[0] == 0 && b[1] == 0 && b[2] == 0 && b[3] == 0 && b[4] == 0 && b[5] == 0 && b[6] == 0 && b[7] == 0 && b[8] == 0 && b[9] == 0 && b[10] == 0 && b[11] == 0 && b[12] == 0 && b[13] == 0 && b[14] == 0 && b[15] == 0) {
    display.print("0");
  }
  if ( b[0] == 1 && b[1] == 1 && b[2] == 1 && b[3] == 1 && b[4] == 1 && b[5] == 1 && b[6] == 1 && b[7] == 1 && b[8] == 1 && b[9] == 1 && b[10] == 1 && b[11] == 1 && b[12] == 1 && b[13] == 1 && b[14] == 1 && b[15] == 1) {
    display.print("1");
    s_flag = 3;
  }
  if ( s_flag != 3) {
    if (b[0] == 1 && b[1] == 1 && b[2] == 1 && b[3] == 1 && b[4] == 1 && b[5] == 1 && b[6] == 1 && b[7] == 1) {
      display.print("w'");
      s_flag = 1;
      //v[0] = 1;
      u[0] = u[1] = u[2] = u[3] = u[4] = u[5] = u[6] = u[7] = 1;
    }
    if (b[4] == 1 && b[5] == 1 && b[6] == 1 && b[7] == 1 && b[12] == 1 && b[13] == 1 && b[14] == 1 && b[15] == 1) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("x");
      s_flag = 1;
      //v[1] = 1;
      u[4] = u[5] = u[6] = u[7] = u[12] = u[13] = u[14] = u[15] = 1;
    }
    if (b[8] == 1 && b[9] == 1 && b[10] == 1 && b[11] == 1 && b[12] == 1 && b[13] == 1 && b[14] == 1 && b[15] == 1) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w");
      s_flag = 1;
      //v[2] = 1;
      u[8] = u[9] = u[10] = u[11] = u[12] = u[13] = u[14] = u[15] = 1;
    }
    if (b[0] == 1 && b[1] == 1 && b[2] == 1 && b[3] == 1 && b[8] == 1 && b[9] == 1 && b[10] == 1 && b[11] == 1) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("x'");
      s_flag = 1;
      //v[3] = 1;
      u[0] = u[1] = u[2] = u[3] = u[8] = u[9] = u[10] = u[11] = 1;
    }
    if (b[0] == 1 && b[1] == 1 && b[4] == 1 && b[5] == 1 && b[8] == 1 && b[9] == 1 && b[12] == 1 && b[13] == 1) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("y'");
      s_flag = 1;
      //v[4] = 1;
      u[0] = u[1] = u[4] = u[5] = u[8] = u[9] = u[12] = u[13] = 1;
    }
    if (b[1] == 1 && b[3] == 1 && b[5] == 1 && b[7] == 1 && b[9] == 1 && b[11] == 1 && b[13] == 1 && b[15] == 1) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("z");
      s_flag = 1;
      //v[5] = 1;
      u[1] = u[3] = u[5] = u[7] = u[9] = u[11] = u[13] = u[15] = 1;
    }
    if (b[2] == 1 && b[3] == 1 && b[6] == 1 && b[7] == 1 && b[10] == 1 && b[11] == 1 && b[14] == 1 && b[15] == 1) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("y");
      s_flag = 1;
      //v[6] = 1;
      u[2] = u[3] = u[6] = u[7] = u[10] = u[11] = u[14] = u[15] = 1;
    }
    if (b[0] == 1 && b[2] == 1 && b[4] == 1 && b[6] == 1 && b[8] == 1 && b[10] == 1 && b[12] == 1 && b[14] == 1) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("z'");
      s_flag = 1;
      //v[7] = 1;
      u[0] = u[2] = u[4] = u[6] = u[8] = u[10] = u[12] = u[14] = 1;
    }









    if (b[0] == 1 && b[1] == 1 && b[2] == 1 && b[3] == 1) { // && v[0] == 0 && v[3] == 0
      if (u[0] == 0 || u[1] == 0 || u[2] == 0 || u[3] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'x'");
        s_flag = 1;
        u[0] = u[1] = u[2] = u[3] = 1;
      }
    }
    if (b[4] == 1 && b[5] == 1 && b[6] == 1 && b[7] == 1) {
      if (u[4] == 0 || u[5] == 0 || u[6] == 0 || u[7] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'x");
        s_flag = 1;
        u[4] = u[5] = u[6] = u[7] = 1;
      }
    }
    if (b[12] == 1 && b[13] == 1 && b[14] == 1 && b[15] == 1) {
      if (u[12] == 0 || u[13] == 0 || u[14] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wx");
        s_flag = 1;
        u[12] = u[13] = u[14] = u[15] = 1;
      }
    }
    if (b[8] == 1 && b[9] == 1 && b[10] == 1 && b[11] == 1) {
      if (u[8] == 0 || u[9] == 0 || u[10] == 0 || u[11] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wx'");
        s_flag = 1;
        u[8] = u[9] = u[10] = u[11] = 1;
      }
    }
    if (b[0] == 1 && b[4] == 1 && b[8] == 1 && b[12] == 1) {
      if (u[0] == 0 || u[4] == 0 || u[8] == 0 || u[12] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("y'z'");
        s_flag = 1;
        u[0] = u[4] = u[8] = u[12] = 1;
      }
    }
    if (b[1] == 1 && b[5] == 1 && b[9] == 1 && b[13] == 1) {
      if (u[1] == 0 || u[5] == 0 || u[9] == 0 || u[13] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("y'z");
        s_flag = 1;
        u[1] = u[5] = u[9] = u[13] = 1;
      }
    }
    if (b[3] == 1 && b[7] == 1 && b[11] == 1 && b[15] == 1) {
      if (u[3] == 0 || u[7] == 0 || u[11] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("yz");
        s_flag = 1;
        u[3] = u[7] = u[11] = u[15] = 1;
      }
    }
    if (b[2] == 1 && b[6] == 1 && b[10] == 1 && b[14] == 1) {
      if (u[2] == 0 || u[6] == 0 || u[10] == 0 || u[14] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("yz'");
        s_flag = 1;
        u[2] = u[6] = u[10] = u[14] = 1;
      }
    }

    if (b[0] == 1 && b[1] == 1 && b[4] == 1 && b[5] == 1 ) {
      if (u[0] == 0 || u[1] == 0 || u[4] == 0 || u[5] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'y'");
        s_flag = 1;
        u[0] = u[1] = u[4] = u[5] = 1;
      }
    }
    if (b[1] == 1 && b[3] == 1 && b[5] == 1 && b[7] == 1) {
      if (u[1] == 0 || u[3] == 0 || u[5] == 0 || u[7] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'z");
        s_flag = 1;
        u[1] = u[3] = u[5] = u[7] = 1;
      }
    }
    if (b[2] == 1 && b[3] == 1 && b[6] == 1 && b[7] == 1) {
      if (u[2] == 0 || u[3] == 0 || u[6] == 0 || u[7] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'y");
        s_flag = 1;
        u[2] = u[3] = u[6] = u[7] = 1;
      }
    }
    if (b[0] == 1 && b[2] == 1 && b[4] == 1 && b[6] == 1) {
      if (u[0] == 0 || u[2] == 0 || u[4] == 0 || u[6] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'z'");
        s_flag = 1;
        u[0] = u[2] = u[4] = u[6] = 1;
      }
    }
    if (b[4] == 1 && b[5] == 1 && b[12] == 1 && b[13] == 1) {
      if (u[4] == 0 || u[5] == 0 || u[12] == 0 || u[13] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xy'");
        s_flag = 1;
        u[4] = u[5] = u[12] = u[13] = 1;
      }
    }
    if (b[5] == 1 && b[7] == 1 && b[13] == 1 && b[15] == 1) {
      if (u[5] == 0 || u[7] == 0 || u[13] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xz");
        s_flag = 1;
        u[5] = u[7] = u[13] = u[15] = 1;
      }
    }
    if (b[6] == 1 && b[7] == 1 && b[14] == 1 && b[15] == 1) {
      if (u[6] == 0 || u[7] == 0 || u[14] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xy");
        s_flag = 1;
        u[6] = u[7] = u[14] = u[15] = 1;
      }
    }
    if (b[4] == 1 && b[6] == 1 && b[12] == 1 && b[14] == 1) {
      if (u[4] == 0 || u[6] == 0 || u[12] == 0 || u[14] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xz'");
        s_flag = 1;
        u[4] = u[6] = u[12] = u[14] = 1;
      }
    }
    if (b[8] == 1 && b[9] == 1 && b[13] == 1 && b[12] == 1) {
      if (u[8] == 0 || u[9] == 0 || u[13] == 0 || u[12] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wy'");
        s_flag = 1;
        u[8] = u[9] = u[13] = u[12] = 1;
      }
    }
    if (b[9] == 1 && b[11] == 1 && b[13] == 1 && b[15] == 1) {
      if (u[9] == 0 || u[11] == 0 || u[13] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wz");
        s_flag = 1;
        u[9] = u[11] = u[13] = u[15] = 1;
      }
    }
    if (b[10] == 1 && b[11] == 1 && b[14] == 1 && b[15] == 1) {
      if (u[10] == 0 || u[11] == 0 || u[14] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wy");
        s_flag = 1;
        u[10] = u[11] = u[14] = u[15] = 1;
      }
    }
    if (b[8] == 1 && b[10] == 1 && b[12] == 1 && b[14] == 1) {
      if (u[8] == 0 || u[10] == 0 || u[12] == 0 || u[14] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wz'");
        s_flag = 1;
        u[8] = u[10] = u[12] = u[14] = 1;
      }
    }
    if (b[0] == 1 && b[1] == 1 && b[8] == 1 && b[9] == 1) {
      if (u[0] == 0 || u[1] == 0 || u[8] == 0 || u[9] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'y'");
        s_flag = 1;
        u[0] = u[1] = u[8] = u[9] = 1;
      }
    }
    if (b[1] == 1 && b[3] == 1 && b[9] == 1 && b[11] == 1) {
      if (u[1] == 0 || u[3] == 0 || u[9] == 0 || u[11] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'z");
        s_flag = 1;
        u[1] = u[3] = u[9] = u[11] = 1;
      }
    }
    if (b[2] == 1 && b[3] == 1 && b[10] == 1 && b[11] == 1) {
      if (u[2] == 0 || u[3] == 0 || u[10] == 0 || u[11] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'y");
        s_flag = 1;
        u[2] = u[3] = u[10] = u[11] = 1;
      }
    }
    if (b[0] == 1 && b[2] == 1 && b[8] == 1 && b[10] == 1) {
      if (u[0] == 0 || u[2] == 0 || u[8] == 0 || u[10] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'z'");
        s_flag = 1;
        u[0] = u[2] = u[8] = u[10] = 1;
      }
    }











    if ( b[0] == 1 && b[1] == 1) {
      if ( u[0] == 0 || u[1] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'x'y'");
        s_flag = 1;
      }
    }
    if ( b[1] == 1 && b[3] == 1) {
      if ( u[1] == 0 || u[3] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'x'z");
        s_flag = 1;
      }
    }
    if ( b[2] == 1 && b[3] == 1) {
      if ( u[2] == 0 || u[3] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'x'y");
        s_flag = 1;
      }
    }
    if ( b[0] == 1 && b[2] == 1) {
      if ( u[0] == 0 || u[2] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'x'z'");
        s_flag = 1;
      }
    }
    if ( b[4] == 1 && b[5] == 1) {
      if ( u[4] == 0 || u[5] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'xy'");
        s_flag = 1;
      }
    }
    if ( b[5] == 1 && b[7] == 1) {
      if ( u[5] == 0 || u[7] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'xz");
        s_flag = 1;
      }
    }
    if ( b[6] == 1 && b[7] == 1) {
      if ( u[6] == 0 || u[7] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'xy");
        s_flag = 1;
      }
    }
    if ( b[4] == 1 && b[6] == 1) {
      if ( u[4] == 0 || u[6] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'xz'");
        s_flag = 1;
      }
    }
    if ( b[12] == 1 && b[13] == 1) {
      if ( u[12] == 0 || u[13] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wxy'");
        s_flag = 1;
      }
    }
    if ( b[13] == 1 && b[15] == 1) {
      if ( u[13] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wxz");
        s_flag = 1;
      }
    }
    if ( b[14] == 1 && b[15] == 1) {
      if ( u[14] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wxy");
        s_flag = 1;
      }
    }
    if ( b[12] == 1 && b[14] == 1) {
      if ( u[12] == 0 || u[14] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'xz'");
        s_flag = 1;
      }
    }
    if ( b[8] == 1 && b[9] == 1) {
      if ( u[8] == 0 || u[9] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wx'y'");
        s_flag = 1;
      }
    }
    if ( b[9] == 1 && b[11] == 1) {
      if ( u[9] == 0 || u[11] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wx'z");
        s_flag = 1;
      }
    }
    if ( b[10] == 1 && b[11] == 1) {
      if ( u[10] == 0 || u[11] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'x'y");
        s_flag = 1;
      }
    }
    if ( b[8] == 1 && b[10] == 1) {
      if ( u[8] == 0 || u[10] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wx'z'");
        s_flag = 1;
      }
    }



    if ( b[0] == 1 && b[4] == 1) {
      if ( u[0] == 0 || u[4] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'y'z'");
        s_flag = 1;
      }
    }
    if ( b[4] == 1 && b[12] == 1) {
      if ( u[4] == 0 || u[12] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xy'z,");
        s_flag = 1;
      }
    }
    if ( b[8] == 1 && b[12] == 1) {
      if ( u[8] == 0 || u[12] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wy'z'");
        s_flag = 1;
      }
    }
    if ( b[0] == 1 && b[8] == 1) {
      if ( u[0] == 0 || u[8] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'y'z'");
        s_flag = 1;
      }
    }
    if ( b[1] == 1 && b[5] == 1) {
      if ( u[1] == 0 || u[5] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'y'z");
        s_flag = 1;
      }
    }
    if ( b[5] == 1 && b[13] == 1) {
      if ( u[5] == 0 || u[13] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xy'z");
        s_flag = 1;
      }
    }
    if ( b[13] == 1 && b[9] == 1) {
      if ( u[13] == 0 || u[9] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wy'z");
        s_flag = 1;
      }
    }
    if ( b[1] == 1 && b[9] == 1) {
      if ( u[1] == 0 || u[9] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'y'z");
        s_flag = 1;
      }
    }
    if ( b[3] == 1 && b[7] == 1) {
      if ( u[3] == 0 || u[7] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'yz");
        s_flag = 1;
      }
    }
    if ( b[7] == 1 && b[15] == 1) {
      if ( u[7] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xyz");
        s_flag = 1;
      }
    }
    if ( b[11] == 1 && b[15] == 1) {
      if ( u[11] == 0 || u[15] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wyz");
        s_flag = 1;
      }
    }
    if ( b[3] == 1 && b[11] == 1) {
      if ( u[3] == 0 || u[11] == 0) { //.............................???????????????????????????
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'yz");
        s_flag = 1;
      }
    }
    if ( b[2] == 1 && b[6] == 1) {
      if ( u[2] == 0 || u[6] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("w'yz'");
        s_flag = 1;
      }
    }
    if ( b[6] == 1 && b[14] == 1) {
      if ( u[6] == 0 || u[14] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("xyz'");
        s_flag = 1;
      }
    }
    if ( b[10] == 1 && b[14] == 1) {
      if ( u[10] == 0 || u[14] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("wyz");
        s_flag = 1;
      }
    }
    if ( b[2] == 1 && b[10] == 1) {
      if ( u[2] == 0 || u[10] == 0) {
        if ( s_flag == 1)
          display.print(" + ");
        display.print("x'yz'");
        s_flag = 1;
      }
    }
















    if ( b[0] == 1 && b[1] == 0 && b[2] == 0 && b[4] == 0 && b[8] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'x'y'z'");
      s_flag = 1;
    }
    if ( b[1] == 1 && b[0] == 0 && b[3] == 0 && b[5] == 0 && b[9] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'x'y'z");
      s_flag = 1;
    }
    if ( b[3] == 1 && b[1] == 0 && b[2] == 0 && b[7] == 0 && b[11] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'x'yz'");
      s_flag = 1;
    }
    if ( b[2] == 1 && b[0] == 0 && b[3] == 0 && b[6] == 0 && b[10] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'x'yz'");
      s_flag = 1;
    }
    if ( b[4] == 1 && b[0] == 0 && b[5] == 0 && b[6] == 0 && b[12] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'xy'z'");
      s_flag = 1;
    }
    if ( b[5] == 1 && b[1] == 0 && b[4] == 0 && b[7] == 0 && b[13] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'xy'z");
      s_flag = 1;
    }
    if ( b[7] == 1 && b[3] == 0 && b[5] == 0 && b[6] == 0 && b[15] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'xyz");
      s_flag = 1;
    }
    if ( b[6] == 1 && b[2] == 0 && b[4] == 0 && b[7] == 0 && b[14] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("w'xyz'");
      s_flag = 1;
    }
    if ( b[12] == 1 && b[4] == 0 && b[8] == 0 && b[13] == 0 && b[14] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wxy'z'");
      s_flag = 1;
    }
    if ( b[13] == 1 && b[5] == 0 && b[9] == 0 && b[12] == 0 && b[15] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wxy'z");
      s_flag = 1;
    }
    if ( b[15] == 1 && b[7] == 0 && b[11] == 0 && b[13] == 0 && b[14] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wxyz");
      s_flag = 1;
    }
    if ( b[14] == 1 && b[6] == 0 && b[10] == 0 && b[12] == 0 && b[15] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wxyz'");
      s_flag = 1;
    }
    if ( b[8] == 1 && b[0] == 0 && b[9] == 0 && b[10] == 0 && b[12] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wx'y'z'");
      s_flag = 1;
    }
    if ( b[9] == 1 && b[1] == 0 && b[8] == 0 && b[11] == 0 && b[13] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wx'y'z");
      s_flag = 1;
    }
    if ( b[11] == 1 && b[3] == 0 && b[9] == 0 && b[10] == 0 && b[15] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wx'yz");
      s_flag = 1;
    }
    if ( b[10] == 1 && b[2] == 0 && b[8] == 0 && b[11] == 0 && b[14] == 0) {
      if ( s_flag == 1)
        display.print(" + ");
      display.print("wx'yz'");
      s_flag = 1;
    }
  }
  for (int i = 0; i < 16; i++) {
    EEPROM.write(i + 7, b[i]);
  }
  display.setCursor(h, v+30);
}
