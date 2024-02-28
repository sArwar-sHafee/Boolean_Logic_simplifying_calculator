void b_w() {
  digitalWrite(yollow_light, HIGH);
  int k = 0;
  while (digitalRead(button_w) == 0) {
    k++;
    delay(1);
  }
  if (k > 10)
    w = 1;
  digitalWrite(yollow_light, LOW);
  something = 1;
}

void b_x() {
  digitalWrite(red_light, HIGH);
  int k = 0;
  while (digitalRead(button_x) == 0) {
    k++;
    delay(1);
    if(k>800){
      x=2;
      break;
    }
  }
  if (k > 10&& x != 2)
    x = 1;
  digitalWrite(red_light, LOW);
  something = 1;
}

void b_y() {
  digitalWrite(red_light, HIGH);
  int k = 0;
  while (digitalRead(button_y) == 0) {
    k++;
    delay(1);
  }
  if (k > 10)
    y = 1;
  digitalWrite(red_light, LOW);
  something = 1;
}

void b_z() {
  digitalWrite(red_light, HIGH);
  int k = 0;
  while (digitalRead(button_z) == 0) {
    k++;
    delay(1);
    if(k>800){
      z=2;
      break;
    }
  }
  if (k > 10 && z != 2)
    z = 1;
  digitalWrite(red_light, LOW);
  something = 1;
}

void b_inverse() {
  digitalWrite(green_light, HIGH);
  int k = 0;
  while (digitalRead(button_inverse) == 0) {
    k++;
    delay(1);
  }
  if (k > 10)
    prime = 1;
  digitalWrite(green_light, LOW);
  something = 1;
}

void b_plus() {
  digitalWrite(green_light, HIGH);
  int k = 0;
  while (digitalRead(button_plus) == 0) {
    k++;
    delay(1);
  }
  if (k > 10)
    plus = 1;
  digitalWrite(green_light, LOW);
  something = 1;
}

void b_equal() {
  digitalWrite(green_light, HIGH);
  int k = 0;
  while (digitalRead(button_equal) == 0) {
    k++;
    delay(1);
  }
  if (k > 10) {
    if (equal == 3)
      equal = 2;
    else if ( equal == 0)
      equal = 1;
  }
  digitalWrite(green_light, LOW);
}

void b_ac() {
  digitalWrite(yollow_light, HIGH);
  int k = 0;
  while (digitalRead(button_ac) == 0) {
    k++;
    delay(1);
    if ( k > 1800 && no_veriable == 1) {
      digitalWrite(yollow_light, LOW);
      display.clearDisplay();
      display.setCursor(h + 42, v + 5);
      display.print("LIGHT OFF");
      display.display();
      delay(800);
      red_light  = 0;
      green_light = 0;
      yollow_light = 0;
      no_veriable = 2;
    }
    else if (k > 1800 && no_veriable == 2) {
      red_light  = 13;
      green_light = 10;
      yollow_light = 11;
      digitalWrite(yollow_light, HIGH);
      display.clearDisplay();
      display.setCursor(h + 42, v + 5);
      display.print("LIGHT ON");
      display.display();
      delay(800);
      no_veriable = 1;
    }
  }
  if (k > 10)
    ac = 1;
  digitalWrite(yollow_light, LOW);
}

void b_bracket() {
  digitalWrite(yollow_light, HIGH);
  int k = 0;
  while (digitalRead(button_bracket) == 0) {
    k++;
    delay(1);
  }
  if (k > 10) {
    if ( bracket == 3)
      bracket = 2;
    else
      bracket = 1;
  }
  digitalWrite(yollow_light, LOW);
}
