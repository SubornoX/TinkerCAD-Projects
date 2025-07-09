// C++ code
//
// Mahamudul Hasan
#include <Keypad.h>
#include <Adafruit_LiquidCrystal.h>


const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; // Connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; // Connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
Adafruit_LiquidCrystal lcd(0);

// Declaring variables for calculations
long num1 = 0, num2 = 0, result = 0;
char key;
char op = 'w';




void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(3,0);
  lcd.print("Calculator");
  lcd.setCursor(1,1);
  lcd.print("Enter Numbers:");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
}


void loop()
{

  key = keypad.getKey();


  if (key) // If a key is pressed
  { 
    if (key >= '0' && key <= '9') // If the key is a number
    {
      if (op == 'w') // If num1 is not set, set it
      {
        num1  = 10 * num1 + (key - '0'); // Convert char to int and accumulate
        lcd.print(key);
      }
      else if (op == '+' || op == '-' || op == '*' || op == '/') // If num2 is not set, set it
      {
        num2 = 10 * num2 + (key - '0'); // Convert char to int and accumulate
        lcd.print(key);
      }
    }
    else if (key == 'A') // If the key is 'A', perform addition
    {
      op = '+';
      lcd.print(" + ");
    }
    else if (key == 'B') // If the key is 'B', perform subtraction
    {
      op = '-';
      lcd.print(" - ");
    }
    else if (key == 'C') // If the key is 'C', perform multiplication
    {
      op = '*';
      lcd.print(" * ");
    }
    else if (key == 'D') // If the key is 'D', perform division
    {
      op = '/';
      lcd.print(" / ");
    }

  
    else if (key == '#') // If the key is '#', calculate the result
    {
      if (op == '+')
      {
        result = num1 + num2;
        lcd.setCursor(0, 1);
        lcd.print("Result: ");
        lcd.print(result);
      }
      else if (op == '-')
      {
        result = num1 - num2;
        lcd.setCursor(0, 1);
        lcd.print("Result: ");
        lcd.print(result);
      }
      else if (op == '*')
      {
        result = num1 * num2;
        lcd.setCursor(0, 1);
        lcd.print("Result: ");
        lcd.print(result);
      }
      else if (op == '/')
      {
        if (num2 != 0) // Check for division by zero
        {
          result = num1 / num2;
          lcd.setCursor(0, 1);
          lcd.print("Result: ");
          lcd.print(result);
        }
        else
        {
          lcd.setCursor(0, 1);
          lcd.print("Error: Div by 0");
        }
      }      
    }
    else if (key == '*') // If the key is '*', reset the calculator
    {
      num1 = 0;
      num2 = 0;
      result = 0;
      op = 'w';
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Calculator Reset");
      delay(1000);
      lcd.clear();
      lcd.setCursor(3,0);
      lcd.print("Calculator");
      lcd.setCursor(1,1);
      lcd.print("Enter Numbers:");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0, 0);
    }
  }
}

