//Part 1: Introduce your characters
int test0 = 0;
int test1 = 1;
int test2 = 2;
int test3 = 3;
int test6 = 6;
int test9 = 9;
int test10 = 10;
int test12 = 12;


//Part 2: Give your characters a trait
//        *Only happens once, in the beginning*
void setup()
{
  pinMode(test0, OUTPUT);
  pinMode(test1, OUTPUT);
  pinMode(test2, OUTPUT);
  pinMode(test3, OUTPUT);
  pinMode(test6, OUTPUT);
  pinMode(test9, OUTPUT);
  pinMode(test10, OUTPUT);
  pinMode(test12, OUTPUT);
  
}
 
//Part 3: Define your action
//        *Think: FOREVER BLOCK*
void loop()
{
  quickBlink();
  longBlink();
  blinkBlink();
  threeBlink();
  sixBlink();
  nineBlink();
  tenBlink();
  twelveBlink();

}
 
//Part 4: Create new stage blocking/actions
//        *Think: Create a Block*
void quickBlink()
{
  digitalWrite(test10, HIGH);
  delay(200);
  digitalWrite(test10, LOW);
  delay(200);
}
 
void longBlink()
{
  digitalWrite(test0, HIGH);
  delay(1500);
  digitalWrite(test0, LOW);
  delay(1500);
}

void blinkBlink()
{
  digitalWrite(test1, HIGH);
  delay(200);
  digitalWrite(test1, LOW);
  delay(200);
  digitalWrite(test1, HIGH);
  delay(200);
  digitalWrite(test1, LOW);
  delay(200);
}

void threeBlink()
{
  digitalWrite(test3, HIGH);
  delay(200);
  digitalWrite(test3, LOW);
  delay(100);
  digitalWrite(test3, HIGH);
  delay(200);
  digitalWrite(test3, LOW);
  delay(100);
  digitalWrite(test3, HIGH);
  delay(200);
  digitalWrite(test3, LOW);
  delay(100);
}

void sixBlink()
{
  digitalWrite(test6, HIGH);
  delay(100);
  digitalWrite(test6, LOW);
  delay(100);
  digitalWrite(test6, HIGH);
  delay(300);
  digitalWrite(test6, LOW);
  delay(100);
  digitalWrite(test6, HIGH);
  delay(100);
  digitalWrite(test6, LOW);
  delay(100);
}


void nineBlink()
{
  digitalWrite(test9, HIGH);
  delay(1500);
  digitalWrite(test9, LOW);
  delay(300);
  digitalWrite(test9, HIGH);
  delay(100);
  digitalWrite(test9, LOW);
  delay(300);
}

void tenBlink()
{
  digitalWrite(test10, HIGH);
  delay(100);
  digitalWrite(test10, LOW);
  delay(300);
  digitalWrite(test10, HIGH);
  delay(200);
  digitalWrite(test10, LOW);
  delay(300);
  digitalWrite(test10, HIGH);
  delay(300);
  digitalWrite(test10, LOW);
  delay(300);
  digitalWrite(test10, HIGH);
  delay(400);
  digitalWrite(test10, LOW);
  delay(300);

}

void twelveBlink()
{
  digitalWrite(test12, HIGH);
  delay(1500);
  digitalWrite(test12, LOW);
  delay(1500);
  digitalWrite(test12, HIGH);
  delay(200);
  digitalWrite(test12, LOW);
  delay(200);
}